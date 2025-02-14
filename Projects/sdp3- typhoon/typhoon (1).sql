-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 12, 2023 at 08:48 PM
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
-- Database: `typhoon`
--

-- --------------------------------------------------------

--
-- Table structure for table `practice_info`
--

CREATE TABLE `practice_info` (
  `username` varchar(255) NOT NULL,
  `accuracy` int(11) NOT NULL,
  `wordCount` int(10) NOT NULL,
  `totalTime` int(10) NOT NULL,
  `date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `practice_info`
--

INSERT INTO `practice_info` (`username`, `accuracy`, `wordCount`, `totalTime`, `date`) VALUES
('sadaf', 76, 54, 46, '2023-08-06'),
('alamgir12', 75, 19, 49, '2023-06-08'),
('shuvo', 45, 43, 13, '2023-04-05'),
('nabil', 48, 24, 29, '2023-09-17'),
('abid', 32, 37, 18, '2023-06-25'),
('sadaf', 89, 60, 40, '2023-06-10'),
('alamgir12', 83, 25, 59, '2023-10-27'),
('shuvo', 81, 24, 59, '2023-09-18'),
('nabil', 45, 34, 26, '2023-07-25'),
('abid', 100, 59, 16, '2023-10-26'),
('sadaf', 51, 16, 41, '2023-03-07'),
('alamgir12', 30, 53, 38, '2023-04-23'),
('shuvo', 68, 57, 24, '2023-11-12'),
('nabil', 70, 46, 25, '2023-03-22'),
('abid', 81, 37, 12, '2023-02-13'),
('sadaf', 50, 10, 10, '2023-12-12'),
('sadaf', 7, 5, 10, '2023-12-12'),
('sadaf', 37, 16, 17, '2023-12-12'),
('alamgir12', 62, 60, 51, '2023-12-12'),
('shuvo', 73, 46, 19, '2023-12-12'),
('nabil', 35, 59, 52, '2023-12-12'),
('alamgir12', 68, 8, 10, '2023-12-12');

-- --------------------------------------------------------

--
-- Table structure for table `user_info`
--

CREATE TABLE `user_info` (
  `fullName` varchar(255) NOT NULL,
  `username` varchar(255) NOT NULL,
  `email` varchar(255) NOT NULL,
  `password` varchar(255) NOT NULL,
  `ogPass` varchar(30) NOT NULL,
  `q1` varchar(25) NOT NULL,
  `q2` varchar(25) NOT NULL,
  `q3` varchar(25) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `user_info`
--

INSERT INTO `user_info` (`fullName`, `username`, `email`, `password`, `ogPass`, `q1`, `q2`, `q3`) VALUES
('Shuvo Roy', 'shuvo', 'shuvo@gmail.com', '81dc9bdb52d04dc20036dbd8313ed055', '1234', 'caty', 'kacchi', '2022'),
('Alamgir Khan', 'alamgir12', 'alamgir0868@gmail.com', '81dc9bdb52d04dc20036dbd8313ed055', '1234', 'fs', 'bubt', '2022'),
('Abid Ul Islam', 'abid', 'abid@gmail.com', 'd93591bdf7860e1e4ee2fca799911215', '4321', 'gg', 'anythingg', '2023'),
('Nabil Islam', 'nabil', 'nabil@gmail.com', '827ccb0eea8a706c4c34a16891f84e7b', '12345', 'dog', 'kacchi', '2022'),
('Sadaf Arafat', 'sadaf', 'sadaf@gmail.com', '01cfcd4f6b8770febfb40cb906715822', '54321', 'kat', 'brie', '2022');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
