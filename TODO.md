# Todos

Next action: 
- CI!
- need to fill in more of the language as it makes writing tests hard, TODOs in other tests aren't clear
  enough (note to self: read the skipped tests)

## List

- Arrays
- Object System
  - debugging - list keys
  - Object.prototype -> prelude
  - real implementation of properties - descriptors etc
- varargs: currently stuff like console.log only takes one args
- var hoisting
  - variable
  - functions
- GC optimisation
  - at the mo free list fragments in a way that'd be trivial to defrag while processing (as lots of it is likely continugous)
  - currently will fail to allocate N bytes if there is plenty of space left, as long as all of the free chunks are < N big

## Minor

- `getTrue()`, `getNaN()` etc are wasteful and unnecessary, make constants. 

## Dones

- The array of pointers to function argument names needs to be heap allocated (or stored somewhere)
