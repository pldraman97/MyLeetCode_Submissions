# Write your MySQL query statement below
select distinct num ConsecutiveNums
from (select id, num, lead(num, 1) over(order by id)L1, lead(num, 2) over(order by id) L2
from Logs) A
where num = L1 and num = L2
