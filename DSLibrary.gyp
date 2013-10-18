{
    "variables": {
        "build_mode%": "static_library"
    },

    "target_defaults": {
        "default_configuration": "Release",
        "configurations": {
            "Debug": {
                "conditions": [
                    [
                    "build_mode=='shared_library'", {
                        "cflags": ["-Wall", "-g", "-fPIC"]
                    }]
                ]
            },
            "Release": {
                "cflags": ["-Wall"]
            }
        }
    },

    "targets": [
        {
            "target_name": "libds",
            "type": "<(build_mode)",
            "sources": [
                "src/base/String.cpp",
                "src/container/Vector.cpp",
                "src/utils/BitSet.cpp"
            ]
        },
        {
            "target_name": "unitTestRunner",
            "type": "executable",
            "dependencies": [
                "libds"
            ],
            "sources": [
                "src/testing/TestFramework.cpp",
                "src/testing/UnitTestRunner.cpp",
                "tests/BitSet_test.cpp",
                "tests/String_test.cpp",
                "tests/Vector_test.cpp"
            ],
            "include_dirs": [
                "src"
            ]
        }
    ]
}
