.intel_syntax noprefix
.globl main
main:
  push 5
  push 25
  pop rdi
  pop rax
  add rax, rdi
  push rax
  pop rax
  ret
