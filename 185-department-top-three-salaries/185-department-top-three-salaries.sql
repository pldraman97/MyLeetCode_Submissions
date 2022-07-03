# Write your MySQL query statement below
select B.name Department, A.name Employee, Salary
from 
Employee A join Department B on A.departmentId = B.id
where (departmentID, salary) in 
(select distinct departmentId, salary
from
(select departmentId, salary, dense_rank() over(partition by departmentId order by salary desc) as ra
from Employee
 group by departmentId, salary
) C
where ra <= 3)