git submodule init
git submodule update
set PATH=C:\python27;.\third-party\gyp;%PATH%
where python
REM third-party\gyp\gyp.bat --depth=. DSLibrary.gyp
gyp --depth=. -G msvs_version=2010e DSLibrary.gyp
msbuild DSLibrary.sln
Debug\dslibrary.exe
