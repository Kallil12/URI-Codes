SELECT name,
    CASE
      WHEN type ILIKE 'A' THEN 20.0
      WHEN type ILIKE 'B' THEN 70.0
      WHEN type ILIKE 'C' THEN 70.0
    END
FROM products
ORDER BY type DESC, id DESC;
