-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 09, 2024 at 04:15 AM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `smartlib`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `userId` int(11) NOT NULL,
  `username` varchar(50) DEFAULT NULL,
  `server` varchar(50) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `password` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`userId`, `username`, `server`, `email`, `password`) VALUES
(1, 'Afia_52', NULL, NULL, NULL),
(2, 'shuvo', '', 'sadaf@gmail.com', ''),
(3, 'alamgir12', 'chitagong', 'abid@gmail.com', '81dc9bdb52d04dc20036dbd8313ed055');

-- --------------------------------------------------------

--
-- Table structure for table `books`
--

CREATE TABLE `books` (
  `book_id` int(11) NOT NULL,
  `book_name` varchar(255) DEFAULT NULL,
  `dept_name` varchar(100) DEFAULT NULL,
  `writer_name` varchar(100) DEFAULT NULL,
  `quantity` int(11) DEFAULT NULL,
  `cover_path` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`book_id`, `book_name`, `dept_name`, `writer_name`, `quantity`, `cover_path`) VALUES
(2, 'Introduction to Algorithms', 'Computer Science', 'Thomas H. Cormen', 100, ''),
(3, 'Clean Code: A Handbook of Agile Software Craftsmanship', 'Computer Science', 'Robert C. Martin', 80, ''),
(4, 'The C Programming Language', 'Computer Science', 'Brian Kernighan, Dennis Ritchie', 120, ''),
(5, 'Digital Design', 'Electrical Engineering', 'M. Morris Mano', 70, ''),
(6, 'Principles of Electric Circuits', 'Electrical Engineering', 'Thomas L. Floyd', 90, ''),
(7, 'Thermodynamics: An Engineering Approach', 'Mechanical Engineering', 'Yunus A. Çengel, Michael A. Boles', 110, ''),
(8, 'Mechanics of Materials', 'Mechanical Engineering', 'Ferdinand P. Beer, E. Russell Johnston Jr., John T. DeWolf', 100, ''),
(9, 'Structural Analysis', 'Civil Engineering', 'Russell C. Hibbeler', 85, ''),
(10, 'Introduction to Environmental Engineering', 'Civil Engineering', 'Mackenzie L. Davis, David A. Cornwell', 75, ''),
(11, 'Fluid Mechanics', 'Chemical Engineering', 'Frank M. White', 95, ''),
(12, 'Chemical Process Control: An Introduction to Theory and Practice', 'Chemical Engineering', 'George Stephanopoulos', 65, ''),
(13, 'Biochemical Engineering Fundamentals', 'Biomedical Engineering', 'James E. Bailey, David F. Ollis', 55, ''),
(14, 'Aircraft Structures', 'Aerospace Engineering', 'David J. Peery', 80, ''),
(15, 'Fundamentals of Industrial Ergonomics', 'Industrial Engineering', 'Gary A. Davis, W. Bentley MacLeod', 70, ''),
(16, 'Software Engineering: A Practitioner\'s Approach', 'Software Engineering', 'Roger S. Pressman', 85, ''),
(17, 'theory of relativity', 'physics', 'einestein', 12, ''),
(18, 'theory of relativity', 'physics', 'einestein', 0, '');

-- --------------------------------------------------------

--
-- Table structure for table `dept_list`
--

