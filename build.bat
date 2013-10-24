git submodule init
git submodule update
set PATH=C:\python27;%PATH%
where python
REM third-party\gyp\gyp.bat --depth=. DSLibrary.gyp
msbuild %MSBuildLogger%\my-msbuild-log.xml DSLibrary.sln
Debug\dslibrary.exe
