msg <- 'Hello World';

qtd = nchar(msg);
print(qtd);

upper = toupper(msg);
lower = tolower(msg);
print(upper);
print(lower);

rows = c("11","12","13");
columns = c(1:4);

m = matrix(data = c(3,14), nrow = 4, byrow = TRUE);
print(m)

v1 = c(5,2,1)
v2 = c(12,12,13,14)
r <- array(c(v1, v2),  dim = c(3,3,2))
print(r)
