# Write your MySQL query statement below
SELECT name as Customers 
FROM customers
LEFT JOIN orders
ON customers.id = orders.customerId
WHERE orders.id is NULL;