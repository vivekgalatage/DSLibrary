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
                "src/utils/bitSet/BitSet.cpp"
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
                "src/utils/bitSet/BitSet_test.cpp",
                "src/testing/TestFramework.cpp",
                "src/testing/UnitTestRunner.cpp",
            ],
            "include_dirs": [
                "src"
            ]
        }
    ]
}
