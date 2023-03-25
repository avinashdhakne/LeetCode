# Write your MySQL query statement below
UPDATE salary
SET sex = CHAR(ASCII('f') ^ ASCII('m') ^ ASCII(sex));