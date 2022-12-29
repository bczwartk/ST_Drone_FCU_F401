@echo on

set PROJECT_DIR=%~dp0\..\STM32 FW Project\Official latest release 221117
set PROJECT_DIR=%~dp0\..\STM32 FW Project\Official release with BLE Remocon - 170318
call %~dp0\setenv_iar_ewarm.bat

pushd "%PROJECT_DIR%\EWARM"
del /q /s .\cpptest\cpptestscan.bdf
iarbuild ToyDrone.ewp -clean cpptest -log all
cpptesttrace --cpptesttraceResponseFileOption=-f iarbuild ToyDrone.ewp -make cpptest -log all
dir cpptest

popd


