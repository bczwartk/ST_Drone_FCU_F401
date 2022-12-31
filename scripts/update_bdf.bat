@echo on

rem update BDF to fix issue with trailing baskslashes in include paths
rem to be run if needed *after* the make-BDF script

c:\Parasoft\apps\cpptest-pro-2022.1.0\bin\engine\bin\cpptestpy.exe %~dp0\update_bdf.py .\cpptest\cpptestscan.bdf
move /y .\cpptest\cpptestscan.bdf .\cpptest\cpptestscan.orig.bdf
move /y .\cpptest\cpptestscan.bdf.updated .\cpptest\cpptestscan.bdf
