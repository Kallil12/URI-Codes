SELECT customers.name
FROM customers
INNER JOIN legal_person ON legal_person.id_customers = customers.id
WHERE customers.id IN (SELECT id_customers FROM legal_person)
