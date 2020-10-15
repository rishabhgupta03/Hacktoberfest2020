create table customer1 (cid number(10), cname varchar(20), cadd varchar(20));
insert into customer1 values(10, 'Abc', 'Amritsar')
insert into customer1 values(10, 'Def', 'Jalandhar')
select * from customer1

DECLARE
c_id customer1.cid%TYPE:=10;
c_name customer1.cname%TYPE;
c_add customer1.cadd%TYPE;
BEGIN
select cname,cadd INTO c_name, c_add from customer1 WHERE cid=c_id;
EXCEPTION
when too_many_rows then
dbms_output.put_line('More than one row');
WHEN no_data_found THEN
dbms_output.put_line('No data found');
WHEN others THEN
dbms_output.put_line('Some other error');
END;
