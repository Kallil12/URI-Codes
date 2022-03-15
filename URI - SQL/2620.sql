SELECT customers.name, orders.id
FROM customers
INNER JOIN orders ON orders.id_customers = customers.id
WHERE EXTRACT(MONTH FROM orders.orders_date) <= 6
