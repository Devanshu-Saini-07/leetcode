# Write your MySQL query statement below
SELECT 
    d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary

FROM Employee e

-- Connect each employee with their department
JOIN Department d
    ON e.departmentId = d.id

-- Find the highest salary in each department
JOIN (
    SELECT departmentId, MAX(salary) AS max_salary
    FROM Employee
    GROUP BY departmentId
) m

-- Match employees whose salary is the highest in their department
ON e.departmentId = m.departmentId
AND e.salary = m.max_salary;