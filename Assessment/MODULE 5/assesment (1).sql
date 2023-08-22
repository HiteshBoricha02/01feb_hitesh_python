-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 22, 2023 at 02:29 PM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assesment`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `customer_id` int(6) NOT NULL,
  `cust_name` varchar(11) DEFAULT NULL,
  `city` varchar(11) DEFAULT NULL,
  `grade` int(6) DEFAULT NULL,
  `salesman_id` int(6) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`customer_id`, `cust_name`, `city`, `grade`, `salesman_id`) VALUES
(3001, 'Brad Guzan', 'London', 0, 5005),
(3002, 'Nick Rimand', 'New york', 100, 5001),
(3003, 'Jozy Altido', 'Moscow', 200, 5007),
(3004, 'Fabian John', 'Paris', 300, 5006),
(3005, 'Graham Zusi', 'California', 200, 5002),
(3007, 'Brad davis', 'New york', 200, 5001),
(3008, 'Julain Gree', 'London', 300, 5002),
(3009, 'Geoff camer', 'Berlin', 100, 5003);

-- --------------------------------------------------------

--
-- Table structure for table `salesman`
--

CREATE TABLE `salesman` (
  `salesman_id` int(6) DEFAULT NULL,
  `name` varchar(11) DEFAULT NULL,
  `city` varchar(11) DEFAULT NULL,
  `commission` varchar(6) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salesman`
--

INSERT INTO `salesman` (`salesman_id`, `name`, `city`, `commission`) VALUES
(5001, 'James Hoog', 'New york', '0.15'),
(5002, 'Nail Knite', 'Paris', '0.13'),
(5005, 'Pit Alex', 'London', '0.11'),
(5006, 'Mc Lyon', 'Paris', '0.14'),
(5007, 'Paul Adam', 'Rome', '0.13'),
(5003, 'Lausen Hen', 'San Jose', '0.12');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`customer_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
