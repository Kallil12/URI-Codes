SELECT comp.company_code,
       comp.founder,
       COUNT(DISTINCT l_man.lead_manager_code),
       COUNT(DISTINCT s_man.senior_manager_code),
       COUNT(DISTINCT man.manager_code),
       COUNT(DISTINCT empl.employee_code)
FROM Company comp
JOIN Lead_Manager l_man ON l_man.company_code = comp.company_code
JOIN Senior_Manager s_man ON s_man.lead_manager_code = l_man.lead_manager_code
JOIN Manager man ON man.senior_manager_code = s_man.senior_manager_code
JOIN Employee empl ON empl.senior_manager_code = man.senior_manager_code
GROUP BY comp.company_code, comp.founder
ORDER BY comp.company_code
