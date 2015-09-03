// Tests that we record macro expansions only when they are at real locations.
//- @M0 defines/binding M0
#define M0 int x;
//- @M1 defines/binding M1
#define M1 M0
//- @M2 defines/binding M2
#define M2 M1
//- @M2 ref/expands M2
//- @M2 ref/expands/transitive M1
//- @M2 ref/expands/transitive M0
M2
