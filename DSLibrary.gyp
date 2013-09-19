{
    "targets": [
        {
            "target_name": "libds",
            "type": "static_library",
            "sources": [
                "src/base/String.cpp",
                "src/container/Vector.cpp"
            ]
        },
        {
            "target_name": "unitTestRunner",
            "type": "executable",
            "dependencies": [
                "libds"
            ],
            "sources": [
                "src/base/String_test.cpp",
                "src/container/Vector_test.cpp",
                "src/testing/TestFramework.cpp",
                "src/testing/UnitTestRunner.cpp"
            ],
            "include_dirs": [
                "src"
            ]
        }
    ]
}