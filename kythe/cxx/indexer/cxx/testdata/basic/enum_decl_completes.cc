// Checks that enumerations complete forward declarations.
//- @E defines/binding EEnumFwd
//- EEnumFwd.node/kind sum
//- EEnumFwd.complete incomplete
//- EEnumFwd.subkind enumClass
//- EEnumFwd named EEnumName
enum class E;
//- @E defines/binding EEnum
//- EEnum.complete definition
//- EEnum named EEnumName
//- @E completes/uniquely EEnumFwd
enum class E { };