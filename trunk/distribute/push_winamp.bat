cd /d "%~dp0"
call distribute.bat
copy plugins\*.* "C:\Program Files (x86)\Winamp\Plugins"
pause