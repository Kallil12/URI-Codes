SELECT
  (SUBSTRING(cpf,1,3) ||
  '.' ||
  SUBSTRING(cpf,4,3) ||
  '.' ||
  SUBSTRING(cpf,7,3) ||
  '-' ||
  SUBSTRING(cpf,10,2)) AS cpf_ajustado
FROM natural_person
WHERE natural_person.id_customers IN (SELECT id FROM customers)
