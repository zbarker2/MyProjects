# please copy this into the perl compiler
# "my" in perl refers to static scoping while "local"  
$x = 5;
sub fun1
{
return $x;    
}
sub fun2
{
    #this will use dynamic scoping to change the value of x to what the value is where is called.
    local $x = 7;
    return fun1();
}
sub fun3{
    #this will not change the value for x in fun1 since it is staticlaly scoped and x will get its value from where fun1 was initialized.  
    my $x = 13;
    return fun1();
}

print fun2()."\n";
print fun3()."\n";