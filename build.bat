git submodule init
git submodule update
set PATH=C:\python27;.\third-party\gyp;%PATH%
where python
REM third-party\gyp\gyp.bat --depth=. DSLibrary.gyp
gyp --help
msbuild %MSBuildLogger%\my-msbuild-log.xml DSLibrary.sln
Debug\dslibrary.exe
