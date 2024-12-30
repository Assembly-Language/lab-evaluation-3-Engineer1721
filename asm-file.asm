INCLUDE Irvine32.inc
.data
msg db "Assembly procedure end now", 0

.code
asmfunc PROC p1:DWORD, p2:DWORD  
    
    mov esi, p1       
    mov edi, p2        
    xor eax, eax       

    mov ecx, 10        
    
pass:
    mov edx, [esi]     
    test edx, 1       
    jz skip            

    add eax, edx       

skip:
    add esi, 4         
    loop pass          

    mov [edi], eax     

    ret
asmfunc ENDP
end
