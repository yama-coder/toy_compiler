.intel_syntax noprefix
.globl main
main:
  push 1
  push 15
  pop rdi
  pop rax
  cmp rax, rdi
  setle al
  movzb rax, al
  push rax
  pop rax
  ret
