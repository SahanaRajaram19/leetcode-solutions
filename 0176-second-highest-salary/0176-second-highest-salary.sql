select MAX(SALARY) AS SecondHighestSalary from employee
where salary < (select MAX(SALARY) FROM EMPLOYEE);