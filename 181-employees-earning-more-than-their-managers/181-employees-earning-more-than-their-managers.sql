# Write your MySQL query statement below
select name as Employee from Employee t where t.salary>(select g.salary from Employee g where t.managerId=g.id)