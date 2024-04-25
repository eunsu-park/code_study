DROP TABLE IF EXISTS book_info;

CREATE TABLE book_info (
	book_id INTEGER NOT NULL PRIMARY KEY,
	book_name VARCHAR(20) NOT NULL UNIQUE
);

INSERT INTO book_info VALUES(1, 'POSTGRESQL'), (2, 'MONGODB');

CREATE TABLE library (
	id INTEGER NOT NULL PRIMARY KEY,
	name VARCHAR(40) NOT NULL,
	book_name VARCHAR(20) NOT NULL REFERENCES book_info(book_name)
);

INSERT INTO library VALUES (1, '국립도서관', 'POSTGRESQL');

SELECT * FROM book_info;

ALTER TABLE book_info DROP COLUMN book_name CASCADE;

SELECT * FROM book_info;