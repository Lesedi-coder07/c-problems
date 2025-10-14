        arr[0], arr[1]
arr = ["Hello", "Bye". "Last"]
FUNCTION TwoMany (searchString string, INT maxVal  ) 

    DECLARE count: INT = 0
    
    FOR i=0, i < 150, i++
       if arr[i] = searchString
          count++
       ENDIF
     ENDFOR
     
     IF count > maxVal
       return true
     ENDIF
     
     ELSE
        return false
        
        
 ENDFUNCTION


twoMany ("Bye", 1)