.intel_syntax noprefix
.globl main
main:
  push rbp
  mov rbp, rsp
  sub rsp, 208
  push 42
  push 42
  pop rdi
  pop rax
  push rax
  pop rax
  mov rsp, rbp
  pop rbp
  ret
