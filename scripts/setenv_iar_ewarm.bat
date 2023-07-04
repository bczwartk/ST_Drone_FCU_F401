@echo on

rem setlocal ENABLEDELAYEDEXPANSION

rem the defaults
set CPPTEST_HOME=c:\Parasoft\apps\cpptest-pro-2023.1.1
set IAR_HOME=c:\Program Files\IAR Systems\Embedded Workbench 9.1

IF %COMPUTERNAME%==HOUND2 (
    set IAR_HOME=E:\apps\EWARM_9.1
)

set PATH=%IAR_HOME%\common\bin;%IAR_HOME%\arm\bin;%CPPTEST_HOME%;%CPPTEST_HOME%\bin;%PATH%

iarbuild --version
iccarm --version
ilinkarm --version
cpptestcli -version
