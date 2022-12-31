@echo on

rem set PROJECT_DIR=%~dp0\..\STM32 FW Project\Official latest release 221117
set PROJECT_DIR=%~dp0\..\STM32 FW Project\Official release with BLE Remocon - 170318
call %~dp0\setenv_iar_ewarm.bat

rem scan project build to get BDF
pushd "%PROJECT_DIR%\EWARM"
del /q /s .\cpptest\cpptestscan.bdf .\cpptest\cpptestscan.orig.bdf
iarbuild ToyDrone.ewp -clean cpptest -log all
cpptesttrace --cpptesttraceResponseFileOption=-f iarbuild ToyDrone.ewp -make cpptest -log all
dir .\cpptest

rem update BDF to fix issue with trailing baskslashes in include paths
%CPPTEST_HOME%\bin\engine\bin\cpptestpy.exe %~dp0\update_bdf.py .\cpptest\cpptestscan.bdf
move /y .\cpptest\cpptestscan.bdf .\cpptest\cpptestscan.orig.bdf
move /y .\cpptest\cpptestscan.bdf.updated .\cpptest\cpptestscan.bdf
dir .\cpptest

popd

