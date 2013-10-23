git submodule init
git submodule update
set PATH=C:\python27;%PATH%
python --version
msbuild %MSBuildLogger%\my-msbuild-log.xml DSLibrary.sln
Debug\dslibrary.exe