CREATE TABLE `dept_list` (
  `dept_id` int(11) NOT NULL,
  `dept_name` varchar(100) DEFAULT NULL,
  `total_books` int(11) DEFAULT NULL,
  `total_users` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `dept_list`
--

INSERT INTO `dept_list` (`dept_id`, `dept_name`, `total_books`, `total_users`) VALUES
(1, 'Computer Science', 500, 50),
(2, 'Electrical Engineering', 300, 30),
(3, 'Mechanical Engineering', 400, 40),
(4, 'Civil Engineering', 250, 25),
(5, 'Chemical Engineering', 350, 35),
(6, 'Biomedical Engineering', 200, 20),
(7, 'Aerospace Engineering', 280, 28),
(8, 'Industrial Engineering', 320, 32),
(9, 'Software Engineering', 450, 45),
(10, 'Environmental Engineering', 270, 27),
(11, 'Materials Science', 380, 38),
(12, 'Nuclear Engineering', 220, 22),
(13, 'Petroleum Engineering', 310, 31),
(14, 'Ocean Engineering', 240, 24),
(15, 'Geological Engineering', 260, 26),
(16, 'Mining Engineering', 340, 34),
(17, 'Systems Engineering', 400, 40),
(18, 'Robotics Engineering', 290, 29),
(19, 'Biomechanical Engineering', 270, 27),
(20, 'Ceramic Engineering', 360, 36);

-- --------------------------------------------------------

--
-- Table structure for table `issued_books`
--

CREATE TABLE `issued_books` (
  `book_id` int(11) DEFAULT NULL,
  `user_id` int(11) DEFAULT NULL,
  `date_issued` date DEFAULT NULL,
  `date_return` date DEFAULT NULL,
  `no_copy` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `issued_books`
--

INSERT INTO `issued_books` (`book_id`, `user_id`, `date_issued`, `date_return`, `no_copy`) VALUES
(7, 8, '2024-01-08', NULL, 4),
(2, 20, '2023-10-11', NULL, 5),
(2, 2, '2024-01-10', NULL, 4),
(12, 16, '2023-12-10', NULL, 1),
(8, 12, '2023-07-16', NULL, 1),
(17, 2, '2023-06-01', NULL, 4),
(15, 17, '2023-05-20', NULL, 4),
(3, 2, '2024-01-10', NULL, 3),
(6, 3, '2023-09-13', NULL, 1),
(13, 1, '2023-09-24', NULL, 1),
(13, 11, '2023-07-08', NULL, 1),
(6, 12, '2023-10-28', NULL, 3),
(14, 19, '2023-11-20', NULL, 1),
(15, 8, '2023-09-10', NULL, 1),
(5, 16, '2024-01-19', NULL, 2),
(16, 17, '2023-05-21', NULL, 4),
(4, 8, '2023-06-18', NULL, 2),
(2, 7, '2024-04-01', NULL, 2),
(7, 17, '2023-08-17', NULL, 3),
(4, 15, '2023-09-10', NULL, 1),
(12, 10, '2024-01-21', NULL, 2),
(10, 4, '2024-01-06', NULL, 3),
(3, 12, '2023-11-30', NULL, 5),
(10, 16, '2024-04-26', NULL, 5),
(11, 2, '2024-03-10', NULL, 3),
(10, 8, '2024-04-29', NULL, 5),
(5, 2, '2023-12-23', NULL, 3),
(2, 10, '2024-03-10', NULL, 3),
(15, 18, '2023-07-11', NULL, 5),
(16, 20, '2023-08-22', NULL, 2),
(3, 10, '2023-05-13', NULL, 4),
(10, 9, '2024-03-10', NULL, 3),
(13, 5, '2024-05-09', NULL, 4),
(5, 20, '2024-03-29', NULL, 1),
(17, 20, '2023-06-17', NULL, 1),
(14, 6, '2023-12-26', NULL, 3),
(9, 2, '2023-05-11', NULL, 3),
(2, 16, '2023-06-30', NULL, 5),
(11, 3, '2023-07-23', NULL, 3),
(7, 7, '2023-10-07', NULL, 3),
(15, 6, '2024-01-01', NULL, 2),
(9, 1, '2024-01-15', NULL, 1),
(8, 20, '2023-05-11', NULL, 3),
(5, 12, '2023-08-12', NULL, 2),
(3, 5, '2023-12-11', NULL, 3),
(11, 8, '2024-02-07', NULL, 4),
(12, 8, '2023-11-25', NULL, 5),
(14, 1, '2023-07-26', NULL, 3),
(9, 10, '2023-12-18', NULL, 3),
(14, 14, '2024-02-13', NULL, 4);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `user_id` int(11) NOT NULL,
  `username` varchar(255) NOT NULL,
  `email` varchar(100) DEFAULT NULL,
  `server` varchar(50) DEFAULT NULL,
  `std_id` int(20) NOT NULL,
  `dept_id` int(11) DEFAULT NULL,
  `birthdate` date DEFAULT NULL,
  `password` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`user_id`, `username`, `email`, `server`, `std_id`, `dept_id`, `birthdate`, `password`) VALUES
(1, 'shuvo', '01303083473@ds', 'chitagong', 2147483647, NULL, '2024-05-25', '81dc9bdb52d04dc20036dbd8313ed055'),
(2, 'abdullahrahman', 'abdullah@example.com', 'Dhaka', 1234567890, NULL, '1995-06-15', '81dc9bdb52d04dc20036dbd8313ed055'),
(3, 'taslimaakter', 'taslima@example.com', 'Chittagong', 2147483647, NULL, '1996-08-21', 'd93591bdf7860e1e4ee2fca799911215'),
(4, 'farhanahmed', 'farhan@example.com', 'Cumilla', 2147483647, NULL, '1997-10-17', '81dc9bdb52d04dc20036dbd8313ed055'),
(5, 'naziabegum', 'nazia@example.com', 'Barishal', 2147483647, NULL, '1998-12-25', 'd93591bdf7860e1e4ee2fca799911215'),
(6, 'rakibhasan', 'rakib@example.com', 'Dhaka', 2147483647, NULL, '1999-04-09', '81dc9bdb52d04dc20036dbd8313ed055'),
(7, 'tanzilhossain', 'tanzil@example.com', 'Chittagong', 2147483647, NULL, '2000-02-14', 'd93591bdf7860e1e4ee2fca799911215'),
(8, 'sadiaafrin', 'sadia@example.com', 'Cumilla', 2147483647, NULL, '2001-11-28', '81dc9bdb52d04dc20036dbd8313ed055'),
(9, 'shantoislam', 'shanto@example.com', 'Barishal', 2147483647, NULL, '2002-07-03', 'd93591bdf7860e1e4ee2fca799911215'),
(10, 'sumaiyaakter', 'sumaiya@example.com', 'Dhaka', 2147483647, NULL, '2003-09-19', '81dc9bdb52d04dc20036dbd8313ed055'),
(11, 'kamalahmed', 'kamal@example.com', 'Chittagong', 123456789, NULL, '2004-05-12', 'd93591bdf7860e1e4ee2fca799911215'),
(12, 'sabrinasultana', 'sabrina@example.com', 'Cumilla', 1234567890, NULL, '2005-03-27', '81dc9bdb52d04dc20036dbd8313ed055'),
(13, 'rahimmia', 'rahim@example.com', 'Barishal', 2147483647, NULL, '2006-01-31', 'd93591bdf7860e1e4ee2fca799911215'),
(14, 'jannatulferdous', 'jannatul@example.com', 'Dhaka', 2147483647, NULL, '2007-07-14', '81dc9bdb52d04dc20036dbd8313ed055'),
(15, 'nafisrahman', 'nafis@example.com', 'Chittagong', 2147483647, NULL, '2008-10-06', 'd93591bdf7860e1e4ee2fca799911215'),
(16, 'anikaislam', 'anika@example.com', 'Cumilla', 2147483647, NULL, '2009-12-23', '81dc9bdb52d04dc20036dbd8313ed055'),
(17, 'zubayerahmed', 'zubayer@example.com', 'Barishal', 2147483647, NULL, '2010-08-18', 'd93591bdf7860e1e4ee2fca799911215'),
(18, 'fariaafrin', 'faria@example.com', 'Dhaka', 2147483647, NULL, '2011-06-05', '81dc9bdb52d04dc20036dbd8313ed055'),
(19, 'rafihasan', 'rafi@example.com', 'Chittagong', 2147483647, NULL, '2012-04-11', 'd93591bdf7860e1e4ee2fca799911215'),
(20, 'tahminaakter', 'tahmina@example.com', 'Cumilla', 2147483647, NULL, '2013-02-09', '81dc9bdb52d04dc20036dbd8313ed055'),
(21, 'alifahmed', 'alif@example.com', 'Barishal', 123456789, NULL, '2014-11-07', 'd93591bdf7860e1e4ee2fca799911215');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admin`
--
ALTER TABLE `admin`
  ADD PRIMARY KEY (`userId`),
  ADD UNIQUE KEY `username` (`username`);

--
-- Indexes for table `books`
--
ALTER TABLE `books`
  ADD PRIMARY KEY (`book_id`);

--
-- Indexes for table `dept_list`
--
ALTER TABLE `dept_list`
  ADD PRIMARY KEY (`dept_id`);

--
-- Indexes for table `issued_books`
--
ALTER TABLE `issued_books`
  ADD KEY `book_id` (`book_id`),
  ADD KEY `user_id` (`user_id`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`user_id`),
  ADD KEY `dept_id` (`dept_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `admin`
--
ALTER TABLE `admin`
  MODIFY `userId` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `books`
--
ALTER TABLE `books`
  MODIFY `book_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=19;

--
-- AUTO_INCREMENT for table `dept_list`
--
ALTER TABLE `dept_list`
  MODIFY `dept_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `user_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=22;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `issued_books`
--
ALTER TABLE `issued_books`
  ADD CONSTRAINT `issued_books_ibfk_1` FOREIGN KEY (`book_id`) REFERENCES `books` (`book_id`),
  ADD CONSTRAINT `issued_books_ibfk_2` FOREIGN KEY (`user_id`) REFERENCES `user` (`user_id`);

--
-- Constraints for table `user`
--
ALTER TABLE `user`
  ADD CONSTRAINT `user_ibfk_1` FOREIGN KEY (`dept_id`) REFERENCES `dept_list` (`dept_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
