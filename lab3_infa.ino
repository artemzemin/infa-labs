program lab3;
    var 
        x,y:real;
        n:integer;
        
    begin
        x:=1;
        repeat
        if x <=3 then
        n:=2;
            y:=sin(n*x)-cos(n/x);
            writeln('x=',x:4:2);
        x:=x+0.1;
        until x>3;
    end.
    
