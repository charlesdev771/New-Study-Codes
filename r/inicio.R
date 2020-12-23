#coment

aa <- "ola mundo";
m <- TRUE;
teste = 7;
print(aa);
print( teste );


vetor <- 1:10;
vet = LETTERS[1:30];
print(vetor);
print(teste %in% vetor);
m <- matrix(c(2,4,5,6,7), nrow = 5, ncol = 7, byrow = TRUE);
t <- m %*% t(m)
print(t)

x <- 7.1;
if (is.integer(x)) {
    print(x);
}else{
    msg = paste("Nao inteiro", x, sep= ": ");
    print(msg)
}

for(i in vetor)
{
    print(i) 
}

multi = function(x, y) {
    return (x * y); 
}

print(multi(10,10));



