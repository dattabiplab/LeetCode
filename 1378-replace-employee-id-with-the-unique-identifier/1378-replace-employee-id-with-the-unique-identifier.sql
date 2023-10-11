# Write your MySQL query statement below
select e.name,euni.unique_id from employees e left join employeeuni euni on e.id=euni.id;
