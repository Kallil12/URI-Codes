SELECT name, CAST(EXTRACT(DAY FROM payday) AS INT) AS payment_day
FROM loan
