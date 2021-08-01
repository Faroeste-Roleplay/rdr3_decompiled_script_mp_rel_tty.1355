#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	struct<1719> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077936128, 1065353216, 4, 8, 50, 10, 200, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053609165, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 500, 600, 800, 1500, 10, 1500, 1400, 1300, 1200, 1100, 200, 1048576000, 1065353216, 0 } ;
	var uLocal_1735 = 32;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 15;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 15;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 15;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 15;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 15;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 15;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 15;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 15;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 15;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 15;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 15;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 15;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 15;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 15;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 15;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 15;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 15;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 15;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 15;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 15;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 15;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 15;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 15;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 15;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 15;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 15;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 15;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 15;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 15;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 15;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 15;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 15;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: **********************************************");
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: ********** FISHING SCRIPT LAUNCHING **********");
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: **********************************************");
	iVar0 = 521;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: HAS_FORCE_CLEANUP_OCCURRED returned true");
		func_1(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
	}
	func_2(&Local_16, -1);
	while (true)
	{
		if (func_3(&Local_16))
		{
			func_4(&Local_16, 4);
		}
		else
		{
			func_5(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			if (func_6(&Local_16) > 0)
			{
				func_7();
				func_8(&(Local_16.f_529));
				func_9(&Local_16, &(Local_16.f_529));
				func_10(&(Local_16.f_529), &(Local_16.f_754));
				func_11(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			}
		}
		switch (func_6(&Local_16))
		{
			case 0:
				func_12(&Local_16);
				break;
			case 1:
				func_13(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 2:
				func_14(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 3:
				func_15(&Local_16);
				break;
			case 4:
				func_16(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
				break;
		}
		func_17(&(Local_16.f_529), &(Local_16.f_754));
		func_18(&(Local_16.f_1718));
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: terminate started");
	func_19(uParam0, uParam1, uParam2, 0);
	func_20(&(uParam0->f_19));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam2->f_1[iVar0] == 0)
		{
			func_21(uParam1, uParam2, iVar0, 1, 0);
		}
		else
		{
			func_21(uParam1, uParam2, iVar0, 0, 0);
		}
		iVar0++;
	}
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_25(uParam1);
	func_26(uParam3);
	func_27(uParam0);
	func_28(0);
	func_29(uParam0, 0);
	func_30();
	func_31(0);
	func_32();
	HUD::_0x160825DADF1B04B3();
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: terminate finished");
	func_33();
}

void func_2(var uParam0, char* sParam1)
{
	if (func_34(uParam0, 2))
	{
		return;
	}
	func_35(uParam0, 2);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: finished pre process game instance ", sParam1);
}

bool func_3(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: exiting fishing - participant 0 doesn't exist");
		return true;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: exiting fishing - participant 0 is dead");
		func_36();
		return true;
	}
	if (func_37(1, 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: exiting fishing - KILL_EVENT_CAUGHT returned true");
		func_36();
		return true;
	}
	if (func_34(uParam0, 1) && !func_38(uParam0->f_24))
	{
		uParam0->f_46 = func_39(PLAYER::PLAYER_PED_ID(), uParam0->f_24, 0);
		if (uParam0->f_46 > 15f)
		{
			DEBUG::_0xF0783374333FD8CE(920, 124, "FISHING: exiting fishing - participant 0 is more than ", 15f, " from ", &(uParam0->f_24));
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, int iParam1)
{
	if (func_6(uParam0) != iParam1)
	{
		uParam0->f_10 = iParam1;
		DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: participant 0 state -> ", func_40(uParam0->f_10, 0));
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	if (func_34(uParam0, 1))
	{
		return;
	}
	func_35(uParam0, 1);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: bAllowEquipRod ", Global_1903123.f_3);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: *** MP FISHING ***");
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: region ", func_42(func_41(), 0));
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: district ", func_44(func_43(), 0));
	DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: FISHING_DATA_UNSAVED_BIT_COMPETITIVE_MODE ", func_45(16), " init");
	func_30();
	func_28(1);
	func_29(uParam0, 1);
	func_46(&(uParam0->f_82), 1);
	func_47(uParam0);
	func_48(uParam1);
	func_49(uParam1, uParam2, -1);
	uParam0->f_27[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_27[1 /*3*/] = { -20f, 20f, 0f };
	uParam0->f_27[2 /*3*/] = { -20f, 50f, 0f };
	uParam0->f_27[3 /*3*/] = { 20f, 50f, 0f };
	uParam0->f_27[4 /*3*/] = { 20f, 20f, 0f };
	uParam0->f_24 = { Global_34 };
}

int func_6(var uParam0)
{
	return uParam0->f_10;
}

void func_7()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_50())
	{
		Global_1903123.f_35 = TASK::_0xF3735ACD11ACD500(PLAYER::PLAYER_PED_ID(), &(Global_1903123.f_5));
	}
	else
	{
		Global_1903123.f_5 = 1;
		Global_1903123.f_35 = 0;
	}
}

void func_8(var uParam0)
{
	uParam0->f_4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
	uParam0->f_7 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
}

void func_9(var uParam0, var uParam1)
{
	POPULATION::_0x8EC7CD701F872F87(2f, 512, 0, 0, -1, -1);
	POPULATION::_0x8EC7CD701F872F87(0.1f, 1024, 0, 0, -1, -1);
	if (func_6(uParam0) == 0)
	{
		return;
	}
	func_51(uParam0);
	if (func_52())
	{
		func_53(uParam0);
	}
	if (func_45(2))
	{
		func_54(0);
		func_55(2);
	}
	if (func_45(4))
	{
		func_54(1);
		func_55(4);
	}
	if (func_56(&(uParam0->f_79)))
	{
		if (func_57(&(uParam0->f_79)) < 500)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			func_58(&(uParam0->f_79));
		}
	}
	if (func_50())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_1903123.f_35 == 1 && PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID(), 256) == 0)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 134, true);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.5f);
		}
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		func_59();
		CAM::_0x8910C24B7E0046EC();
		if (Global_1903123.f_35 == 1)
		{
			if (Global_1903123.f_5 > 1 && Global_1903123.f_5 != 12)
			{
				func_60(0);
			}
			if (Global_1903123.f_5 > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			if (Global_1903123.f_5 == 12)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
			}
		}
		if ((Global_1903123.f_5 > 1 && Global_1903123.f_5 != 6) || func_61(uParam1, 4096))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		uParam0->f_24 = { Global_34 };
	}
}

void func_10(var uParam0, var uParam1)
{
	if (Global_1903123.f_35 == 1 && (((Global_1903123.f_5 == 4 || Global_1903123.f_5 == 6) || Global_1903123.f_5 == 7) || Global_1903123.f_5 == 10))
	{
		func_62(uParam0);
		func_63(uParam0);
		if (Global_1903123.f_5 == 7)
		{
			func_64(uParam0, uParam1);
		}
	}
	else
	{
		uParam0->f_12 = -99999f;
		uParam0->f_13 = -99999f;
		uParam0->f_14 = -99999f;
		uParam0->f_15 = -99999f;
		uParam0->f_16 = -99999f;
		uParam0->f_17 = -99999f;
	}
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[15];
	var uVar17[15];
	var uVar33[15];
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	int iVar55;

	func_65(uParam0, uParam2);
	uParam2->f_797 = 0;
	uParam2->f_798 = 0;
	iVar54 = 0;
	iVar54 = 0;
	while (iVar54 < 30)
	{
		bVar53 = ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar54]);
		if (bVar53 == 0)
		{
			iVar0++;
			if (func_66(uParam2->f_247[iVar54]))
			{
				uVar33[uParam2->f_247[iVar54]]++;
				if (uParam2->f_340[iVar54] == 1)
				{
					uVar17[uParam2->f_247[iVar54]]++;
				}
				else
				{
					uVar1[uParam2->f_247[iVar54]]++;
				}
				if (func_67(uParam2->f_247[iVar54]))
				{
					iVar51++;
				}
				else
				{
					iVar52++;
				}
			}
			if (uParam2->f_1[iVar54] == 1)
			{
				iVar49++;
			}
			else
			{
				iVar50++;
			}
		}
		if ((uParam2->f_154[iVar54] >= 3 && uParam2->f_154[iVar54] < 10) && bVar53 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iVar54, " is no longer alive in initial IS_ENTITY_DEAD check");
			func_21(uParam1, uParam2, iVar54, 0, 0);
		}
		switch (uParam2->f_154[iVar54])
		{
			case 0:
				func_68(uParam2, iVar54);
				break;
			case 1:
				func_69(uParam0, uParam2, iVar54);
				break;
			case 2:
				func_70(uParam1, uParam2, iVar54);
				break;
			case 3:
				func_71(uParam1, uParam2, iVar54);
				break;
			case 4:
				func_72(uParam0, uParam1, uParam2, iVar54);
				break;
			case 5:
				func_73(uParam0, uParam1, uParam2, iVar54);
				break;
			case 6:
			case 7:
				func_74(uParam0, uParam1, uParam2, iVar54);
				break;
			case 8:
				func_75(uParam1, uParam2, iVar54);
				break;
			case 9:
				func_76(uParam2, iVar54);
				break;
			case 10:
				func_77(uParam1, uParam2, iVar54);
				break;
		}
		iVar54++;
	}
	uParam2->f_471 = iVar0;
	iVar55 = 0;
	iVar55 = 0;
	while (iVar55 < 15)
	{
		uParam2->f_472[iVar55] = uVar1[iVar55];
		uParam2->f_488[iVar55] = uVar17[iVar55];
		uParam2->f_504[iVar55] = uVar33[iVar55];
		iVar55++;
	}
	uParam2->f_520 = iVar49;
	uParam2->f_521 = iVar50;
	uParam2->f_522 = iVar51;
	uParam2->f_523 = iVar52;
	uParam2->f_799++;
	if (uParam2->f_799 >= 30)
	{
		uParam2->f_799 = 0;
	}
}

void func_12(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		return;
	}
	func_78();
	if (func_79(uParam0))
	{
		func_4(uParam0, 1);
	}
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	if (func_50())
	{
		func_19(uParam0, uParam1, uParam2, 1);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 *** SHORE FISHING ***");
		func_4(uParam0, 2);
	}
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	if (func_80(uParam0, uParam1, uParam2))
	{
		func_19(uParam0, uParam1, uParam2, 0);
		func_4(uParam0, 3);
	}
	else
	{
		func_81(uParam0, uParam1, uParam2);
	}
}

void func_15(var uParam0)
{
	func_4(uParam0, 1);
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_1(uParam0, uParam1, uParam2, uParam3);
}

void func_17(var uParam0, var uParam1)
{
	int iVar0;

	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_50()) && Global_1903123.f_35 == 1)
	{
		iVar0 = func_82(uParam0);
		if (func_83(uParam1, iVar0))
		{
			Global_1903123.f_5.f_7 = 0;
			Global_1903123.f_5.f_8 = func_84(uParam0, uParam1);
			Global_1903123.f_5.f_9 = 0f;
			Global_1903123.f_5.f_18 = uParam1->f_309[iVar0];
			if (uParam0->f_163 == 0)
			{
				Global_1903123.f_5.f_19 = uParam1->f_962;
			}
			else
			{
				Global_1903123.f_5.f_19 = uParam1->f_963;
			}
			Global_1903123.f_5.f_17 = 0f;
			Global_1903123.f_5.f_13 = 0f;
			Global_1903123.f_5.f_20 = 0f;
			Global_1903123.f_5.f_21 = 0f;
		}
		else if (func_85(uParam1, iVar0))
		{
			Global_1903123.f_5.f_7 = uParam1->f_123[iVar0];
			Global_1903123.f_5.f_8 = func_84(uParam0, uParam1);
			Global_1903123.f_5.f_9 = uParam0->f_202;
			Global_1903123.f_5.f_18 = uParam1->f_309[iVar0];
			if (func_86(uParam1, iVar0))
			{
				Global_1903123.f_5.f_17 = 1f;
			}
			else
			{
				Global_1903123.f_5.f_17 = 0f;
			}
			Global_1903123.f_5.f_13 = func_87(uParam0);
			Global_1903123.f_5.f_20 = func_88(uParam0);
			Global_1903123.f_5.f_21 = func_89(uParam0);
		}
		else
		{
			Global_1903123.f_5.f_7 = 0;
			Global_1903123.f_5.f_8 = 0f;
			Global_1903123.f_5.f_9 = 0f;
			Global_1903123.f_5.f_17 = 0f;
			Global_1903123.f_5.f_13 = 0f;
			Global_1903123.f_5.f_20 = 0f;
			Global_1903123.f_5.f_21 = 0f;
		}
		TASK::_0xF3735ACD11ACD501(PLAYER::PLAYER_PED_ID(), &(Global_1903123.f_5));
	}
}

void func_18(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (((!MISC::IS_BIT_SET(*iParam0, iVar0) && func_90(iVar1, 1, 1)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iVar1))) && func_91(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: clone ", iVar0, " is setting up");
				MISC::SET_BIT(iParam0, iVar0);
			}
			if (MISC::IS_BIT_SET(*iParam0, iVar0))
			{
				if (func_90(iVar1, 1, 1) && func_91(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					func_92(&(iParam0->f_1[iVar0 /*47*/]), PLAYER::GET_PLAYER_PED(iVar1), iVar0);
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: clone ", iVar0, " is cleaning up");
					MISC::CLEAR_BIT(iParam0, iVar0);
					func_93(&(iParam0->f_1[iVar0 /*47*/]), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_19(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 setup player");
		func_94(13);
		func_95();
		func_96();
		func_97();
		func_98(&(uParam0->f_12));
		func_98(&(uParam0->f_15));
		if (MAP::IS_WAYPOINT_ACTIVE())
		{
			MAP::SET_WAYPOINT_OFF();
		}
		func_25(uParam1);
		func_99(1);
		func_100(1);
		func_101(uParam1, 1);
		func_102(uParam0);
		func_103();
		func_104(uParam0, 1);
		func_105(uParam0, uParam1);
		func_106();
		func_32();
		func_108(func_107());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 174, true);
		VEHICLE::SET_RANDOM_TRAINS(false);
		uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 cleaned up player");
		func_109(0);
		func_110();
		func_111(0, 0);
		if (!func_112(uParam0->f_82[55]))
		{
			func_113();
		}
		func_46(&(uParam0->f_82), 1);
		func_53(uParam0);
		func_20(&(uParam0->f_19));
		func_114(uParam0, 0);
		func_104(uParam0, 0);
		func_100(0);
		func_115(uParam1);
		func_116(uParam0, uParam1, uParam2, 0, 0);
		func_25(uParam1);
		func_99(0);
		uParam0->f_24 = { Global_34 };
		uParam0->f_18 = 0;
		func_117(uParam0);
		func_118(uParam0);
		WATER::_0xA33F5069B0CB89B8();
		func_119(uParam1, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 174, false);
		VEHICLE::SET_RANDOM_TRAINS(true);
	}
}

void func_20(var uParam0)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: ui fish info - cleanup");
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1295789154);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: ui fish info - released");
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_4);
}

void func_21(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam1->f_123[iParam2]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, true);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam2, " wasn't owned by thread so set as mission entity - FISHING_CLEANUP_FISH_FOR_INT");
		}
		PED::SET_PED_RESET_FLAG(uParam1->f_123[iParam2], 169, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_123[iParam2], false);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_123[iParam2], 17, false);
		if (func_45(16))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam1->f_123[iParam2], 0, false);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam2, " proofs cleared");
		}
	}
	DECORATOR::DECOR_REMOVE(uParam1->f_123[iParam2], "Fish_Prevent_Tasking");
	DECORATOR::DECOR_REMOVE(uParam1->f_123[iParam2], "Fish_Weight");
	iVar0 = func_120(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_49(uParam0, uParam1, -1);
	}
	if (uParam1->f_371[iParam2] == 1)
	{
		iParam3 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_123[iParam2]))
	{
		if (iParam3 == 1 && iParam4 == 1)
		{
			func_121(&(uParam1->f_123[iParam2]));
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam2, " deleted");
		}
		else
		{
			func_122(&(uParam1->f_123[iParam2]), 1, 1, 1);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam2, " released");
		}
	}
	if (uParam1->f_216[iParam2] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_216[iParam2]);
	}
	func_123(uParam1, iParam2);
}

void func_22(var uParam0)
{
	if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_69))
	{
		AUDIO::_0x3210BCB36AF7621B(uParam0->f_69);
	}
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_62[iVar0]))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_62[iVar0]);
		}
		iVar0++;
	}
}

void func_24(var uParam0)
{
	if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_68))
	{
		AUDIO::_0x3210BCB36AF7621B(uParam0->f_68);
	}
}

void func_25(var uParam0)
{
	func_124(&(uParam0->f_8));
	uParam0->f_8 = 0;
}

void func_26(var uParam0)
{
	int iVar0;

	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: clones are all cleaning up");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_93(&(uParam0->f_1[iVar0 /*47*/]), iVar0);
		iVar0++;
	}
}

void func_27(var uParam0)
{
	HUD::_TEXT_DATABASE_DELETE("MGFSH");
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::_0x531A78D6BF27014B(*uParam0);
}

void func_28(int iParam0)
{
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: populations setup for fishing ", iParam0);
	if (iParam0 == 1)
	{
		POPULATION::_0x247F86595D396344(1493307657);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, 313480217, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1227780828, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1604520857, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1688703117, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1510975932, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, 168569674, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1725785792, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1732578984, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, 611346020, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, -1266430074, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, 190319331, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1095210956, -1095210956, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1482332679, -1482332679, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1404193962, 1404193962, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-252502713, -252502713, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(207807619, 207807619, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1477335493, -1477335493, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1738466917, -1738466917, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1839535975, -1839535975, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(638269552, 638269552, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, 1729337451, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, 1031264513, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, 1729337451, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, 1031264513, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, -1387587743, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, 1119319615, 3);
	}
	else
	{
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, 313480217);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1227780828);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1604520857);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1688703117);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1510975932);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, 168569674);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1725785792);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1732578984);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, 611346020);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, -1266430074);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, 190319331);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1095210956, -1095210956);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1482332679, -1482332679);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1404193962, 1404193962);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-252502713, -252502713);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(207807619, 207807619);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1477335493, -1477335493);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1738466917, -1738466917);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1839535975, -1839535975);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(638269552, 638269552);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, 1729337451);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, 1031264513);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, 1729337451);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, 1031264513);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, -1387587743);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, 1119319615);
		POPULATION::_0x324AB2A68AD8AEE5();
	}
}

void func_29(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 31;
	if (iParam1 == 1)
	{
		if (!func_34(uParam0, 8))
		{
			NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(iVar0);
			PED::_0xED9582B3DA8F02B4(iVar0);
			func_35(uParam0, 8);
			DEBUG::_0xF0783374333FD8CE(2184, 124, "FISHING: reserved ", iVar0, " ambient peds, desired ", PED::_0x62DE46F061CAA468(), " ready ", PED::_0x5C16855277819BBF());
		}
	}
	else if (func_34(uParam0, 8))
	{
		PED::_0x7D4E70A67A651C71(iVar0);
		func_125(uParam0, 8);
		DEBUG::_0xF0783374333FD8CE(2184, 124, "FISHING: unreserved ", iVar0, " ambient peds, desired ", PED::_0x62DE46F061CAA468(), " ready ", PED::_0x5C16855277819BBF());
	}
}

void func_30()
{
	func_55(1);
	Global_1903123.f_39 = 0;
	Global_1903123.f_41 = 0;
	Global_1903123.f_43 = 0;
	Global_1903123.f_36 = 0;
	Global_1903123.f_2 = 0;
	Global_1903123.f_5.f_6 = 0;
	Global_1903123.f_5.f_5 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: reset all global fishing data unsaved");
}

void func_31(char* sParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		DEBUG::_0xA308F935BDECCEC0(552, 124, UNK_0x8F77B33B6A34D8BA(), "FISHING: bDisableFishingRodInwheel ", sParam0, " unable to set because player doesn't have fishing rod yet");
		return;
	}
	Global_1903123.f_4 = sParam0;
}

void func_32()
{
	func_126(4);
	func_55(2);
}

void func_33()
{
	DEBUG::_0xF0783374333FD8CE(168, 8, "TERMINATE_THIS_MULTIPLAYER_THREAD [", UNK_0x8F77B33B6A34D8BA(), "()], tID=", SCRIPTS::GET_ID_OF_THIS_THREAD());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_34(var uParam0, int iParam1)
{
	return func_127(uParam0->f_11, iParam1);
}

void func_35(var uParam0, int iParam1)
{
	if (!func_34(uParam0, iParam1))
	{
		func_128(&(uParam0->f_11), iParam1);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: local bit ", func_129(iParam1, 0), " set");
	}
}

void func_36()
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: SET_CURRENT_PED_WEAPON WEAPON_UNARMED FALSE");
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true, 0, false, false);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: SET_CURRENT_PED_WEAPON WEAPON_UNARMED TRUE");
	}
}

bool func_37(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and NETWORK_SESSION_IS_TRANSITIONING = TRUE, so skipping");
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and NETWORK_SESSION_IS_ACTIVE = TRUE, so skipping");
		}
		else if (bParam1 && Global_1572887 < 39)
		{
			DEBUG::_0xF0783374333FD8CE(168, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE - but bIgnoreTransition = TRUE and g_mpTransition.eMPState = ", func_130(Global_1572887, 0), ", so skipping");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_GAME_IN_PROGRESS() = FALSE");
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - NETWORK_IS_SIGNED_ONLINE = FALSE");
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_NONE");
				return true;
			case 1:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_BACKGROUND_THREAD_STOPPED");
				return true;
			case 2:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE");
				if (!bParam0)
				{
					return true;
				}
				else
				{
					DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SESSION_MERGE - but bIgnoreSessionMerge = TRUE, so skipping");
				}
				break;
			case 4:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_REQUESTED_BY_SCRIPT");
				return true;
			case 3:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = THREAD_EXIT_REASON_SCENARIO_OUT_OF_SCOPE");
				return true;
			default:
				DEBUG::_0xF0783374333FD8CE(8, 8, "KILL_EVENT_CAUGHT - THREAD_EXIT_REQUESTED = UNKNOWN");
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			DEBUG::_0xF0783374333FD8CE(8, 32, "KILL_EVENT_CAUGHT - EVENT_NETWORK_NETWORK_BAIL caught.  Bailing from MP.");
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_38(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_39(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITY_AND_COORD - entity1 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

char* func_40(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_MAIN_STATE_LOAD_ASSETS";
		case 1:
			return "FISHING_MAIN_STATE_WAIT_FOR_ROD_EQUIPPED";
		case 2:
			return "FISHING_MAIN_STATE_USING_ROD";
		case 3:
			return "FISHING_MAIN_STATE_WAIT_FOR_ROD_UNEQUIPPED";
		case 4:
			return "FISHING_MAIN_STATE_TERMINATE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_41()
{
	return Global_1893599.f_2;
}

char* func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_FIRST";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 30:
			return "REGION_BGV_LAST";
		case 31:
			return "REGION_BLU_FIRST";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_LAST";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_LAST";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRW_FIRST";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 45:
			return "REGION_GRZ_COLTER";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 52:
			return "REGION_GRW_LAST";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_FIRST";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_LAST";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_FIRST";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_LAST";
		case 99:
			return "REGION_SCM_FIRST";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_LAST";
		case 113:
			return "REGION_TAL_FIRST";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 120:
			return "REGION_GAP_FIRST";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_LAST";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_LAST";
		case 127:
			return "REGION_CHO_FIRST";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_LAST";
		case 135:
			return "REGION_HEN_FIRST";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 139:
			return "REGION_CENTRALUNIONRR";
		case 140:
			return "REGION_LAST";
		case 150:
			return "REGION_MAX";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_43()
{
	return Global_1896634.f_41;
}

char* func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "DISTRICT_INVALID";
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		case 17:
			return "NUM_DISTRICTS";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_45(int iParam0)
{
	return func_127(Global_1903123.f_1, iParam0);
}

void func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 73)
	{
		iVar0 = iVar1;
		if (iParam1 == 1 || !func_131(iVar0))
		{
			func_132(uParam0, iVar0);
		}
		iVar1++;
	}
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: help text reset, bResetAll ", iParam1);
}

void func_47(var uParam0)
{
	*uParam0 = "MGFSH_Sounds";
	uParam0->f_1 = "Minigame_Fishing_Scenes";
	uParam0->f_2 = "None";
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_4 = "Rod_Equipped";
	uParam0->f_5 = "Cast";
	uParam0->f_6 = "Reel_In";
	uParam0->f_7 = "Fish_On_Line";
	uParam0->f_8 = "Snap";
	uParam0->f_9 = "Caught";
}

void func_48(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_57[iVar0] = AUDIO::GET_SOUND_ID();
		uParam0->f_62[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	uParam0->f_67 = AUDIO::GET_SOUND_ID();
	uParam0->f_68 = AUDIO::GET_SOUND_ID();
	uParam0->f_69 = AUDIO::GET_SOUND_ID();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_70[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
}

void func_49(var uParam0, var uParam1, int iParam2)
{
	if (func_82(uParam0) != iParam2)
	{
		uParam0->f_2 = iParam2;
		if (func_133(iParam2) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
		{
			Global_1903123.f_37 = uParam1->f_247[iParam2];
			Global_1903123.f_38 = uParam1->f_278[iParam2];
			DEBUG::_0xF0783374333FD8CE(6792, 124, "FISHING: participant 0 associated fish ", iParam2, " type ", func_134(Global_1903123.f_37, 0), " weight ", Global_1903123.f_38);
		}
		else
		{
			Global_1903123.f_38 = 0f;
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 associated fish ", iParam2);
		}
	}
}

bool func_50()
{
	int iVar0;
	bool bVar1;

	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == joaat("WEAPON_FISHINGROD"));
}

void func_51(var uParam0)
{
	if (((func_135() != 0 || func_136() != 0) || func_137() != 0) || func_138() != 0)
	{
		func_98(&(uParam0->f_12));
	}
	if (func_139())
	{
		func_98(&(uParam0->f_15));
	}
}

bool func_52()
{
	return Global_1896750.f_398;
}

void func_53(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_140(uParam0, iVar0);
		iVar0++;
	}
}

void func_54(bool bParam0)
{
	if (func_45(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1903123.f_47, bParam0);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: ui bait info - databind toggled bool idBaitCounterIsVisible ", bParam0);
	}
}

void func_55(int iParam0)
{
	if (func_45(iParam0))
	{
		func_141(&(Global_1903123.f_1), iParam0);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: data bit ", func_142(iParam0, 0), " cleared");
	}
}

bool func_56(var uParam0)
{
	return func_143(*uParam0, 1);
}

int func_57(var uParam0)
{
	if (!func_56(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_144(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_145() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_58(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_59()
{
	Global_1904703.f_8784 = 1;
}

void func_60(bool bParam0)
{
	if (bParam0)
	{
		func_146(4);
	}
	func_146(2);
	MISC::SET_BIT(&(Global_1959011.f_1), 0);
}

bool func_61(var uParam0, int iParam1)
{
	return func_127(uParam0->f_1, iParam1);
}

void func_62(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;

	if (ENTITY::DOES_ENTITY_EXIST(func_147()))
	{
		vVar2 = { func_148() };
		bVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_149(vVar2, 1092616192 /* Float: 10f */), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_149(vVar2, 1092616192 /* Float: 10f */), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_12 = (vVar2.z - fVar0);
			uParam0->f_13 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_12 = -99999f;
			uParam0->f_13 = -99999f;
		}
	}
}

void func_63(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;

	if (ENTITY::DOES_ENTITY_EXIST(func_150()))
	{
		vVar2 = { func_151() };
		bVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_149(vVar2, 1092616192 /* Float: 10f */), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_149(vVar2, 1092616192 /* Float: 10f */), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_14 = (vVar2.z - fVar0);
			uParam0->f_15 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_14 = -99999f;
			uParam0->f_15 = -99999f;
		}
	}
}

void func_64(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;

	iVar3 = func_82(uParam0);
	if (func_133(iVar3) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iVar3]))
	{
		vVar0 = { func_152(uParam1, iVar3) };
	}
	if (!func_38(vVar0))
	{
		bVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_149(vVar0, 1092616192 /* Float: 10f */), 0, &fVar4);
		bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_149(vVar0, 1092616192 /* Float: 10f */), &fVar5, false);
		if (bVar6 == 1 && bVar7 == 1)
		{
			uParam0->f_16 = (vVar0.z - fVar4);
			uParam0->f_17 = (fVar4 - fVar5);
		}
		else
		{
			uParam0->f_16 = -99999f;
			uParam0->f_17 = -99999f;
		}
	}
}

void func_65(var uParam0, var uParam1)
{
	int iVar0;

	if (func_34(uParam0, 4))
	{
		return;
	}
	func_35(uParam0, 4);
	uParam1->f_470 = 54.25f;
	DEBUG::_0xF0783374333FD8CE(24, 124, "FISHING: fMaximumFishWeight ", uParam1->f_470);
	func_153(&(uParam1->f_800));
	func_98(&(uParam1->f_436));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_123(uParam1, iVar0);
		iVar0++;
	}
}

bool func_66(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

bool func_67(int iParam0)
{
	if (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return true;
	}
	return false;
}

void func_68(var uParam0, int iParam1)
{
	func_154(uParam0, iParam1, 2);
}

void func_69(var uParam0, var uParam1, int iParam2)
{
	if (func_155(uParam0, uParam1, iParam2))
	{
		func_154(uParam1, iParam2, 3);
	}
}

void func_70(var uParam0, var uParam1, int iParam2)
{
	if (func_156(uParam0, uParam1, iParam2))
	{
		func_154(uParam1, iParam2, 3);
	}
	else if (func_157(uParam1, iParam2) && func_158(uParam1))
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam2, " giving up trying to grab fish from ambient population, timerLastGrabbedAmbientFish ", func_159(&(uParam1->f_436)));
		func_98(&(uParam1->f_436));
		func_154(uParam1, iParam2, 1);
	}
}

void func_71(var uParam0, var uParam1, int iParam2)
{
	if (func_160(uParam1, iParam2))
	{
		func_161(uParam0, uParam1, iParam2);
	}
}

void func_72(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_157(uParam2, iParam3) || !func_162(uParam2, iParam3))
	{
		return;
	}
	if (func_163(uParam1, &(uParam2->f_123[iParam3])))
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam3, " is now too far away so cleaning it up");
		func_154(uParam2, iParam3, 10);
	}
	else if (func_164(uParam1, uParam2, iParam3))
	{
		func_165(uParam0, uParam1, uParam2, iParam3);
	}
	else if (((!func_166(uParam2->f_123[iParam3], 1139527981) && !func_166(uParam2->f_123[iParam3], 518218985)) && !func_166(uParam2->f_123[iParam3], -773337285)) && !PED::IS_PED_FLEEING(uParam2->f_123[iParam3]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_123[iParam3], false);
		TASK::TASK_ANIMAL_UNALERTED(uParam2->f_123[iParam3], -1, 0, 0, 0);
		DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: fish ", iParam3, " tasked to school");
	}
}

void func_73(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_120(uParam1, iParam3);
	if (iVar0 == -1)
	{
		func_165(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iVar0 != -1 && !func_166(uParam2->f_123[iParam3], 1227113341))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam3, " wasn't owned by thread so set as mission entity - FISHING_FISH_NIBBLING");
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_123[iParam3], true);
		TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		TASK::TASK_GO_TO_ENTITY(uParam2->f_123[iParam3], func_150(), -1, 0f, 2f, 0f, 0);
		DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: participant 0 tasked fish ", iParam3, " to go to hook");
	}
}

void func_74(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(uParam2->f_123[iParam3], 64, true);
	uParam1->f_224++;
	iVar0 = func_120(uParam1, iParam3);
	if (iVar0 != -1 && Global_1903123.f_5 == 7)
	{
		func_167(uParam0, uParam1, uParam2, iParam3);
		func_168(uParam1, uParam2, iParam3);
		func_169(uParam0, uParam1, uParam2, iParam3);
		func_170(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_75(var uParam0, var uParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam2, " is no longer alive when it needs to flee");
		func_154(uParam1, iParam2, 10);
		return;
	}
	if ((uParam1->f_439[iParam2] == 0 && func_171(&(uParam1->f_524[iParam2 /*3*/])) >= 6f) || (uParam1->f_439[iParam2] == 1 && func_171(&(uParam1->f_524[iParam2 /*3*/])) >= 20f))
	{
		TASK::CLEAR_PED_TASKS(uParam1->f_123[iParam2], true, false);
		if (ENTITY::_0x88AD6CC10D8D35B2(uParam1->f_123[iParam2]) || ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
		{
			DECORATOR::DECOR_SET_BOOL(uParam1->f_123[iParam2], "Fish_Prevent_Tasking", false);
		}
		func_161(uParam0, uParam1, iParam2);
	}
	else if (!func_56(&(uParam1->f_615[iParam2 /*3*/])) || func_57(&(uParam1->f_615[iParam2 /*3*/])) >= 250)
	{
		func_98(&(uParam1->f_615[iParam2 /*3*/]));
		if ((!func_166(uParam1->f_123[iParam2], 518218985) && !func_166(uParam1->f_123[iParam2], -773337285)) && !PED::IS_PED_FLEEING(uParam1->f_123[iParam2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_123[iParam2], true);
			TASK::CLEAR_PED_TASKS(uParam1->f_123[iParam2], true, false);
			if (uParam1->f_439[iParam2] == 1)
			{
				TASK::TASK_SMART_FLEE_COORD(uParam1->f_123[iParam2], uParam1->f_706[iParam2 /*3*/], 40f, 20000, 8, 1077936128);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(uParam1->f_123[iParam2], uParam1->f_706[iParam2 /*3*/], 10f, 6000, 8, 1077936128);
			}
			DEBUG::_0x4DC69742196F818A(2952, 124, "FISHING: fish ", iParam2, " tasked to flee coord ", &(uParam1->f_706[iParam2 /*3*/]), " bLongFlee ", uParam1->f_439[iParam2]);
		}
	}
}

void func_76(var uParam0, int iParam1)
{
	if (func_166(uParam0->f_123[iParam1], 1227113341))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_123[iParam1], true, false);
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_123[iParam1], 64, true);
}

void func_77(var uParam0, var uParam1, int iParam2)
{
	if (func_157(uParam1, iParam2))
	{
		func_21(uParam0, uParam1, iParam2, 1, 0);
	}
}

void func_78()
{
	HUD::_TEXT_DATABASE_REQUEST("MGFSH");
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_79(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: assets - waiting for init to complete");
		return false;
	}
	if ((!MISC::IS_STRING_NULL_OR_EMPTY("MGFSH") && HUD::_DOES_TEXT_DATABASE_EXIST("MGFSH")) && !HUD::_TEXT_DATABASE_HAS_LOADED("MGFSH"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: assets - waiting to load mission text");
		return false;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: assets - waiting to load ptfx asset");
		return false;
	}
	if (!AUDIO::_0xD9130842D7226045(*uParam0, 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: assets - waiting to load sfx asset");
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: assets - waiting for reserved peds, desired ", PED::_0x62DE46F061CAA468(), " ready ", PED::_0x5C16855277819BBF());
	}
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: assets - all assets now loaded");
	return true;
}

bool func_80(var uParam0, var uParam1, var uParam2)
{
	if (!func_50())
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 unequip rod - WEAPON_FISHINGROD isn't equipped");
		func_172(uParam1, uParam2);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_173()))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 unequip rod - WEAPON_FISHINGROD doesn't exist");
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 unequip rod - ped is in combat");
		func_172(uParam1, uParam2);
		if (func_50())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		return true;
	}
	if (Global_1903123.f_3 == 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 unequip rod - g_FishingDataUnsaved.bAllowEquipRod is FALSE");
		if (func_50())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		return true;
	}
	if (Global_1940296.f_25 == 1)
	{
		Global_1940296.f_25 = 0;
		func_98(&(uParam0->f_79));
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 unequip rod - bReceivedPutAwayRodEvent has been received");
		if (func_50())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		return true;
	}
	return false;
}

void func_81(var uParam0, var uParam1, var uParam2)
{
	func_174(uParam1, uParam2);
	switch (Global_1903123.f_5)
	{
		case 0:
			func_175(uParam0);
			break;
		case 1:
			func_176(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_177(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_178(uParam0);
			break;
		case 4:
			func_179(uParam0, uParam1);
			break;
		case 5:
			func_180();
			break;
		case 6:
			func_181(uParam0, uParam1, uParam2);
			break;
		case 7:
			func_182(uParam0, uParam1, uParam2);
			break;
		case 8:
			func_183(uParam0);
			break;
		case 9:
			func_184(uParam0, uParam1, uParam2);
			break;
		case 10:
			func_185(uParam0, uParam1, uParam2);
			break;
		case 11:
			func_186(uParam0, uParam1, uParam2);
			break;
		case 12:
			func_187(uParam0, uParam1, uParam2);
			break;
		case 13:
			func_188(uParam0);
			break;
	}
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	func_104(uParam0, 1);
	func_189(uParam0);
	if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER")))
	{
		func_190(32768, 1);
	}
	if (!func_191())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	}
}

int func_82(var uParam0)
{
	if (uParam0->f_2 >= 30)
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 iFishAssociatedWithParticipant is ", uParam0->f_2, " so is not valid");
	}
	return uParam0->f_2;
}

bool func_83(var uParam0, int iParam1)
{
	if (func_192(1))
	{
		return false;
	}
	if ((Global_1903123.f_5 == 6 && func_133(iParam1)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return true;
	}
	return false;
}

float func_84(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_82(uParam0);
	if (!func_133(iVar0))
	{
		return 0f;
	}
	return (uParam1->f_278[iVar0] / uParam1->f_470);
}

bool func_85(var uParam0, int iParam1)
{
	if (((Global_1903123.f_5 == 7 || Global_1903123.f_5 == 12) && func_133(iParam1)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return true;
	}
	return false;
}

bool func_86(var uParam0, int iParam1)
{
	return uParam0->f_154[iParam1] == 6;
}

float func_87(var uParam0)
{
	return func_193((BUILTIN::TO_FLOAT(uParam0->f_172) / 200f), 0f, 1f);
}

float func_88(var uParam0)
{
	return func_193((BUILTIN::TO_FLOAT(uParam0->f_173) / 200f), 0f, 1f);
}

float func_89(var uParam0)
{
	return func_193((BUILTIN::TO_FLOAT(uParam0->f_174) / 200f), 0f, 1f);
}

bool func_90(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!Global_1051553.f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

bool func_91(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == joaat("WEAPON_FISHINGROD"));
}

void func_92(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_30 = TASK::_0xF3735ACD11ACD500(iParam1, uParam0);
	func_194(uParam0, iParam1);
	switch (*uParam0)
	{
		case 0:
			func_195(uParam0, iParam1, iParam2);
			break;
		case 1:
			func_196(uParam0, iParam1, iParam2);
			break;
		case 2:
			func_197(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_198(uParam0, iParam1, iParam2);
			break;
		case 4:
			func_199(uParam0, iParam1, iParam2);
			break;
		case 5:
			func_200(uParam0, iParam1, iParam2);
			break;
		case 6:
			func_201(uParam0, iParam1, iParam2);
			break;
		case 7:
			func_202(uParam0, iParam1, iParam2);
			break;
		case 8:
			func_203(uParam0, iParam1, iParam2);
			break;
		case 9:
			func_204(uParam0, iParam1, iParam2);
			break;
		case 10:
			func_205(uParam0, iParam1, iParam2);
			break;
		case 11:
			func_206(uParam0, iParam1, iParam2);
			break;
		case 12:
			func_207(uParam0, iParam1, iParam2);
			break;
		case 13:
			func_208(uParam0, iParam1, iParam2);
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_30 = 0;
	func_209(uParam0);
}

void func_94(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900729.f_1 == 2 || Global_1900729.f_1 == 5) || Global_1900729.f_1 == 3)
	{
		DEBUG::_0xA308F935BDECCEC0(40, 0, "RICH_PRESENCE_SET_ACTIVITY not set, ePresenceType = ", func_210(Global_1900729.f_1, 0));
		return;
	}
	iVar0 = 0;
	if (func_211() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_212(Global_1893599.f_2);
	Global_1900729.f_1 = 3;
	Global_1900729.f_2 = 0;
	Global_1900729.f_7 = iVar0;
	Global_1900729.f_8 = iParam0;
	Global_1900729.f_9 = iVar1;
	if (Global_1900729.f_9 != -1 && Global_1900729.f_9 != 0)
	{
		func_213(Global_1900729.f_7, Global_1900729.f_8, Global_1900729.f_9);
	}
	else if (Global_1900729.f_11 != -1)
	{
		func_213(Global_1900729.f_7, Global_1900729.f_8, Global_1900729.f_11);
	}
}

void func_95()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_214(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_SET_FLOAT(PLAYER::PLAYER_PED_ID(), sVar1, 0f);
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: decorator - attractor ", sVar1, " init");
		}
		iVar0++;
	}
}

void func_96()
{
	bool bVar0;

	bVar0 = func_215();
	if (func_216(bVar0))
	{
		func_217(-1, -1, bVar0, 1, -1, 0);
	}
}

void func_97()
{
	Global_1903123.f_39 = 0;
	Global_1903123.f_41 = 0;
	Global_1903123.f_43 = 0;
	Global_1903123.f_36 = 0;
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: reset global fishing data unsaved when equip rod");
}

void func_98(var uParam0)
{
	func_218(uParam0, 0f);
}

void func_99(int iParam0)
{
	if (iParam0 == 1)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16384);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32768);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 262144);
	}
	else
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 262144);
	}
}

void func_100(int iParam0)
{
	char* sVar0;

	if (!MISC::GET_MISSION_FLAG())
	{
		if (iParam0 == 1)
		{
			sVar0 = "MMFSH";
			MISC::_0x1096603B519C905F(sVar0);
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: mission name - set to ", sVar0);
		}
		else
		{
			MISC::_0x1096603B519C905F("");
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: mission name - cleared");
		}
	}
}

void func_101(var uParam0, int iParam1)
{
	if (func_61(uParam0, iParam1))
	{
		func_141(&(uParam0->f_1), iParam1);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: participant 0 bit ", func_219(iParam1, 0), " cleared");
	}
}

void func_102(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_4))
	{
		uParam0->f_3 = uParam0->f_4;
		AUDIO::_0x6339C1EA3979B5F7(uParam0->f_3, uParam0->f_1);
		DEBUG::_0xF0783374333FD8CE(680, 124, "FISHING: audio scene ", uParam0->f_1, " started using ", uParam0->f_3);
	}
}

void func_103()
{
	if (!func_220(0) || func_221())
	{
		if ((((!func_222(joaat("UPGRADE_FSH_BAIT_BREAD"), 1) || !func_222(joaat("UPGRADE_FSH_BAIT_CORN"), 1)) || !func_222(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1)) || !func_222(1872063208 /* GXTEntry: "No Lure" */, 1)) || !func_222(1309979101 /* GXTEntry: "No Bait" */, 1))
		{
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: inventory - requesting AWARD_DEFAULT_FISHING_ITEMS");
			func_223(2047322594, 1, 255, 0, 0);
		}
		func_224();
	}
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_71 == 0)
		{
			uParam0->f_71 = 1;
			HUD::_HIDE_HUD_COMPONENT(100665617);
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: hud HUD_CTX_IN_FISHING_MODE enabled");
		}
	}
	else if (uParam0->f_71 == 1)
	{
		uParam0->f_71 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(100665617);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: hud HUD_CTX_IN_FISHING_MODE disabled");
	}
}

void func_105(var uParam0, var uParam1)
{
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: participant 0 setting initial bait - eCurrentBaitEquipped ", func_225(Global_38.f_5807, 0));
	if (func_226(Global_38.f_5807) && func_222(Global_38.f_5807, 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 setting initial bait - using eCurrentBaitEquipped");
		func_227(uParam0, uParam1, Global_38.f_5807, 0, 1);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 setting initial bait - UPGRADE_FSH_BAIT_NONE");
		func_227(uParam0, uParam1, 1309979101 /* GXTEntry: "No Bait" */, 0, 1);
	}
}

void func_106()
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;

	if (func_45(8))
	{
		sVar0 = func_229(func_228(Global_38.f_5807), joaat("COLOR_PURE_WHITE"));
		if (func_226(Global_38.f_5807))
		{
			StringIntConCat(&cVar1, func_230(Global_38.f_5807, 0, 0, 0), 8);
		}
		iVar2 = -973584697;
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1903123.f_48, sVar0);
		if (func_231(Global_38.f_5807))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1903123.f_49, "");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1903123.f_49, &cVar1);
		}
		if (func_232(Global_38.f_5807) || func_233(Global_38.f_5807))
		{
			iVar2 = 1048406616;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1903123.f_50, iVar2);
		DEBUG::_0xF0783374333FD8CE(2728, 124, "FISHING: ui bait info - databind update sLureName ", sVar0, " tlLureCount ", &cVar1, " iLureTexture ", iVar2);
	}
}

bool func_107()
{
	return true;
}

void func_108(bool bParam0)
{
	if (func_45(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1903123.f_51, bParam0);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: idPutAwayRodButtonIsVisible bAllowUnequipRodButton ", bParam0);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: idPutAwayRodButtonIsVisible bAllowUnequipRodButton ", bParam0, " bit FISHING_DATA_UNSAVED_BIT_SETUP_PUT_AWAY_ROD_BUTTON is not set");
	}
}

void func_109(bool bParam0)
{
	int iVar0;

	if (Global_1900729.f_1 == 0 && !bParam0)
	{
		return;
	}
	UNK_0x355E72323AEE83CC(0, 7);
	iVar0 = 0;
	if (func_211() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900729.f_2 == 4 && Global_1900729.f_12 != Global_1900729.f_13) && !bParam0)
	{
		Global_1900729.f_1 = Global_1900729.f_2;
		Global_1900729.f_12 = Global_1900729.f_13;
		func_234(iVar0, Global_1900729.f_12);
	}
	else
	{
		Global_1900729.f_1 = 0;
		Global_1900729.f_7 = iVar0;
		Global_1900729.f_8 = func_235();
		Global_1900729.f_9 = func_212(Global_1893599.f_2);
		Global_1900729.f_11 = func_236(Global_1896634.f_41);
		if (Global_1900729.f_9 != -1 && Global_1900729.f_9 != 0)
		{
			func_213(Global_1900729.f_7, Global_1900729.f_8, Global_1900729.f_9);
		}
		else if (Global_1900729.f_11 != -1)
		{
			func_213(Global_1900729.f_7, Global_1900729.f_8, Global_1900729.f_11);
		}
		else
		{
			func_213(Global_1900729.f_7, Global_1900729.f_8, Global_1900729.f_9);
		}
	}
	Global_1900729.f_2 = 0;
}

void func_110()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_214(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), sVar1);
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: decorator - attractor ", sVar1, " removed");
		}
		iVar0++;
	}
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0 || iParam1 <= 0)
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		PAD::_0x14D29BB12D47F68C(0, 0, 0, 0, 0);
	}
	else
	{
		PAD::SET_PAD_SHAKE(0, iParam0, iParam1);
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam1) / 2f));
		PAD::_0x14D29BB12D47F68C(0, 0, 0, iParam0, func_237(iVar0, 0, 255));
	}
}

bool func_112(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_238(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_113()
{
	func_239(1);
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_72 == 0)
		{
			uParam0->f_72 = 1;
			HUD::_HIDE_HUD_COMPONENT(-859384195);
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: hud HUD_CTX_FISHING enabled");
		}
	}
	else if (uParam0->f_72 == 1)
	{
		uParam0->f_72 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(-859384195);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: hud HUD_CTX_FISHING disabled");
	}
}

void func_115(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_18, false);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 ptfx water drip stopped");
	}
}

void func_116(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = func_82(uParam1);
	if (func_133(iVar0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iVar0], false);
		PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iVar0], 17, false);
		uParam2->f_706[iVar0 /*3*/] = { Global_34 };
		func_165(uParam0, uParam1, uParam2, iVar0);
		if (iParam4 == 1)
		{
			uParam2->f_402[iVar0] = uParam1->f_202;
		}
	}
	else
	{
		func_240(uParam0, uParam1);
		func_241(512);
	}
	func_22(uParam1);
	func_23(uParam1);
	if (iParam3 == 1)
	{
		func_242(uParam0, uParam1, uParam2, 2);
	}
	uParam1->f_167 = 0;
}

void func_117(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_2))
	{
		uParam0->f_3 = uParam0->f_2;
		AUDIO::_0x9428447DED71FC7E(uParam0->f_1);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: audio scene ", uParam0->f_1, " stopped");
	}
}

void func_118(var uParam0)
{
	if (!func_34(uParam0, 32))
	{
		return;
	}
	if (func_243("BOB_FISHING_STOP", 0, 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: music BOB_FISHING_STOP succeeded");
		func_125(uParam0, 32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: music BOB_FISHING_STOP failed");
	}
}

void func_119(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		func_244(uParam0, iVar1);
		if (iParam1 == 1)
		{
			func_245(uParam0, iVar1, 0);
		}
		else
		{
			func_245(uParam0, iVar1, 2);
		}
		func_58(&(uParam0->f_109[iVar0 /*3*/]));
		iVar0++;
	}
}

int func_120(var uParam0, int iParam1)
{
	if (func_82(uParam0) == iParam1)
	{
		return 0;
	}
	return -1;
}

void func_121(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "DELETE_PED_SAFE() : unable to delete ped because the ped is owned by the persistence system");
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 0, "DELETE_PED_SAFE() : unable to delete ped because the script : ", UNK_0x8F77B33B6A34D8BA(), " doesn't have ownership of it");
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_122(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "RELEASE_PED_SAFE() : unable to set ped as no longer needed because the ped is owned by the persistence system");
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 0, "RELEASE_PED_SAFE() : unable to set ped as no longer needed because the script : ", UNK_0x8F77B33B6A34D8BA(), " doesn't have ownership of it");
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_123(var uParam0, int iParam1)
{
	func_154(uParam0, iParam1, 0);
	uParam0->f_216[iParam1] = 0;
	uParam0->f_247[iParam1] = 15;
	uParam0->f_278[iParam1] = 0f;
	uParam0->f_309[iParam1] = 0;
	uParam0->f_340[iParam1] = 0;
	uParam0->f_371[iParam1] = 0;
	uParam0->f_32[iParam1 /*3*/] = { 0f, 0f, 0f };
}

void func_124(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "DELETE_OBJECT_SAFE() : unable to delete object because the script doesn't have ownership of it");
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_125(var uParam0, int iParam1)
{
	if (func_34(uParam0, iParam1))
	{
		func_141(&(uParam0->f_11), iParam1);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: local bit ", func_129(iParam1, 0), " cleared");
	}
}

void func_126(int iParam0)
{
	if (!func_45(iParam0))
	{
		func_128(&(Global_1903123.f_1), iParam0);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: data bit ", func_142(iParam0, 0), " set");
	}
}

bool func_127(char* sParam0, int iParam1)
{
	return (sParam0 && iParam1) != 0;
}

void func_128(var uParam0, int iParam1)
{
	func_246(uParam0, iParam1);
}

char* func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "FISHING_LOCAL_BIT_DONE_DATA_INIT";
		case 2:
			return "FISHING_LOCAL_BIT_DONE_MP_INIT";
		case 4:
			return "FISHING_LOCAL_BIT_DONE_FISH_INIT";
		case 8:
			return "FISHING_LOCAL_BIT_RESERVED_AMBIENT_PEDS";
		case 16:
			return "FISHING_LOCAL_BIT_PLAYER_RESET_CAST";
		case 32:
			return "FISHING_LOCAL_BIT_MUSIC_STARTED";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_STATE__INIT__STARTUP";
		case 1:
			return "MP_STATE__INIT__RESURRECT_PLAYER";
		case 2:
			return "MP_STATE__INIT__VERIFY_PLAYER_RESURRECTION";
		case 3:
			return "MP_STATE__INIT__KILL_EXISTING_THREADS";
		case 4:
			return "MP_STATE__INIT__WAIT_FOR_THREAD_TERMINATION";
		case 5:
			return "MP_STATE__INIT__KILL_EXISTING_SESSION";
		case 6:
			return "MP_STATE__INIT__WAIT_FOR_SESSION_END";
		case 7:
			return "MP_STATE__INIT__WIPE_ACCOUNT_DATA";
		case 8:
			return "MP_STATE__INIT__REINITIALIZE_GLOBAL_DATA";
		case 9:
			return "MP_STATE__INIT__START_TUNABLES_LOAD";
		case 10:
			return "MP_STATE__INIT__VALIDATE_TUNABLES_LOAD";
		case 11:
			return "MP_STATE__INIT__PREPARE_TRANSITION";
		case 12:
			return "MP_STATE__INIT__VALIDATE_GAMER_HANDLE";
		case 13:
			return "MP_STATE__INIT__GAME_FRAMEWORK_MANAGER_INIT";
		case 14:
			return "MP_STATE__TRANSITION__START";
		case 15:
			return "MP_STATE__TRANSITION__SAVE_DATA__WIPE_ON_LOAD";
		case 16:
			return "MP_STATE__TRANSITION__SAVE_DATA__END";
		case 17:
			return "MP_STATE__TRANSITION__SAVE_DATA__INITIALIZE_INVENTORY";
		case 18:
			return "MP_STATE__TRANSITION__SAVE_DATA__LOAD_INVENTORY";
		case 19:
			return "MP_STATE__TRANSITION__POSSE__SET_UP_POSSE_TRANSITION";
		case 20:
			return "MP_STATE__TRANSITION__UGC__START";
		case 21:
			return "MP_STATE__TRANSITION__UGC__CONFIRM_LOAD";
		case 22:
			return "MP_STATE__TRANSITION__SESSION__START";
		case 23:
			return "MP_STATE__TRANSITION__SESSION__WAIT_FOR_DEBUG_PROGRESSION";
		case 24:
			return "MP_STATE__TRANSITION__SESSION__PREPARE_FOR_SESSION_TRANSITION";
		case 25:
			return "MP_STATE__TRANSITION__SESSION__TERMINATE_EXISTING_SESSION";
		case 26:
			return "MP_STATE__TRANSITION__SESSION__REQUEST_SESSION";
		case 27:
			return "MP_STATE__TRANSITION__SESSION__CONFIRM_SESSION_REQUEST";
		case 28:
			return "MP_STATE__TRANSITION__THREAD__START";
		case 29:
			return "MP_STATE__TRANSITION__THREAD__LOAD_DEBUG_UPDATE";
		case 30:
			return "MP_STATE__TRANSITION__THREAD__LOAD_NET_MAIN_OFFLINE";
		case 31:
			return "MP_STATE__TRANSITION__THREAD__WAIT_FOR_NET_MAIN_OFFLINE";
		case 32:
			return "MP_STATE__TRANSITION__THREAD__LOAD_AUTO_START_THREAD";
		case 33:
			return "MP_STATE__TRANSITION__THREAD__LOAD_SP_MAIN_THREADS";
		case 34:
			return "MP_STATE__TRANSITION__THREAD__LOAD_MISSION_CREATOR";
		case 35:
			return "MP_STATE__TRANSITION__END";
		case 36:
			return "MP_STATE__BAIL__START";
		case 37:
			return "MP_STATE__BAIL__CONFIRM_BAIL_TO_FRONTEND";
		case 38:
			return "MP_STATE__BAIL__END";
		case 39:
			return "MP_STATE__MAIN__UPDATE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_131(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((iParam0 == 59 || iParam0 == 60) || iParam0 == 61) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64) || iParam0 == 65) || iParam0 == 66) || iParam0 == 67) || iParam0 == 68) || iParam0 == 69) || iParam0 == 70) || iParam0 == 71) || iParam0 == 22) || iParam0 == 23) || iParam0 == 25) || iParam0 == 27) || iParam0 == 29) || iParam0 == 37) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 33) || iParam0 == 34) || iParam0 == 41) || iParam0 == 42) || iParam0 == 43) || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 72) || iParam0 == 49) || iParam0 == 39) || iParam0 == 55) || iParam0 == 57) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

void func_132(var uParam0, int iParam1)
{
	if ((*uParam0)[iParam1] != 0)
	{
		(*uParam0)[iParam1] = 0;
		uParam0->f_74[iParam1] = 0;
	}
}

bool func_133(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 30);
}

char* func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "FISH_TYPE_BLUEGILL";
		case 1:
			return "FISH_TYPE_BULLHEAD_CATFISH";
		case 2:
			return "FISH_TYPE_CHAIN_PICKEREL";
		case 3:
			return "FISH_TYPE_CHANNEL_CATFISH";
		case 4:
			return "FISH_TYPE_LAKE_STURGEON";
		case 5:
			return "FISH_TYPE_LARGEMOUTH_BASS";
		case 6:
			return "FISH_TYPE_LONGNOSE_GAR";
		case 7:
			return "FISH_TYPE_MUSKIE";
		case 8:
			return "FISH_TYPE_NORTHERN_PIKE";
		case 9:
			return "FISH_TYPE_PERCH";
		case 10:
			return "FISH_TYPE_REDFIN_PICKEREL";
		case 11:
			return "FISH_TYPE_ROCK_BASS";
		case 12:
			return "FISH_TYPE_SMALLMOUTH_BASS";
		case 13:
			return "FISH_TYPE_SOCKEYE_SALMON";
		case 14:
			return "FISH_TYPE_STEELHEAD_TROUT";
		case 15:
			return "FISH_TYPE_MAX";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_135()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_X")) * 127f));
}

int func_136()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_Y")) * 127f));
}

int func_137()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X")) * 127f));
}

int func_138()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y")) * 127f));
}

bool func_139()
{
	return Global_1903123.f_5.f_4 > 0f;
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
		{
			HUD::_UIPROMPT_DELETE(uParam0->f_70);
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: context ", func_247(iParam1, 0), " released");
		}
	}
	else if (func_248(uParam0->f_60[iParam1]))
	{
		func_249(&(uParam0->f_60[iParam1]), 0, 1);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: context ", func_247(iParam1, 0), " released");
	}
}

void func_141(var uParam0, int iParam1)
{
	func_250(uParam0, iParam1);
}

char* func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "FISHING_DATA_UNSAVED_BIT_FORCE_LAUNCH";
		case 2:
			return "FISHING_DATA_UNSAVED_BIT_BAIT_UI_CLEAR";
		case 4:
			return "FISHING_DATA_UNSAVED_BIT_BAIT_UI_DISPLAY";
		case 8:
			return "FISHING_DATA_UNSAVED_BIT_SETUP_FISHING_DATABIND";
		case 16:
			return "FISHING_DATA_UNSAVED_BIT_COMPETITIVE_MODE";
		case 32:
			return "FISHING_DATA_UNSAVED_BIT_ALLOW_EQUIP_ROD_ANYWHERE";
		case 64:
			return "FISHING_DATA_UNSAVED_BIT_PREVENT_SCRIPT_SPAWNED_FISH";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_143(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_144(var uParam0)
{
	return func_143(*uParam0, 2);
}

int func_145()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_146(int iParam0)
{
	Global_1903188.f_302 = (Global_1903188.f_302 || iParam0);
}

int func_147()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903123.f_5.f_11) && Global_1903123.f_35 == 1)
	{
		return Global_1903123.f_5.f_11;
	}
	return 0;
}

Vector3 func_148()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_147()))
	{
		return ENTITY::GET_ENTITY_COORDS(func_147(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_149(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { vParam0 };
	vVar0.f_2 = (vVar0.z + fParam3);
	return vVar0;
}

int func_150()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903123.f_5.f_12) && Global_1903123.f_35 == 1)
	{
		return Global_1903123.f_5.f_12;
	}
	return 0;
}

Vector3 func_151()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_150()))
	{
		return ENTITY::GET_ENTITY_COORDS(func_150(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_152(var uParam0, int iParam1)
{
	if (func_133(iParam1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return ENTITY::GET_ENTITY_COORDS(uParam0->f_123[iParam1], true, false);
	}
	return 0f, 0f, 0f;
}

void func_153(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		(*uParam0)[iVar0 /*10*/] = 1;
		(uParam0[iVar0 /*10*/])->f_1[0] = 1;
		iVar0++;
	}
	(*uParam0)[0 /*10*/] = 4;
	(uParam0[0 /*10*/])->f_1[0] = 0;
	(uParam0[0 /*10*/])->f_1[1] = 1;
	(uParam0[0 /*10*/])->f_1[2] = 0;
	(uParam0[0 /*10*/])->f_1[3] = 1;
	(*uParam0)[1 /*10*/] = 5;
	(uParam0[1 /*10*/])->f_1[0] = 0;
	(uParam0[1 /*10*/])->f_1[1] = 0;
	(uParam0[1 /*10*/])->f_1[2] = 0;
	(uParam0[1 /*10*/])->f_1[3] = 1;
	(uParam0[1 /*10*/])->f_1[4] = 1;
	(*uParam0)[2 /*10*/] = 4;
	(uParam0[2 /*10*/])->f_1[0] = 1;
	(uParam0[2 /*10*/])->f_1[1] = 0;
	(uParam0[2 /*10*/])->f_1[2] = 0;
	(uParam0[2 /*10*/])->f_1[3] = 1;
	(*uParam0)[3 /*10*/] = 6;
	(uParam0[3 /*10*/])->f_1[0] = 0;
	(uParam0[3 /*10*/])->f_1[1] = 0;
	(uParam0[3 /*10*/])->f_1[2] = 0;
	(uParam0[3 /*10*/])->f_1[3] = 1;
	(uParam0[3 /*10*/])->f_1[4] = 1;
	(uParam0[3 /*10*/])->f_1[5] = 1;
	(*uParam0)[4 /*10*/] = 8;
	(uParam0[4 /*10*/])->f_1[0] = 0;
	(uParam0[4 /*10*/])->f_1[1] = 0;
	(uParam0[4 /*10*/])->f_1[2] = 0;
	(uParam0[4 /*10*/])->f_1[3] = 0;
	(uParam0[4 /*10*/])->f_1[4] = 1;
	(uParam0[4 /*10*/])->f_1[5] = 1;
	(uParam0[4 /*10*/])->f_1[6] = 1;
	(uParam0[4 /*10*/])->f_1[7] = 1;
	(*uParam0)[5 /*10*/] = 4;
	(uParam0[5 /*10*/])->f_1[0] = 1;
	(uParam0[5 /*10*/])->f_1[1] = 1;
	(uParam0[5 /*10*/])->f_1[2] = 1;
	(uParam0[5 /*10*/])->f_1[3] = 0;
	(*uParam0)[6 /*10*/] = 8;
	(uParam0[6 /*10*/])->f_1[0] = 0;
	(uParam0[6 /*10*/])->f_1[1] = 0;
	(uParam0[6 /*10*/])->f_1[2] = 0;
	(uParam0[6 /*10*/])->f_1[3] = 0;
	(uParam0[6 /*10*/])->f_1[4] = 0;
	(uParam0[6 /*10*/])->f_1[5] = 0;
	(uParam0[6 /*10*/])->f_1[6] = 0;
	(uParam0[6 /*10*/])->f_1[7] = 1;
	(*uParam0)[7 /*10*/] = 8;
	(uParam0[7 /*10*/])->f_1[0] = 1;
	(uParam0[7 /*10*/])->f_1[1] = 0;
	(uParam0[7 /*10*/])->f_1[2] = 1;
	(uParam0[7 /*10*/])->f_1[3] = 1;
	(uParam0[7 /*10*/])->f_1[4] = 0;
	(uParam0[7 /*10*/])->f_1[5] = 1;
	(uParam0[7 /*10*/])->f_1[6] = 1;
	(uParam0[7 /*10*/])->f_1[7] = 1;
	(*uParam0)[8 /*10*/] = 7;
	(uParam0[8 /*10*/])->f_1[0] = 1;
	(uParam0[8 /*10*/])->f_1[1] = 1;
	(uParam0[8 /*10*/])->f_1[2] = 1;
	(uParam0[8 /*10*/])->f_1[3] = 1;
	(uParam0[8 /*10*/])->f_1[4] = 1;
	(uParam0[8 /*10*/])->f_1[5] = 1;
	(uParam0[8 /*10*/])->f_1[6] = 1;
	(*uParam0)[9 /*10*/] = 2;
	(uParam0[9 /*10*/])->f_1[0] = 0;
	(uParam0[9 /*10*/])->f_1[1] = 1;
	(*uParam0)[10 /*10*/] = 3;
	(uParam0[10 /*10*/])->f_1[0] = 0;
	(uParam0[10 /*10*/])->f_1[1] = 1;
	(uParam0[10 /*10*/])->f_1[2] = 1;
	(*uParam0)[11 /*10*/] = 4;
	(uParam0[11 /*10*/])->f_1[0] = 0;
	(uParam0[11 /*10*/])->f_1[1] = 1;
	(uParam0[11 /*10*/])->f_1[2] = 1;
	(uParam0[11 /*10*/])->f_1[3] = 1;
	(*uParam0)[12 /*10*/] = 4;
	(uParam0[12 /*10*/])->f_1[0] = 0;
	(uParam0[12 /*10*/])->f_1[1] = 0;
	(uParam0[12 /*10*/])->f_1[2] = 1;
	(uParam0[12 /*10*/])->f_1[3] = 1;
	(*uParam0)[13 /*10*/] = 3;
	(uParam0[13 /*10*/])->f_1[0] = 1;
	(uParam0[13 /*10*/])->f_1[1] = 0;
	(uParam0[13 /*10*/])->f_1[2] = 1;
	(*uParam0)[14 /*10*/] = 6;
	(uParam0[14 /*10*/])->f_1[0] = 0;
	(uParam0[14 /*10*/])->f_1[1] = 1;
	(uParam0[14 /*10*/])->f_1[2] = 1;
	(uParam0[14 /*10*/])->f_1[3] = 1;
	(uParam0[14 /*10*/])->f_1[4] = 1;
	(uParam0[14 /*10*/])->f_1[5] = 0;
}

void func_154(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_154[iParam1] != iParam2)
	{
		uParam0->f_154[iParam1] = iParam2;
		uParam0->f_185[iParam1] = iParam2;
	}
}

bool func_155(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		return true;
	}
	if (uParam1->f_216[iParam2] == 0)
	{
		func_251(uParam1, iParam2);
	}
	if (uParam1->f_216[iParam2] != 0 && func_38(uParam1->f_32[iParam2 /*3*/]))
	{
		if (func_38(uParam1->f_32[iParam2 /*3*/]))
		{
			vVar3 = { Global_34 };
			vVar0.x = (vVar3.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
			vVar0.f_1 = (vVar3.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
			vVar0.f_2 = vVar3.z;
			if (func_38(vVar0))
			{
				DEBUG::_0x4DC69742196F818A(2952, 124, "FISHING: fish ", iParam2, " wasn't created because pos ", &vVar0, " is zero");
				return false;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar0, false) < 10f)
			{
				DEBUG::_0x4DC69742196F818A(2952, 124, "FISHING: fish ", iParam2, " wasn't created because pos ", &vVar0, " is near to player");
				return false;
			}
			else if (!func_252(uParam0, vVar0))
			{
				DEBUG::_0x4DC69742196F818A(2952, 124, "FISHING: fish ", iParam2, " wasn't created because pos ", &vVar0, " is not inside any fish area");
				return false;
			}
			else if (func_253(vVar0))
			{
				DEBUG::_0x4DC69742196F818A(2952, 124, "FISHING: fish ", iParam2, " wasn't created because pos ", &vVar0, " is inside a disallowed area");
				return false;
			}
			else if (!func_254(vVar0, uParam1->f_216[iParam2], &(vVar0.f_2)))
			{
				DEBUG::_0x4DC69742196F818A(2952, 124, "FISHING: fish ", iParam2, " wasn't created because pos ", &vVar0, " isn't in sufficiently deep water");
				return false;
			}
			else
			{
				uParam1->f_32[iParam2 /*3*/] = { vVar0 };
			}
		}
	}
	if ((uParam1->f_797 == 0 && uParam1->f_216[iParam2] != 0) && !func_38(uParam1->f_32[iParam2 /*3*/]))
	{
		STREAMING::REQUEST_MODEL(uParam1->f_216[iParam2], false);
		if (STREAMING::HAS_MODEL_LOADED(uParam1->f_216[iParam2]))
		{
			uParam1->f_123[iParam2] = func_255(uParam1->f_216[iParam2], uParam1->f_32[iParam2 /*3*/], 0f, 1, 1, 0, 1, 1, 1, 0, 0);
			uParam1->f_1[iParam2] = 0;
			FLOCK::_0x8B6F0F59B1B99801(uParam1->f_123[iParam2], 0);
			DEBUG::_0xF0783374333FD8CE(11144, 124, "FISHING: fish ", iParam2, " created at ", &(uParam1->f_32[iParam2 /*3*/]), " model ", func_256(ENTITY::GET_ENTITY_MODEL(uParam1->f_123[iParam2]), 0));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_216[iParam2]);
			uParam1->f_797 = 1;
		}
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]);
}

bool func_156(var uParam0, var uParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	bool bVar17;
	int iVar18;

	if (func_56(&(uParam1->f_433)) && func_57(&(uParam1->f_433)) < (200 + uParam1->f_471 * 20))
	{
		return false;
	}
	func_98(&(uParam1->f_433));
	iVar16 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1, 8);
	DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: fish ", iParam2, " trying to grab from ambient population, iPedCount ", iVar16);
	if (iVar16 == 0)
	{
		return false;
	}
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < iVar16)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(uVar0[iVar18]) && func_257(uVar0[iVar18])) && !func_258(uParam1, &(uVar0[iVar18]))) && !func_163(uParam0, &(uVar0[iVar18])))
		{
			uParam1->f_123[iParam2] = uVar0[iVar18];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, false);
			uParam1->f_1[iParam2] = 1;
			bVar17 = PED::_GET_PED_META_OUTFIT_HASH(uParam1->f_123[iParam2]);
			if ((((bVar17 == joaat("META_OUTFIT_ANIMAL_POISON_BLUEGIL") || bVar17 == joaat("META_OUTFIT_ANIMAL_POISON_CHAINPICKEREL")) || bVar17 == joaat("META_OUTFIT_ANIMAL_POISON_LAKESTURGEON")) || bVar17 == joaat("META_OUTFIT_ANIMAL_POISON_REDFIN")) || bVar17 == joaat("META_OUTFIT_ANIMAL_POISON_ROCKBASS"))
			{
				uParam1->f_340[iParam2] = 1;
			}
			else
			{
				uParam1->f_340[iParam2] = 0;
			}
			DEBUG::_0xF0783374333FD8CE(9087624, 124, "FISHING: fish ", iParam2, " grabbed from ambient population, model ", func_256(ENTITY::GET_ENTITY_MODEL(uParam1->f_123[iParam2]), 0), " outfit ", func_259(bVar17, 0), " rarity ", func_260(FLOCK::_0xF8B48A361DC388AE(uParam1->f_123[iParam2]), 0), " bIsPoisoned ", uParam1->f_340[iParam2], " timerLastGrabbedAmbientFish ", func_159(&(uParam1->f_436)));
			func_98(&(uParam1->f_436));
			return true;
		}
		iVar18++;
	}
	return false;
}

bool func_157(var uParam0, int iParam1)
{
	return iParam1 == uParam0->f_799;
}

bool func_158(var uParam0)
{
	if (((uParam0->f_471 < 5 && func_159(&(uParam0->f_436)) > 15000) && !func_45(64)) && Global_1903123.f_5 == 6)
	{
		return true;
	}
	return false;
}

int func_159(var uParam0)
{
	if (!func_56(uParam0))
	{
		return 0;
	}
	if (func_144(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_145() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_160(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if ((uParam0->f_798 == 1 || ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1])) || !PED::_0xA0BC8FAED8CFEB3C(uParam0->f_123[iParam1]))
	{
		return false;
	}
	func_261(uParam0->f_123[iParam1]);
	bVar0 = DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Prevent_Tasking");
	bVar1 = DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Weight");
	uParam0->f_216[iParam1] = ENTITY::GET_ENTITY_MODEL(uParam0->f_123[iParam1]);
	uParam0->f_247[iParam1] = func_262(uParam0->f_216[iParam1]);
	if (bVar1 == 0)
	{
		uParam0->f_278[iParam1] = func_263(uParam0->f_247[iParam1]);
		DECORATOR::DECOR_SET_FLOAT(uParam0->f_123[iParam1], "Fish_Weight", uParam0->f_278[iParam1]);
	}
	else
	{
		uParam0->f_278[iParam1] = DECORATOR::DECOR_GET_FLOAT(uParam0->f_123[iParam1], "Fish_Weight");
	}
	uParam0->f_309[iParam1] = func_264(uParam0->f_216[iParam1]);
	uParam0->f_402[iParam1] = 0f;
	func_265(uParam0->f_123[iParam1], 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_123[iParam1], false);
	func_266(uParam0, iParam1);
	PED::SET_PED_RESET_FLAG(uParam0->f_123[iParam1], 169, true);
	if (bVar0 == 0)
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking", false);
		if (func_45(16))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_123[iParam1], 20, false);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam1, " proofs setup");
		}
		if (((!func_166(uParam0->f_123[iParam1], 1139527981) && !func_166(uParam0->f_123[iParam1], 518218985)) && !func_166(uParam0->f_123[iParam1], -773337285)) && !PED::IS_PED_FLEEING(uParam0->f_123[iParam1]))
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_123[iParam1], -1, 0, 0, 0);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam1, " tasked during setup");
		}
	}
	uParam0->f_798 = 1;
	return true;
}

void func_161(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_706[iParam2 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_439[iParam2] = 0;
	iVar0 = func_120(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_49(uParam0, uParam1, -1);
	}
	func_154(uParam1, iParam2, 4);
}

bool func_162(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Prevent_Tasking"))
		{
			if (DECORATOR::DECOR_GET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking") == 0)
			{
				return true;
			}
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking", false);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam1, " had to add decor Fish_Prevent_Tasking during FISHING_IS_FISH_SAFE_TO_TASK");
		}
	}
	return false;
}

bool func_163(var uParam0, var uParam1)
{
	if ((!func_38(uParam0->f_4) && !ENTITY::IS_ENTITY_DEAD(*uParam1)) && func_39(*uParam1, uParam0->f_4, 0) < 50f)
	{
		return false;
	}
	return true;
}

bool func_164(var uParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_FLEEING(uParam1->f_123[iParam2]))
	{
		return false;
	}
	if (func_61(uParam0, 512) && func_39(func_147(), func_152(uParam1, iParam2), 0) < 5f)
	{
		uParam1->f_706[iParam2 /*3*/] = { func_148() };
		DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: participant 0 flicked bait too often, fish ", iParam2, " was nearby so will flee");
		return true;
	}
	return false;
}

void func_165(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = func_120(uParam1, iParam3);
	if (iVar1 != -1)
	{
		func_267();
		func_240(uParam0, uParam1);
		func_241(512);
		DEBUG::_0x4DC69742196F818A(14472, 124, "FISHING: fish ", iParam3, " will flee participant ", iVar1, " coord ", &(uParam2->f_706[iParam3 /*3*/]));
		func_49(uParam1, uParam2, -1);
		Global_1903123.f_5.f_7 = 0;
	}
	else
	{
		if (func_38(uParam2->f_706[iParam3 /*3*/]))
		{
			uParam2->f_706[iParam3 /*3*/] = { Global_34 };
		}
		DEBUG::_0x4DC69742196F818A(904, 124, "FISHING: fish ", iParam3, " needs to flee coord ", &(uParam2->f_706[iParam3 /*3*/]));
	}
	func_98(&(uParam2->f_524[iParam3 /*3*/]));
	func_58(&(uParam2->f_615[iParam3 /*3*/]));
	if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iParam3]))
	{
		func_266(uParam2, iParam3);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iParam3], false);
		PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iParam3], 17, false);
	}
	if (iVar0 == 1)
	{
		func_154(uParam2, iParam3, 8);
	}
	else
	{
		func_154(uParam2, iParam3, 4);
	}
}

bool func_166(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_167(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam2->f_154[iParam3] == 6)
	{
		func_268(uParam1, uParam2, iParam3);
		func_269(uParam0, uParam1, uParam2, iParam3);
		if (func_270(uParam1) || func_271(uParam1))
		{
			if (!func_272(uParam0, uParam2, iParam3))
			{
				uParam2->f_154[iParam3] = 7;
			}
		}
	}
	else
	{
		func_273(uParam1, uParam2, iParam3);
		func_22(uParam1);
		if ((func_274(uParam1) || func_275(uParam0, uParam1)) || func_272(uParam0, uParam2, iParam3))
		{
			uParam2->f_154[iParam3] = 6;
		}
	}
	if (uParam2->f_185[iParam3] != uParam2->f_154[iParam3])
	{
		uParam2->f_185[iParam3] = uParam2->f_154[iParam3];
		uParam1->f_176 = 0;
		TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		DEBUG::_0x4DC69742196F818A(2696, 124, "FISHING: fish ", iParam3, " has changed to ", func_276(uParam2->f_154[iParam3], 0), " so clearing tasks");
	}
}

void func_168(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (((uParam0->f_200 == 0 || uParam0->f_200 == 6) || uParam0->f_200 == 7) || uParam0->f_200 == 8)
	{
		uParam0->f_201 = 0;
		if (func_56(&(uParam0->f_188)))
		{
			func_277(&(uParam0->f_188));
		}
		if (func_56(&(uParam0->f_191)))
		{
			func_277(&(uParam0->f_191));
		}
		return;
	}
	fVar0 = ENTITY::GET_ENTITY_HEADING(uParam1->f_123[iParam2]);
	fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 + 360f);
	}
	if (fVar2 >= 180f)
	{
		uParam0->f_201 = 4;
	}
	else
	{
		uParam0->f_201 = 3;
	}
	if (uParam0->f_201 == 4)
	{
		if (IntToFloat(func_135()) < -25f && func_278())
		{
			if (func_86(uParam1, iParam2))
			{
				if (func_56(&(uParam0->f_188)))
				{
					func_279(&(uParam0->f_188));
				}
				else
				{
					func_98(&(uParam0->f_188));
				}
			}
			else if (func_56(&(uParam0->f_191)))
			{
				func_279(&(uParam0->f_191));
			}
			else
			{
				func_98(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_56(&(uParam0->f_188)))
			{
				func_277(&(uParam0->f_188));
			}
			if (func_56(&(uParam0->f_191)))
			{
				func_277(&(uParam0->f_191));
			}
		}
	}
	else if (uParam0->f_201 == 3)
	{
		if (IntToFloat(func_135()) > 25f && func_278())
		{
			if (func_86(uParam1, iParam2))
			{
				if (func_56(&(uParam0->f_188)))
				{
					func_279(&(uParam0->f_188));
				}
				else
				{
					func_98(&(uParam0->f_188));
				}
			}
			else if (func_56(&(uParam0->f_191)))
			{
				func_279(&(uParam0->f_191));
			}
			else
			{
				func_98(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_56(&(uParam0->f_188)))
			{
				func_277(&(uParam0->f_188));
			}
			if (func_56(&(uParam0->f_191)))
			{
				func_277(&(uParam0->f_191));
			}
		}
	}
	else
	{
		if (func_56(&(uParam0->f_188)))
		{
			func_277(&(uParam0->f_188));
		}
		if (func_56(&(uParam0->f_191)))
		{
			func_277(&(uParam0->f_191));
		}
	}
}

void func_169(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;

	if (func_280(uParam1, 0))
	{
		if (func_166(uParam2->f_123[iParam3], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		}
		return;
	}
	if (!func_281(uParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 fish target doesn't yet exist");
		return;
	}
	vVar0 = { func_152(uParam2, iParam3) };
	uParam1->f_218 = 0;
	if (uParam1->f_17 < 0.1f)
	{
		uParam1->f_200 = 7;
	}
	else if (func_282(uParam1, uParam2, iParam3))
	{
		uParam1->f_200 = 8;
	}
	else if (!func_252(uParam0, vVar0))
	{
		func_283(uParam1, uParam2, iParam3);
	}
	else if (func_284(uParam1, uParam2, iParam3))
	{
		func_285(uParam0, uParam1, uParam2, iParam3, vVar0);
	}
	if (((uParam1->f_200 == 8 || uParam1->f_200 == 7) || uParam1->f_200 == 6) || uParam1->f_200 == 0)
	{
		uParam1->f_222 = 0f;
		uParam1->f_223 = 0;
		uParam1->f_224 = 0;
		if (func_166(uParam2->f_123[iParam3], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
			DEBUG::_0x4DC69742196F818A(648, 124, "FISHING: participant 0 fish ", iParam3, " performing ", func_286(uParam1->f_200, 0));
		}
	}
	else
	{
		func_287(uParam1, uParam2, iParam3);
		if (uParam1->f_223 == 1 || !func_166(uParam2->f_123[iParam3], 1227113341))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
				DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam3, " wasn't owned by thread so set as mission entity - FISHING_UPDATE_FISH_TASKS");
			}
			TASK::TASK_GO_TO_ENTITY(uParam2->f_123[iParam3], uParam1->f_8, -1, 0.1f, uParam1->f_222, 0.1f, 1);
			DEBUG::_0x4DC69742196F818A(1608328, 124, "FISHING: participant 0 fish ", iParam3, " performing ", func_286(uParam1->f_200, 0), " bForceUpdateFishTask ", uParam1->f_223, " iFramesSinceForceUpdatedFishTask ", uParam1->f_224, " fFishSwimSpeed ", uParam1->f_222);
			uParam1->f_223 = 0;
			uParam1->f_224 = 0;
		}
	}
	if (uParam1->f_200 == 7)
	{
		if (!func_56(&(uParam1->f_219)))
		{
			func_98(&(uParam1->f_219));
		}
		if (func_144(&(uParam1->f_219)))
		{
			func_279(&(uParam1->f_219));
		}
	}
	else if (func_56(&(uParam1->f_219)) && !func_144(&(uParam1->f_219)))
	{
		func_277(&(uParam1->f_219));
	}
}

void func_170(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;

	if (((func_56(&(uParam1->f_196)) && func_57(&(uParam1->f_196)) < uParam1->f_199) || !func_86(uParam2, iParam3)) || !func_288(uParam1))
	{
		return;
	}
	vVar0 = { func_289(func_152(uParam2, iParam3), 0) };
	if (func_38(vVar0))
	{
		return;
	}
	func_98(&(uParam1->f_196));
	if (func_87(uParam1) > 0.8f)
	{
		uParam1->f_199 = MISC::GET_RANDOM_INT_IN_RANGE(150, 250);
	}
	else
	{
		uParam1->f_199 = MISC::GET_RANDOM_INT_IN_RANGE(250, 350);
	}
	fVar3 = 1f;
	if (uParam2->f_309[iParam3] == 0)
	{
		fVar3 = 0.8f;
	}
	else if (uParam2->f_309[iParam3] == 1)
	{
		fVar3 = 0.9f;
	}
	else if (uParam2->f_309[iParam3] == 2)
	{
		fVar3 = 1f;
	}
	else if (uParam2->f_309[iParam3] == 3)
	{
		fVar3 = 1.1f;
	}
	else if (uParam2->f_309[iParam3] == 4)
	{
		fVar3 = 1.2f;
	}
	GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mg_fish_struggle", vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), fVar3, 0, 0, 0);
	func_290(uParam0, uParam1, uParam2, iParam3);
	DEBUG::_0x4DC69742196F818A(7048, 124, "FISHING: participant 0 fish ", iParam3, " trigger water splash at ", &vVar0, " scale ", fVar3);
}

float func_171(var uParam0)
{
	if (!func_56(uParam0))
	{
		return 0f;
	}
	if (func_144(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_291() - uParam0->f_1);
}

void func_172(var uParam0, var uParam1)
{
	int iVar0;

	if (func_61(uParam0, 32))
	{
		iVar0 = func_82(uParam0);
		if (func_133(iVar0) && uParam1->f_309[iVar0] != 4)
		{
			DEBUG::_0xF0783374333FD8CE(2696, 124, "FISHING: fish ", iVar0, " state ", func_276(uParam1->f_154[iVar0], 0), " FISHING_HANDLE_UNEQUIP_ROD_DURING_UNHOOKING_FISH");
			if (uParam1->f_154[iVar0] == 9)
			{
				DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iVar0, " need to delete fish FISHING_HANDLE_UNEQUIP_ROD_DURING_UNHOOKING_FISH");
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

int func_173()
{
	if (func_50())
	{
		return WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	}
	return 0;
}

void func_174(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = ENTITY::DOES_ENTITY_EXIST(func_150());
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (((Global_1903123.f_5 == 6 || Global_1903123.f_5 == 10) && bVar0 == 1) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iVar1]))
		{
			uParam0->f_23[iVar1] = func_292(func_152(uParam1, iVar1), func_151());
		}
		else
		{
			uParam0->f_23[iVar1] = 99999f;
		}
		iVar1++;
	}
}

void func_175(var uParam0)
{
	func_53(uParam0);
	uParam0->f_18 = 0;
}

void func_176(var uParam0, var uParam1, var uParam2)
{
	func_293(uParam0, uParam1, uParam2);
	func_101(uParam1, 1024);
	if (func_294() || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_WHEEL_MENU")))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		if (func_295())
		{
			func_113();
		}
		UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
		func_53(uParam0);
	}
	else
	{
		func_296(&(uParam0->f_82), 25, 0);
		func_296(&(uParam0->f_82), 27, 0);
		func_296(&(uParam0->f_82), 29, 0);
		if (func_297())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		}
		else if (func_226(Global_38.f_5807))
		{
			if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
			{
				func_298(uParam0, 23, 0, -1, 1);
			}
			else
			{
				func_298(uParam0, 22, 0, -1, 1);
			}
		}
		if (func_299())
		{
			func_300(uParam0, 7, 0, 1);
		}
		func_301(uParam0, uParam1, uParam2);
	}
	func_302(uParam0, uParam1);
}

void func_177(var uParam0, var uParam1, var uParam2)
{
	func_293(uParam0, uParam1, uParam2);
	func_303(uParam1);
	if (func_297())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	}
	func_296(&(uParam0->f_82), 22, 0);
	func_296(&(uParam0->f_82), 23, 0);
	func_296(&(uParam0->f_82), 27, 0);
	func_296(&(uParam0->f_82), 29, 0);
	func_304(uParam0);
	func_53(uParam0);
}

void func_178(var uParam0)
{
	func_296(&(uParam0->f_82), 22, 0);
	func_296(&(uParam0->f_82), 23, 0);
	func_296(&(uParam0->f_82), 25, 0);
	func_298(uParam0, 27, 1, -1, 1);
}

void func_179(var uParam0, var uParam1)
{
	func_53(uParam0);
	func_296(&(uParam0->f_82), 27, 0);
	func_296(&(uParam0->f_82), 29, 0);
	func_305(uParam0, uParam0->f_5);
	func_306(uParam0);
	func_307(uParam1);
	func_101(uParam1, 1);
}

void func_180()
{
}

void func_181(var uParam0, var uParam1, var uParam2)
{
	if (func_192(1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 is still in FISHING_STATE_WaitingForBite but should be in FISHING_STATE_ReelInFish");
		return;
	}
	func_308(uParam0, uParam1);
	func_309(uParam1);
	func_307(uParam1);
	func_281(uParam1);
	func_310(uParam0, uParam1);
	if (!func_61(uParam1, 4096) && !func_311())
	{
		func_313(uParam0, func_312(uParam0));
		func_314(uParam0, uParam1);
		func_315(uParam0, uParam1, uParam2);
	}
	func_316(uParam0, uParam1);
	func_317(uParam0, uParam1, uParam2);
	if (func_318(uParam0, uParam1))
	{
		func_319(uParam1, 4096);
		func_190(128, 1);
		func_320(8);
		func_23(uParam1);
		func_242(uParam0, uParam1, uParam2, 2);
		func_305(uParam0, uParam0->f_6);
		func_53(uParam0);
		if ((!func_226(Global_38.f_5807) && uParam1->f_54 == 0) && uParam1->f_3 == 1)
		{
			func_298(uParam0, 54, 1, -2, 1);
		}
		else if (func_295())
		{
			func_113();
		}
	}
	else if (func_321(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_322(uParam1);
	}
}

void func_182(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	func_320(1);
	if (!func_56(&(uParam1->f_179)))
	{
		func_98(&(uParam1->f_179));
	}
	func_296(&(uParam0->f_82), 30, 0);
	func_296(&(uParam0->f_82), 37, 0);
	func_296(&(uParam0->f_82), 31, 0);
	func_296(&(uParam0->f_82), 32, 0);
	func_296(&(uParam0->f_82), 33, 0);
	func_296(&(uParam0->f_82), 34, 0);
	func_296(&(uParam0->f_82), 39, 0);
	func_315(uParam0, uParam1, uParam2);
	if (!func_311())
	{
		func_300(uParam0, 4, 0, 1);
	}
	iVar0 = func_82(uParam1);
	if (func_133(iVar0) && !func_86(uParam2, iVar0))
	{
		if (func_56(&(uParam0->f_82.f_148[57 /*3*/])))
		{
			func_298(uParam0, 57, 0, -2, 0);
		}
		if (func_56(&(uParam0->f_82.f_148[56 /*3*/])) && !TASK::_0x5952DFA38FA529FE())
		{
			func_298(uParam0, 56, 0, -2, 0);
		}
	}
	if (func_280(uParam1, 1))
	{
		func_190(8, 1);
	}
	else if (func_323(uParam0, uParam1, uParam2))
	{
		func_324(uParam0, uParam1, uParam2);
		func_190(2, 1);
	}
	else
	{
		func_325(uParam0, uParam1, uParam2);
	}
}

void func_183(var uParam0)
{
	func_53(uParam0);
	uParam0->f_18 = 0;
}

void func_184(var uParam0, var uParam1, var uParam2)
{
	if (func_326(256, 1))
	{
		func_327(uParam0, uParam1, uParam2);
	}
}

void func_185(var uParam0, var uParam1, var uParam2)
{
	func_241(1);
	func_181(uParam0, uParam1, uParam2);
	func_296(&(uParam0->f_82), 30, 0);
	func_296(&(uParam0->f_82), 37, 0);
	func_296(&(uParam0->f_82), 31, 0);
	func_296(&(uParam0->f_82), 32, 0);
	func_296(&(uParam0->f_82), 33, 0);
	func_296(&(uParam0->f_82), 34, 0);
	func_296(&(uParam0->f_82), 39, 0);
}

void func_186(var uParam0, var uParam1, var uParam2)
{
	func_324(uParam0, uParam1, uParam2);
	func_296(&(uParam0->f_82), 43, 0);
	func_296(&(uParam0->f_82), 45, 0);
	func_296(&(uParam0->f_82), 46, 0);
	func_296(&(uParam0->f_82), 47, 0);
	func_296(&(uParam0->f_82), 72, 0);
	func_296(&(uParam0->f_82), 49, 0);
	func_305(uParam0, uParam0->f_8);
}

void func_187(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	func_328(uParam0, uParam1, uParam2);
	if (!func_61(uParam1, 32768) && func_326(32, 1))
	{
		func_319(uParam1, 32768);
	}
	if ((func_61(uParam1, 32768) && !func_61(uParam1, 64)) && !func_61(uParam1, 32))
	{
		func_329(uParam1, uParam2);
		func_330(uParam0, uParam1);
		iVar0 = func_82(uParam1);
		if (func_133(iVar0))
		{
			func_331(&(uParam0->f_19), uParam2->f_340[iVar0]);
		}
		if (func_326(4, 1))
		{
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 iFish ", iVar0, " FISHING_UPDATE_STATE_UNHOOK_FISH - FISHING_CODE_SIG_KEEP_DECISION_TIMEOUT");
			func_332(uParam0, uParam1, uParam2);
			func_140(uParam0, 5);
			func_140(uParam0, 6);
		}
		else if (!func_133(iVar0))
		{
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 iFish ", iVar0, " FISHING_UPDATE_STATE_UNHOOK_FISH - NOT FISHING_IS_FISH_INT_VALID");
			func_332(uParam0, uParam1, uParam2);
			func_140(uParam0, 5);
			func_140(uParam0, 6);
		}
		else if (ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 iFish ", iVar0, " FISHING_UPDATE_STATE_UNHOOK_FISH - IS_ENTITY_DEAD");
			func_332(uParam0, uParam1, uParam2);
			func_140(uParam0, 5);
			func_140(uParam0, 6);
		}
		else
		{
			func_333(uParam0, uParam1, uParam2);
		}
	}
	func_334(uParam1);
	func_335(uParam1);
	func_336(uParam0, uParam1, uParam2);
	func_337();
	func_338(uParam0, uParam1, uParam2);
}

void func_188(var uParam0)
{
	func_53(uParam0);
	uParam0->f_18 = 0;
	func_339(uParam0);
}

void func_189(var uParam0)
{
	if ((Global_1903123.f_5 <= 1 || Global_1903123.f_5 == 9) || Global_1903123.f_5 == 13)
	{
		func_114(uParam0, 0);
	}
	else
	{
		func_114(uParam0, 1);
	}
}

void func_190(int iParam0, int iParam1)
{
	if (!func_340(iParam0))
	{
		func_128(&(Global_1903123.f_5.f_6), iParam0);
		if (iParam1 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: participant 0 bit ", func_341(iParam0, 0), " status ", func_127(Global_1903123.f_5.f_6, iParam0));
		}
	}
}

bool func_191()
{
	if (Global_1903123.f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_192(int iParam0)
{
	return func_127(Global_1903123.f_2, iParam0);
}

float func_193(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_194(var uParam0, int iParam1)
{
	char* sVar0;
	float fVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		sVar0 = func_214(iVar2);
		fVar1 = 0f;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && DECORATOR::DECOR_EXIST_ON(iParam1, sVar0))
		{
			fVar1 = DECORATOR::DECOR_GET_FLOAT(iParam1, sVar0);
		}
		if (fVar1 > 0f && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			func_342(uParam0, iVar2, fVar1);
		}
		else
		{
			func_343(uParam0, iVar2);
		}
		iVar2++;
	}
}

void func_195(var uParam0, int iParam1, int iParam2)
{
}

void func_196(var uParam0, int iParam1, int iParam2)
{
}

void func_197(var uParam0, int iParam1, int iParam2)
{
}

void func_198(var uParam0, int iParam1, int iParam2)
{
}

void func_199(var uParam0, int iParam1, int iParam2)
{
}

void func_200(var uParam0, int iParam1, int iParam2)
{
}

void func_201(var uParam0, int iParam1, int iParam2)
{
}

void func_202(var uParam0, int iParam1, int iParam2)
{
}

void func_203(var uParam0, int iParam1, int iParam2)
{
}

void func_204(var uParam0, int iParam1, int iParam2)
{
}

void func_205(var uParam0, int iParam1, int iParam2)
{
}

void func_206(var uParam0, int iParam1, int iParam2)
{
}

void func_207(var uParam0, int iParam1, int iParam2)
{
}

void func_208(var uParam0, int iParam1, int iParam2)
{
}

void func_209(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_343(uParam0, iVar0);
		iVar0++;
	}
}

char* func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PRESENCE_IDLE";
		case 1:
			return "PRESENCE_MATCHMAKING";
		case 2:
			return "PRESENCE_STORY_CHAPTER";
		case 3:
			return "PRESENCE_ACTIVITIES";
		case 4:
			return "PRESENCE_AMBIENT";
		case 5:
			return "PRESENCE_STRANGER";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_211()
{
	return Global_1572887.f_13;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.x = iParam0;
	DEBUG::_0xA308F935BDECCEC0(40, 0, "SET_RICH_PRESENCE_PRESENCE_ACTIVITIES setting ", func_344(iParam0, 0));
	vVar0.f_1 = iParam1;
	DEBUG::_0xA308F935BDECCEC0(40, 0, "SET_RICH_PRESENCE_PRESENCE_ACTIVITIES setting ", func_345(iParam1, 0));
	vVar0.f_2 = iParam2;
	DEBUG::_0xA308F935BDECCEC0(40, 0, "SET_RICH_PRESENCE_PRESENCE_ACTIVITIES setting ", func_346(iParam2, 0));
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

char* func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Fish_Attractor_Bluegill";
		case 1:
			return "Fish_Attractor_BullheadCatfish";
		case 2:
			return "Fish_Attractor_ChainPickerel";
		case 3:
			return "Fish_Attractor_ChannelCatfish";
		case 4:
			return "Fish_Attractor_LakeSturgeon";
		case 5:
			return "Fish_Attractor_LargemouthBass";
		case 6:
			return "Fish_Attractor_LongnoseGar";
		case 7:
			return "Fish_Attractor_Muskie";
		case 8:
			return "Fish_Attractor_NorthernPike";
		case 9:
			return "Fish_Attractor_Perch";
		case 10:
			return "Fish_Attractor_RedfinPickerel";
		case 11:
			return "Fish_Attractor_RockBass";
		case 12:
			return "Fish_Attractor_SmallmouthBass";
		case 13:
			return "Fish_Attractor_SockeyeSalmon";
		case 14:
			return "Fish_Attractor_SteelheadTrout";
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_DECORATOR_ATTRACTOR_FOR_FISH_TYPE unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_DECORATOR_ATTRACTOR_FOR_FISH_TYPE: unknown enum");
	return "";
}

int func_215()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

bool func_216(bool bParam0)
{
	return (bParam0 != -1 && bParam0 != 0);
}

void func_217(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_347())
	{
		return;
	}
	DEBUG::_0xF0783374333FD8CE(174760, 11, "DISPLAY_NAMED_LOCATION - ", func_42(iParam0, 0), " ", func_44(iParam1, 0), " ", func_348(bParam2, 0), " state ", func_349(iParam4, 0));
	UNK_0x355E72323AEE83CC(11, 6);
	sVar1 = func_350(iParam0, iParam1, bParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		DEBUG::_0x83407B92D46F25C3(10920, 11, "No texture for either ", func_42(iParam0, 0), " or ", func_44(iParam1, 0), " or ", func_348(bParam2, 0));
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_351(iParam4))
	{
		if (func_352(iParam0))
		{
			iParam4 = func_354(func_353(iParam0));
		}
		else
		{
			iParam4 = func_354(iParam1);
		}
	}
	if (func_351(iParam4))
	{
		iVar3 = func_355(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_357(func_356(bParam2));
	}
	else if ((func_358(iParam1, 2) || func_359(iParam4, 2)) && !Global_1893599.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893599.f_9 = 1;
	}
	else if ((func_352(iParam0) && func_360(iParam0, 16777216)) && !Global_1893599.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893599.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893599.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893599.f_9 = 1;
	}
	else
	{
		iVar4 = func_362(func_361());
		iVar5 = func_363(func_361());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_364(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_229(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_229(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_364(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_229(&cVar6, joaat("COLOR_PURE_WHITE")), func_229(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893599.f_9 = 0;
	}
	DEBUG::_0xF0783374333FD8CE(680, 11, "DISPLAY_NAMED_LOCATION - Texture ", sVar1, " info ", sVar2);
	Global_1939313.f_145 = func_365(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_218(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_291() - fParam1);
	func_366(uParam0, 1);
	func_367(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_219(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "FISHING_PARTICIPANT_BIT_RESET_DATA_FOR_IDLE";
		case 2:
			return "FISHING_PARTICIPANT_BIT_RESET_DATA_FOR_CAST_OUT";
		case 4:
			return "FISHING_PARTICIPANT_BIT_WAIT_FOR_RELEASED_SIGNAL";
		case 8:
			return "FISHING_PARTICIPANT_BIT_UPDATE_WHEN_BEGIN_UNHOOK_FISH";
		case 16:
			return "FISHING_PARTICIPANT_BIT_WAIT_FOR_UNATTACH_DURING_UNHOOK";
		case 32:
			return "FISHING_PARTICIPANT_BIT_KEEP_FISH_WHEN_UNHOOK";
		case 64:
			return "FISHING_PARTICIPANT_BIT_RELEASE_FISH_WHEN_UNHOOK";
		case 128:
			return "FISHING_PARTICIPANT_BIT_FINISH_UNHOOK_FISH_WHEN_RESET_DATA";
		case 256:
			return "FISHING_PARTICIPANT_BIT_IS_CURRENTLY_FLICKING_BAIT";
		case 512:
			return "FISHING_PARTICIPANT_BIT_FLICKED_BAIT_TOO_OFTEN";
		case 1024:
			return "FISHING_PARTICIPANT_BIT_DONE_CAST_SETTINGS";
		case 2048:
			return "FISHING_PARTICIPANT_BIT_SHOULD_REEL_IN";
		case 4096:
			return "FISHING_PARTICIPANT_BIT_RESETTING_CAST";
		case 8192:
			return "FISHING_PARTICIPANT_BIT_DONE_NIBBLE_END_FISH_SOUND";
		case 16384:
			return "FISHING_PARTICIPANT_BIT_DONE_NIBBLE_END_ROD_SOUND";
		case 32768:
			return "FISHING_PARTICIPANT_BIT_CAN_MAKE_UNHOOK_DECISION";
		case 65536:
			return "FISHING_PARTICIPANT_BIT_UPDATE_UNHOOK_STATS";
		case 131072:
			return "FISHING_PARTICIPANT_BIT_WAIT_FOR_SIGNAL_DURING_UNHOOK";
		case 262144:
			return "FISHING_PARTICIPANT_BIT_DONE_CONSUME_BAIT_DURING_UNHOOK";
		case 524288:
			return "FISHING_PARTICIPANT_BIT_UPDATE_WHEN_BEGIN_LINE_SNAP";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_220(bool bParam0)
{
	if (func_211() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_368(bParam0));
}

bool func_221()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "IS_INVENTORY_MIRROING_TRANSACTIONS - Not using INVENTORY_MP_MISSION, returning FALSE");
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

bool func_222(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Attempting to check for an invalid item in the player's inventory!");
		return false;
	}
	iVar0 = func_370(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Found weapon item in player's satchel.");
				return true;
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find weapon item in player's satchel.");
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_371(bParam0, 1))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Did not find ammo item in player's satchel.");
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_372(bParam0))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 157, "DOES_PLAYER_HAVE_ITEM_IN_SATCHEL - Player is wearing this makeup item.");
				return true;
			}
			break;
	}
	return func_230(bParam0, 0, 0, 0) >= iParam1;
}

int func_223(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_373(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_224()
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;
	struct<5> Var11;
	struct<4> Var16;

	if ((((((!func_222(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1) && !func_222(joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 1)) && !func_222(joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 1)) && !func_222(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1)) && !func_222(joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 1)) && !func_222(joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 1)) && !func_222(joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 1))
	{
		iVar0 = func_368(0);
		Var1 = { func_374(1872063208 /* GXTEntry: "No Lure" */, 0, 0) };
		Var6 = { func_375(1872063208 /* GXTEntry: "No Lure" */, Var1, Var1.f_4, 0) };
		if (INVENTORY::_0xF9933164965533B7(iVar0, &Var6))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar0, &Var6, 0);
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - unhide ", func_225(1872063208 /* GXTEntry: "No Lure" */, 0));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - already done unhide ", func_225(1872063208 /* GXTEntry: "No Lure" */, 0));
		}
	}
	else
	{
		iVar10 = func_368(0);
		Var11 = { func_374(1872063208 /* GXTEntry: "No Lure" */, 0, 0) };
		Var16 = { func_375(1872063208 /* GXTEntry: "No Lure" */, Var11, Var11.f_4, 0) };
		if (!INVENTORY::_0xF9933164965533B7(iVar10, &Var16))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar10, &Var16, 1);
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - hide ", func_225(1872063208 /* GXTEntry: "No Lure" */, 0));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - already done hide ", func_225(1872063208 /* GXTEntry: "No Lure" */, 0));
		}
	}
}

var func_225(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("GROUP_SNIPER"):
			return UNK_0x6D61F5AE2F9BCC97(-1104736125);
		case joaat("GROUP_REVOLVER"):
			return UNK_0x6D61F5AE2F9BCC97(-896458901);
		case joaat("GROUP_REPEATER"):
			return UNK_0x6D61F5AE2F9BCC97(-1666864451);
		case -1:
			return UNK_0x6D61F5AE2F9BCC97(-789220491);
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(joaat("INVALID_INVENTORY_ITEM"));
		case joaat("GROUP_PISTOL"):
			return UNK_0x6D61F5AE2F9BCC97(1248583318);
		case joaat("GROUP_SHOTGUN"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("WEAPONTYPE_SHOTGUN"));
		case joaat("GROUP_RIFLE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("WEAPONTYPE_RIFLE"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_226(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("UPGRADE_FSH_BAIT_WORM") || iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

void func_227(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	char* sVar1;

	if (Global_38.f_5807 != iParam2 || iParam4 == 1)
	{
		Global_38.f_5807 = iParam2;
		uParam1->f_55 = 0;
		uParam1->f_56 = 0;
		func_376(uParam1, Global_38.f_5807);
		iVar0 = func_377(uParam1);
		sVar1 = func_378(Global_38.f_5807);
		DEBUG::_0xF0783374333FD8CE(567976, 124, "FISHING: participant 0 set equipped bait - eCurrentBaitEquipped ", func_225(Global_38.f_5807, 0), " sModel ", sVar1, " eFishingMode ", func_379(uParam1->f_54, 0), " iBaitType ", iVar0, " bPerformBaitSwap ", iParam3);
		if (iParam3 == 1)
		{
			TASK::TASK_SWAP_FISHING_BAIT(PLAYER::PLAYER_PED_ID(), sVar1, iVar0);
		}
		else
		{
			TASK::_0x9B0C7FA063E67629(PLAYER::PLAYER_PED_ID(), sVar1, iVar0, 1);
		}
		func_380(uParam0);
		func_224();
		uParam0->f_58 = 0;
		DEBUG::_0xF0783374333FD8CE(680, 124, "FISHING: participant 0 set equipped bait - eLastBaitEquipped ", func_225(uParam0->f_57, 0), " eNextBaitToEquip ", func_225(uParam0->f_58, 0));
		func_381();
		func_106();
		func_382(uParam0);
	}
}

char* func_228(bool bParam0)
{
	bool bVar0;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	bVar0 = func_383(bParam0, 0);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_NAME - No name specified for ", func_225(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(bVar0);
}

char* func_229(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_384(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_230(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item ", func_225(bParam0, 0), " in the player's inventory!");
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	iVar1 = func_370(bParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		bVar2 = func_385(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_386(bParam0, 0);
	}
	if (func_387(bParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_368(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_388(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - No GUID found for item ", func_225(bParam0, 0), ", returning 0");
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_368(bParam2), &Var3, bParam3);
	}
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_SATCHEL_ITEM_COUNT - Found ", iVar0, " of item ", func_225(bParam0, 0));
	return iVar0;
}

bool func_231(bool bParam0)
{
	if (((((bParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || bParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || bParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE")) || func_233(bParam0)) || bParam0 == 1309979101) || bParam0 == 1872063208)
	{
		return true;
	}
	return false;
}

bool func_232(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER") || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"))
	{
		return true;
	}
	return false;
}

bool func_233(bool bParam0)
{
	if (((bParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER") || bParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || bParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || bParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

void func_234(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	DEBUG::_0xA308F935BDECCEC0(40, 0, "SET_RICH_PRESENCE_PRESENCE_AMBIENT setting ", func_344(iParam0, 0));
	Var0.f_1 = iParam1;
	DEBUG::_0xA308F935BDECCEC0(40, 0, "SET_RICH_PRESENCE_PRESENCE_AMBIENT setting ", func_389(iParam1, 0));
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_235()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	DEBUG::_0xA308F935BDECCEC0(24, 0, "GET_RANDOM_RICH_PRESENCE_IDLE_ACTIVITY fPercentage = ", fVar0);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_238(int iParam0)
{
	return iParam0 != 0;
}

void func_239(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_240(var uParam0, var uParam1)
{
	uParam1->f_165 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_52, uParam0->f_53 + 1);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 iTimeUntilCanLureFish ", uParam1->f_165);
	func_98(&(uParam1->f_203));
}

void func_241(int iParam0)
{
	if (func_340(iParam0))
	{
		func_141(&(Global_1903123.f_5.f_6), iParam0);
	}
}

void func_242(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	if (func_61(uParam1, 8192) && func_61(uParam1, 16384))
	{
		return;
	}
	if (uParam1->f_163 == 0)
	{
		return;
	}
	if ((func_56(&(uParam1->f_160)) && func_57(&(uParam1->f_160)) > uParam1->f_166) && iParam3 != 0)
	{
		return;
	}
	iVar0 = func_82(uParam1);
	if (!func_133(iVar0))
	{
		return;
	}
	if (iParam3 == 0)
	{
		sVar1 = "LARGE_BITE_FISH_END";
		sVar2 = "LARGE_BITE_ROD_END";
	}
	else if (iParam3 == 1)
	{
		sVar1 = "LARGE_BITE_FISH_HOOKED";
		sVar2 = "LARGE_BITE_ROD_HOOKED";
	}
	else
	{
		sVar1 = "LARGE_BITE_FISH_FLEE";
		sVar2 = "LARGE_BITE_ROD_FLEE";
	}
	if (!func_61(uParam1, 8192) && AUDIO::_0x84848E1C0FC67DBB(uParam1->f_67))
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_67, sVar1, func_147(), *uParam0, false, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_67, "FishSize", uParam2->f_278[iVar0]);
		func_319(uParam1, 8192);
	}
	if (!func_61(uParam1, 16384) && AUDIO::_0x84848E1C0FC67DBB(uParam1->f_68))
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_68, sVar2, PLAYER::PLAYER_PED_ID(), *uParam0, false, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_68, "FishSize", uParam2->f_278[iVar0]);
		func_319(uParam1, 16384);
	}
}

bool func_243(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1072032.f_23010.f_1 || Global_1072032.f_23010.f_1 == 0) || iParam1 > Global_1072032.f_23010) || iParam1 == 4)
	{
		if (bParam2)
		{
			DEBUG::_0xA308F935BDECCEC0(2728, 206, "NET_MUSIC__PLAY_MUSIC_STRING: STOPPING music event with string ", sParam0, ", priority = ", func_390(iParam1, 0), ", bStopMusic = ", bParam2);
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1072032.f_23010), &uVar1, 2);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(2728, 206, "NET_MUSIC__PLAY_MUSIC_STRING: STARTING music event with string ", sParam0, ", priority = ", func_390(iParam1, 0), ", bStopMusic = ", bParam2);
			Global_1072032.f_23010.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_1072032.f_23010 = iParam1;
		}
		if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		{
			DEBUG::_0x1B08D1EB9D8C4931(2728, 206, "NET_MUSIC__PLAY_MUSIC_STRING: Successfully triggered music event with hash ", sParam0, ", priority = ", func_390(iParam1, 0), ", bStopMusic = ", bParam2);
		}
		else
		{
			DEBUG::_0x1B08D1EB9D8C4931(2728, 206, "NET_MUSIC__PLAY_MUSIC_STRING: Failed to trigger music event with hash ", sParam0, ", priority = ", func_390(iParam1, 0), ", bStopMusic = ", bParam2);
		}
		return true;
	}
	return false;
}

void func_244(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_391(iParam1);
	if (func_392(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_77[iParam1]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, uParam0->f_77[iParam1]);
		func_393(iParam1, 0f);
	}
}

void func_245(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_93[iParam1] != iParam2)
	{
		uParam0->f_93[iParam1] = iParam2;
	}
}

void func_246(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_247(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_PLAYER_CONTEXT_GRIP_REEL";
		case 1:
			return "FISHING_PLAYER_CONTEXT_RESET_CAST";
		case 2:
			return "FISHING_PLAYER_CONTEXT_HOOK_FISH";
		case 3:
			return "FISHING_PLAYER_CONTEXT_REEL_IN";
		case 4:
			return "FISHING_PLAYER_CONTEXT_CONTROL";
		case 5:
			return "FISHING_PLAYER_CONTEXT_RELEASE_FISH";
		case 6:
			return "FISHING_PLAYER_CONTEXT_KEEP_FISH";
		case 7:
			return "FISHING_PLAYER_CONTEXT_CHOOSE_BAIT";
		case 8:
			return "FISHING_PLAYER_CONTEXT_EQUIP_BAIT";
		case 9:
			return "FISHING_PLAYER_CONTEXT_NUM";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_248(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1952230[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3);
}

void func_249(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_248(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_394(*uParam0);
	if (Global_1952230[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Attempting to release a context that was not created by this thread w/ ID: ", iVar0, ".");
		*uParam0 = 0;
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(136, 145, "RELEASE_USE_CONTEXT - Cleaning context w/ ID: ", iVar0, ".");
	UNK_0x355E72323AEE83CC(145, 9);
	func_395(iVar0);
	*uParam0 = 0;
}

void func_250(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_251(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_396();
	if (func_66(iVar0))
	{
		iVar1 = func_397(iVar0);
		uParam0->f_216[iParam1] = iVar1;
	}
}

bool func_252(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_398(uParam0, vParam1);
	iVar1 = func_399(vParam1);
	return (iVar0 == 1 && iVar1 == 1);
}

bool func_253(vector3 vParam0)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 2331.62f, -1216.34f, 45f, false) < 15f || MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 210.38f, 1876.39f, 200.66f, false) < 125f)
	{
		return true;
	}
	return false;
}

bool func_254(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;

	bVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_149(vParam0, 1092616192 /* Float: 10f */), 0, &fVar0);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_149(vParam0, 1092616192 /* Float: 10f */), &fVar1, false);
	fVar2 = (fVar0 - fVar1);
	fVar3 = func_400(uParam3);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		if (fVar2 > 2f)
		{
			fVar2 = 2f;
		}
		*uParam4 = (fVar0 - (fVar2 / 2f));
		return true;
	}
	return false;
}

int func_255(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_401(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

var func_256(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(joaat("DUMMY_MODEL_FOR_SCRIPT"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_257(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_258(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iVar0]) && uParam0->f_123[iVar0] == *uParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_259(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(759749399);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ARL_COMMON";
		case 1:
			return "ARL_RARE";
		case 2:
			return "ARL_LEGENDARY";
		case 3:
			return "ARL_NUMRARITYLEVELS";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_261(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(iParam0);
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: registered as networked");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: already networked");
	}
}

int func_262(bool bParam0)
{
	int iVar0;

	iVar0 = 15;
	switch (bParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
			iVar0 = 2;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 3;
			break;
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
			iVar0 = 4;
			break;
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
			iVar0 = 5;
			break;
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
			iVar0 = 6;
			break;
		case joaat("A_C_FISHMUSKIE_01_LG"):
			iVar0 = 7;
			break;
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
			iVar0 = 8;
			break;
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
			iVar0 = 9;
			break;
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
			iVar0 = 10;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
			iVar0 = 11;
			break;
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			iVar0 = 12;
			break;
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			iVar0 = 13;
			break;
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
			iVar0 = 14;
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_FISH_TYPE_FOR_MODEL unknown enum ", func_256(bParam0, 0));
			DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_FISH_TYPE_FOR_MODEL: unknown enum");
			break;
	}
	return iVar0;
}

float func_263(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = func_402(iParam0, 1);
	fVar1 = func_403(iParam0, 1);
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1);
	fVar3 = func_404(fVar2);
	DEBUG::_0x4DC69742196F818A(1677736, 124, "FISHING: random weight, eFishType ", func_134(iParam0, 0), " fMinFishWeight ", fVar0, " fMaxFishWeight ", fVar1, " fFishWeight ", fVar2, " fFishWeightToNearestOunce ", fVar3);
	return fVar3;
}

int func_264(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 4;
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_FISH_BODY_SIZE_FOR_MODEL unknown enum ", func_256(bParam0, 0));
			DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_FISH_BODY_SIZE_FOR_MODEL: unknown enum");
			break;
	}
	return iVar0;
}

void func_265(int iParam0, bool bParam1)
{
	func_405(iParam0, bParam1);
}

void func_266(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(func_147()))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_123[iParam1], func_147(), false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_150()))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_123[iParam1], func_150(), false);
	}
}

void func_267()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_150()) && ENTITY::IS_ENTITY_ATTACHED(func_150()))
	{
		ENTITY::DETACH_ENTITY(func_150(), true, true);
	}
}

void func_268(var uParam0, var uParam1, int iParam2)
{
	if (func_56(&(uParam0->f_182)))
	{
		return;
	}
	if (!func_66(uParam1->f_247[iParam2]))
	{
		return;
	}
	if (uParam0->f_177 == 0)
	{
		uParam0->f_194 = func_406(uParam1, iParam2);
	}
	else
	{
		uParam0->f_194 = BUILTIN::ROUND((IntToFloat(uParam0->f_194) * 0.95f));
	}
	if (uParam0->f_194 < 4000)
	{
		uParam0->f_194 = 4000;
	}
	if (uParam0->f_177 > 0)
	{
		func_407(uParam0);
	}
	uParam0->f_177++;
	DEBUG::_0xA308F935BDECCEC0(136, 124, "FISHING: participant 0 iNumFishStruggle ", uParam0->f_177, " iFishStruggleDuration ", uParam0->f_194);
	func_58(&(uParam0->f_185));
	func_58(&(uParam0->f_191));
	func_98(&(uParam0->f_182));
	func_58(&(uParam0->f_188));
	func_58(&(uParam0->f_196));
}

void func_269(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_133(iParam3))
	{
		return;
	}
	if (AUDIO::_0x84848E1C0FC67DBB(uParam1->f_69))
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_69, "STRUGGLE", uParam2->f_123[iParam3], *uParam0, false, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_69, "FishSize", uParam2->f_278[iParam3]);
	}
}

int func_270(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_56(&(uParam0->f_188)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(func_57(&(uParam0->f_188))) / 2f));
	}
	iVar1 = (uParam0->f_194 - iVar0);
	if (iVar1 < 4000)
	{
		iVar1 = 4000;
	}
	if (func_56(&(uParam0->f_182)) && func_57(&(uParam0->f_182)) >= iVar1)
	{
		DEBUG::_0x4DC69742196F818A(2184, 124, "FISHING: participant 0 struggle timer has elapsed, iFishStruggleDuration ", uParam0->f_194, " iFishStruggleModifier ", iVar0, " iFishStruggleTotal ", iVar1);
		return 1;
	}
	return 0;
}

int func_271(var uParam0)
{
	if (func_280(uParam0, 0) || uParam0->f_200 == 7)
	{
		DEBUG::_0x4DC69742196F818A(8, 124, "FISHING: participant 0 struggle timer elapsed early");
		return 1;
	}
	return 0;
}

bool func_272(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_408(uParam1, iParam2);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.95f));
	return BUILTIN::TO_FLOAT(func_159(&(uParam0->f_12))) >= IntToFloat(iVar0 * 1000);
}

void func_273(var uParam0, var uParam1, int iParam2)
{
	if (func_56(&(uParam0->f_185)))
	{
		return;
	}
	if (!func_66(uParam1->f_247[iParam2]))
	{
		return;
	}
	if (uParam0->f_178 == 0)
	{
		uParam0->f_195 = func_409(uParam1, iParam2);
	}
	else
	{
		uParam0->f_195 = BUILTIN::ROUND((IntToFloat(uParam0->f_195) / 0.98f));
	}
	if (uParam0->f_195 > 10000)
	{
		uParam0->f_195 = 10000;
	}
	uParam0->f_178++;
	DEBUG::_0xA308F935BDECCEC0(136, 124, "FISHING: participant 0 iNumFishTired ", uParam0->f_178, " iFishTiredDuration ", uParam0->f_195);
	func_58(&(uParam0->f_182));
	func_58(&(uParam0->f_188));
	func_98(&(uParam0->f_185));
	func_58(&(uParam0->f_191));
}

int func_274(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_56(&(uParam0->f_191)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(func_57(&(uParam0->f_191))) / 2f));
	}
	iVar1 = (uParam0->f_195 + iVar0);
	if (iVar1 > 10000)
	{
		iVar1 = 10000;
	}
	if ((((func_56(&(uParam0->f_185)) && func_57(&(uParam0->f_185)) >= iVar1) && !func_280(uParam0, 0)) && uParam0->f_200 != 7) && func_288(uParam0))
	{
		DEBUG::_0x4DC69742196F818A(2184, 124, "FISHING: participant 0 tired timer has elapsed, iFishTiredDuration ", uParam0->f_195, " iFishTiredModifier ", iVar0, " iFishTiredTotal ", iVar1);
		return 1;
	}
	return 0;
}

int func_275(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(uParam1->f_195) / 2f));
	if ((((((func_56(&(uParam1->f_185)) && func_57(&(uParam1->f_185)) >= iVar0) && func_56(&(uParam0->f_12))) && func_57(&(uParam0->f_12)) >= iVar0) && !func_280(uParam1, 0)) && uParam1->f_200 != 7) && func_288(uParam1))
	{
		DEBUG::_0x4DC69742196F818A(8, 124, "FISHING: participant 0 tired timer elapsed early");
		return 1;
	}
	return 0;
}

char* func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "AI_FISH_ASSIGN";
		case 1:
			return "AI_FISH_CREATE";
		case 2:
			return "AI_FISH_GRAB_AMBIENT";
		case 3:
			return "AI_FISH_SETUP";
		case 4:
			return "AI_FISH_WANDERING";
		case 5:
			return "AI_FISH_NIBBLING";
		case 6:
			return "AI_FISH_STRUGGLING";
		case 7:
			return "AI_FISH_TIRED";
		case 8:
			return "AI_FISH_FLEEING";
		case 9:
			return "AI_FISH_CAUGHT";
		case 10:
			return "AI_FISH_DELETE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_277(var uParam0)
{
	if (!func_56(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.");
	}
	if (!func_144(uParam0))
	{
		uParam0->f_2 = (func_291() - uParam0->f_1);
		func_366(uParam0, 2);
	}
}

bool func_278()
{
	return true;
}

void func_279(var uParam0)
{
	if (!func_56(uParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.");
	}
	if (func_144(uParam0))
	{
		uParam0->f_1 = (func_291() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_367(uParam0, 2);
	}
}

bool func_280(var uParam0, int iParam1)
{
	if (func_326(2, 1))
	{
		if (iParam1 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reeled in FISHING_CODE_SIG_AUTOREELING_FISH");
		}
		return true;
	}
	else if (Global_1903123.f_5.f_2 <= 1f)
	{
		if (iParam1 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reeled in CurrentLineLength <= CONST_FISH_CAUGHT_ROPE_LENGTH");
		}
		return true;
	}
	else if (uParam0->f_200 == 8)
	{
		if (iParam1 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reeled in eTaskedFishDirection = FISHING_FISH_DIRECTION_ABOVE_WATER");
		}
		return true;
	}
	return false;
}

bool func_281(var uParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		iVar0 = func_410(joaat("UPGRADE_FSH_BAIT_BREAD"));
		if (iVar0 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				uParam0->f_8 = OBJECT::CREATE_OBJECT(iVar0, Global_34, false, false, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_8, false);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_8, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_8, true);
				OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_8, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 created fish target");
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_8);
}

bool func_282(var uParam0, var uParam1, int iParam2)
{
	float fVar0;

	if (uParam0->f_16 != -99999f)
	{
		fVar0 = func_292(Global_34, func_152(uParam1, iParam2));
		if ((fVar0 < 5f && uParam0->f_16 > 0.01f) || (fVar0 < 10f && uParam0->f_16 > 0.05f))
		{
			return true;
		}
	}
	return false;
}

void func_283(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;

	if (uParam0->f_200 != 5)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 15f, 0f) };
		vVar0.x = (vVar0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar0.f_1 = (vVar0.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar3 = { func_289(vVar0, 0) };
		if (!func_38(vVar3))
		{
			fVar6 = func_411(vVar3, 0);
			fVar7 = func_400(ENTITY::GET_ENTITY_MODEL(uParam1->f_123[iParam2]));
			if (fVar6 > fVar7 && !func_412(vVar3))
			{
				vVar8 = { vVar3 };
				vVar8.f_2 = (vVar8.z - 0.25f);
				func_413(uParam0, vVar8);
				uParam0->f_200 = 5;
				uParam0->f_223 = 1;
			}
			else
			{
				uParam0->f_200 = 6;
			}
		}
		else
		{
			uParam0->f_200 = 6;
		}
	}
}

bool func_284(var uParam0, var uParam1, int iParam2)
{
	if (!func_288(uParam0))
	{
		return false;
	}
	if (func_414(uParam0, uParam1, iParam2))
	{
		DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: participant 0 fish ", iParam2, " bForceUpdateFishTask is true");
		return true;
	}
	if (!func_166(uParam1->f_123[iParam2], 1227113341))
	{
		DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: participant 0 fish ", iParam2, " isn't tasked go to entity");
		return true;
	}
	if (func_415(uParam1->f_123[iParam2], uParam0->f_8, 0, 1) < 1f)
	{
		DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: participant 0 fish ", iParam2, " has reached target entity");
		return true;
	}
	if (uParam0->f_200 != 2 && func_415(PLAYER::PLAYER_PED_ID(), uParam1->f_123[iParam2], 0, 1) < 6f)
	{
		DEBUG::_0x4DC69742196F818A(392, 124, "FISHING: participant 0 fish ", iParam2, " is closer than ", 6f);
		return true;
	}
	if (func_56(&(uParam0->f_215)) && func_57(&(uParam0->f_215)) > 3000)
	{
		if ((uParam0->f_201 == 4 && IntToFloat(func_135()) < -25f) || (uParam0->f_201 == 3 && IntToFloat(func_135()) > 25f))
		{
			uParam0->f_218 = 1;
			DEBUG::_0x4DC69742196F818A(136, 124, "FISHING: participant 0 fish ", iParam2, " prevented reaching target entity");
			return true;
		}
	}
	return false;
}

void func_285(var uParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	fVar0 = func_416(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3], 1);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	fVar3 = func_400(ENTITY::GET_ENTITY_MODEL(uParam2->f_123[iParam3]));
	if (uParam1->f_218 == 1)
	{
		if (func_135() < 0)
		{
			iVar2 = 0;
			DEBUG::_0x4DC69742196F818A(8, 124, "FISHING: participant 0 making fish swim left");
		}
		else
		{
			iVar2 = 1;
			DEBUG::_0x4DC69742196F818A(8, 124, "FISHING: participant 0 making fish swim right");
		}
	}
	if (func_415(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3], 0, 1) < 6f)
	{
		uParam1->f_200 = 2;
	}
	else if (!func_86(uParam2, iParam3))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		uParam1->f_200 = 1;
	}
	else if (func_417(iVar2))
	{
		fVar1 = (fVar0 - IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		uParam1->f_200 = 4;
	}
	else if (func_418(iVar2))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		uParam1->f_200 = 3;
	}
	else
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		uParam1->f_200 = 1;
	}
	if (uParam1->f_200 == 2)
	{
		vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (6f + 1f), 0f) };
		vVar7 = { func_289(vVar4, 0) };
	}
	else
	{
		vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam4, fVar1, 0f, 2.5f, 0f) };
		vVar7 = { func_289(vVar4, 0) };
	}
	if (!func_38(vVar7))
	{
		fVar10 = func_411(vVar7, 0);
		if ((!func_419(uParam1, fVar10, fVar3) || !func_252(uParam0, vVar7)) || func_412(vVar7))
		{
			uParam1->f_200 = 6;
		}
		else
		{
			vVar11 = { vVar7 };
			vVar11.f_2 = (vVar11.z - 0.25f);
			func_413(uParam1, vVar11);
		}
	}
}

char* func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_FISH_DIRECTION_NONE";
		case 1:
			return "FISHING_FISH_DIRECTION_AWAY";
		case 2:
			return "FISHING_FISH_DIRECTION_CENTER";
		case 3:
			return "FISHING_FISH_DIRECTION_LEFT";
		case 4:
			return "FISHING_FISH_DIRECTION_RIGHT";
		case 5:
			return "FISHING_FISH_DIRECTION_GO_INTO_AREA";
		case 6:
			return "FISHING_FISH_DIRECTION_STATIONARY";
		case 7:
			return "FISHING_FISH_DIRECTION_ON_LAND";
		case 8:
			return "FISHING_FISH_DIRECTION_ABOVE_WATER";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_287(var uParam0, var uParam1, int iParam2)
{
	if (func_139())
	{
		uParam0->f_222 = 1f;
	}
	else if (func_420())
	{
		uParam0->f_222 = 1.5f;
	}
	else if (func_86(uParam1, iParam2))
	{
		uParam0->f_222 = 3f;
	}
	else
	{
		uParam0->f_222 = 1.5f;
	}
}

bool func_288(var uParam0)
{
	return (uParam0->f_16 != -99999f && uParam0->f_16 < 0.03f);
}

Vector3 func_289(vector3 vParam0, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;

	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	vVar1 = { 0f, 0f, 0f };
	bVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_149(vParam0, 1092616192 /* Float: 10f */), iVar0, &fVar4);
	bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_149(vParam0, 1092616192 /* Float: 10f */), &fVar5, false);
	if ((bVar6 == 1 || bVar7 == 0) || fVar4 > fVar5)
	{
		vVar1.x = vParam0.x;
		vVar1.f_1 = vParam0.y;
		vVar1.f_2 = fVar4;
	}
	return vVar1;
}

void func_290(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (!func_133(iParam3))
	{
		return;
	}
	iVar0 = func_421(uParam1);
	if (iVar0 > -1)
	{
		AUDIO::_0xDCF5BA95BBF0FABA(uParam1->f_70[iVar0], "VFX_SPLASH", func_148(), *uParam0, 0, 0, true);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_70[iVar0], "FishSize", uParam2->f_278[iParam3]);
	}
}

float func_291()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_292(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_293(var uParam0, var uParam1, var uParam2)
{
	if (func_61(uParam1, 1))
	{
		return;
	}
	func_115(uParam1);
	if (func_61(uParam1, 128))
	{
		func_422(uParam1, uParam2);
		func_116(uParam0, uParam1, uParam2, 0, 0);
	}
	func_49(uParam1, uParam2, -1);
	func_241(512);
	uParam1->f_1 = 0;
	func_319(uParam1, 1);
	Global_1903123.f_5.f_6 = 0;
	func_320(1);
	func_320(2);
	func_320(4);
	func_320(8);
	func_320(16);
	func_320(32);
	uParam1->f_167 = 0;
	uParam1->f_194 = 0;
	uParam1->f_195 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_200 = 0;
	uParam1->f_202 = 0f;
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_175 = 0;
	uParam1->f_176 = 0;
	uParam1->f_156 = 0;
	uParam1->f_3 = 0;
	uParam1->f_168 = 1f;
	func_58(&(uParam1->f_169));
	func_58(&(uParam1->f_203));
	func_58(&(uParam1->f_182));
	func_58(&(uParam1->f_185));
	func_58(&(uParam1->f_188));
	func_58(&(uParam1->f_191));
	func_58(&(uParam1->f_179));
	func_58(&(uParam1->f_160));
	func_119(uParam1, 0);
	func_46(&(uParam0->f_82), 0);
	func_305(uParam0, uParam0->f_4);
	func_53(uParam0);
	func_125(uParam0, 16);
	func_20(&(uParam0->f_19));
	func_58(&(uParam0->f_73));
	func_58(&(uParam0->f_76));
	uParam0->f_47 = func_215();
	uParam0->f_48 = func_356(uParam0->f_47);
	DEBUG::_0xF0783374333FD8CE(680, 124, "FISHING: eMapZone ", func_348(uParam0->f_47, 0), " eWaterType ", func_423(uParam0->f_48, 0));
	func_382(uParam0);
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_224();
}

bool func_294()
{
	return ((func_424() || func_425()) || func_426());
}

bool func_295()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_296(var uParam0, int iParam1, int iParam2)
{
	if (func_112((*uParam0)[iParam1]))
	{
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: help text ", func_427(iParam1, 0), " cleared");
		func_113();
		func_218(&(uParam0->f_442), 3f);
	}
	if (iParam2 == 1)
	{
		func_132(uParam0, iParam1);
	}
}

bool func_297()
{
	if (func_294())
	{
		return true;
	}
	return false;
}

int func_298(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	if (((((func_294() || func_428(&(uParam0->f_82), iParam1)) || func_112(uParam0->f_82[iParam1])) || func_429(&(uParam0->f_82), iParam1)) || ((iParam2 == 0 && func_56(&(uParam0->f_82.f_442))) && func_57(&(uParam0->f_82.f_442)) < 3000)) || (iParam2 == 0 && func_295()))
	{
		return 0;
	}
	func_113();
	if (iParam1 == 58)
	{
		uParam0->f_82[iParam1] = func_432(MISC::_CREATE_VAR_STRING(10, func_430(iParam1), func_431(Global_1903123.f_37)), sParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_82[iParam1] = func_432(func_430(iParam1), sParam3, 0, 0, 0, 1);
	}
	if (iParam4 == 1)
	{
		uParam0->f_82.f_74[iParam1] = 1;
	}
	DEBUG::_0xF0783374333FD8CE(34984, 124, "FISHING: help text ", func_427(iParam1, 0), " displayed, bAllowOverwriteHelp ", iParam2, " iDuration ", sParam3, " bSetDisplayed ", iParam4);
	func_98(&(uParam0->f_82.f_442));
	return 1;
}

bool func_299()
{
	if (func_311())
	{
		return false;
	}
	return true;
}

void func_300(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_52())
	{
		return;
	}
	if (iParam1 == 3)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
		{
			return;
		}
	}
	else if (func_248(uParam0->f_60[iParam1]))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_60[iParam1] = func_433("MGFSH_CTX_GRIP", joaat("INPUT_AIM"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_434(uParam0->f_60[iParam1], 1);
			iVar0 = func_394(uParam0->f_60[iParam1]);
			if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
			{
				HUD::_UIPROMPT_SET_TAG(Global_1952230[iVar0 /*23*/].f_3, "CTX_GRIP");
			}
			break;
		case 1:
			if (Global_1903123.f_5 == 6 || Global_1903123.f_5 == 10)
			{
				uParam0->f_60[iParam1] = func_433("MGFSH_CTX_RESET", joaat("INPUT_MINIGAME_FISHING_RESET_CAST"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				uParam0->f_60[iParam1] = func_433("MGFSH_CTX_CUT_LINE", joaat("INPUT_MINIGAME_FISHING_RESET_CAST"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			break;
		case 2:
			uParam0->f_60[iParam1] = func_433("MGFSH_CTX_HOOK", joaat("INPUT_MINIGAME_FISHING_HOOK"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_435(uParam0->f_60[iParam1], 0, 1, 1);
			func_434(uParam0->f_60[iParam1], 1);
			func_436(uParam0->f_60[iParam1], joaat("INPUT_ATTACK"));
			iVar0 = func_394(uParam0->f_60[iParam1]);
			if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
			{
				HUD::_UIPROMPT_SET_TAG(Global_1952230[iVar0 /*23*/].f_3, "CTX_HOOK");
			}
			break;
		case 3:
			uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
			uParam0->f_70 = HUD::_UIPROMPT_REGISTER_BEGIN();
			HUD::_0xF4A5C4509BF923B1(uParam0->f_70, 0);
			if (PAD::_IS_USING_KEYBOARD(0) || uParam0->f_528 == 1)
			{
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_70, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_IN"));
			}
			else
			{
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_70, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"));
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_70, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"));
				HUD::_UIPROMPT_SET_ROTATE_MODE(uParam0->f_70, 0f, 0);
			}
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_70, 10, true);
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_70, 11, true);
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_70, 18, true);
			if (iParam2 == 1)
			{
				HUD::_UIPROMPT_SET_TEXT(uParam0->f_70, "MGFSH_CTX_REEL_LURE");
			}
			else
			{
				HUD::_UIPROMPT_SET_TEXT(uParam0->f_70, "MGFSH_CTX_REEL_IN");
			}
			HUD::_UIPROMPT_SET_TAG(uParam0->f_70, "CTX_REEL");
			HUD::_UIPROMPT_REGISTER_END(uParam0->f_70);
			break;
		case 4:
			uParam0->f_60[iParam1] = func_433("MGFSH_CTX_CONTROL", joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_X"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_434(uParam0->f_60[iParam1], 1);
			break;
		case 5:
			uParam0->f_60[iParam1] = func_433("MGFSH_CTX_THROW_BACK", joaat("INPUT_MINIGAME_FISHING_RELEASE_FISH"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
		case 6:
			uParam0->f_60[iParam1] = func_433("MGFSH_CTX_KEEP", joaat("INPUT_MINIGAME_FISHING_KEEP_FISH"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			if (iParam3 == 0)
			{
				func_435(uParam0->f_60[iParam1], 0, 1, 1);
			}
			break;
		case 7:
			uParam0->f_60[iParam1] = func_433("MGFSH_CTX_CHOOSE", joaat("INPUT_OPEN_WHEEL_MENU"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_434(uParam0->f_60[iParam1], 1);
			func_436(uParam0->f_60[iParam1], joaat("INPUT_TOGGLE_HOLSTER"));
			func_436(uParam0->f_60[iParam1], joaat("INPUT_QUICK_EQUIP_ITEM"));
			break;
		case 8:
			uParam0->f_60[iParam1] = func_433(MISC::_CREATE_VAR_STRING(10, "MGFSH_CTX_EQUIP", func_229(func_228(uParam0->f_58), joaat("COLOR_PURE_WHITE"))), joaat("INPUT_MINIGAME_FISHING_QUICK_EQUIP"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
	}
	DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: context ", func_247(iParam1, 0), " created");
}

void func_301(var uParam0, var uParam1, var uParam2)
{
	if ((!func_226(uParam0->f_57) || Global_38.f_5807 == uParam0->f_57) || func_311())
	{
		func_140(uParam0, 8);
		return;
	}
	if (!func_226(Global_38.f_5807))
	{
		if (uParam0->f_58 == 0)
		{
			if (func_222(uParam0->f_57, 1))
			{
				uParam0->f_58 = uParam0->f_57;
				DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: participant 0 has eLastBaitEquipped ", func_225(uParam0->f_57, 0));
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_BREAD"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_BREAD");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_CORN"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CORN");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CHEESE");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_CRICKET"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_WORM"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_WORM");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_CRAYFISH"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CRAYFISH");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LURE_RIVER");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LURE_SWAMP");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP");
			}
			else if (func_222(joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG");
			}
			else
			{
				uParam0->f_58 = 0;
			}
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: participant 0 set equipped bait - eNextBaitToEquip ", func_225(uParam0->f_58, 0));
		}
		if (uParam0->f_58 == 0)
		{
			func_140(uParam0, 8);
		}
		else
		{
			func_300(uParam0, 8, 0, 1);
		}
	}
	if (func_437(uParam0->f_60[8], 1))
	{
		Global_1903123.f_36 = uParam0->f_58;
		DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: participant 0 set equipped bait - FISHING_PLAYER_CONTEXT_EQUIP_BAIT is pressed, eBaitSelectedInWheel ", func_225(Global_1903123.f_36, 0));
	}
}

void func_302(var uParam0, var uParam1)
{
	if (Global_1903123.f_36 != 0)
	{
		if (Global_1903123.f_36 != Global_38.f_5807 && func_226(Global_1903123.f_36))
		{
			func_227(uParam0, uParam1, Global_1903123.f_36, 1, 0);
		}
		Global_1903123.f_36 = 0;
	}
}

void func_303(var uParam0)
{
	if (!func_61(uParam0, 1024))
	{
		Global_1903123.f_5.f_1 = 30f;
		DEBUG::_0xF0783374333FD8CE(6552, 124, "FISHING: participant 0 MaxLineLength ", Global_1903123.f_5.f_1, " MinCastDistanceOverride ", Global_1903123.f_5.f_24, " MaxCastDistanceOverride ", Global_1903123.f_5.f_25);
		func_319(uParam0, 1024);
	}
}

void func_304(var uParam0)
{
	switch (Global_1903123.f_5.f_16)
	{
		case -1:
			func_296(&(uParam0->f_82), 15, 1);
			func_296(&(uParam0->f_82), 16, 1);
			func_296(&(uParam0->f_82), 17, 1);
			func_296(&(uParam0->f_82), 18, 1);
			func_296(&(uParam0->f_82), 19, 1);
			func_296(&(uParam0->f_82), 20, 1);
			func_296(&(uParam0->f_82), 21, 1);
			if (func_226(Global_38.f_5807))
			{
				func_298(uParam0, 25, 1, -1, 1);
			}
			break;
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_298(uParam0, 15, 1, -2, 0);
			}
			break;
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_298(uParam0, 16, 1, -2, 0);
			}
			break;
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_298(uParam0, 17, 1, -2, 0);
			}
			break;
		case 4:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_298(uParam0, 18, 1, -2, 0);
			}
			break;
		case 5:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_298(uParam0, 19, 1, -2, 0);
			}
			break;
		case 6:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_298(uParam0, 20, 1, -2, 0);
			}
			break;
		case 7:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_298(uParam0, 21, 1, -2, 0);
			}
			break;
	}
}

void func_305(var uParam0, char* sParam1)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, sParam1))
	{
		uParam0->f_3 = sParam1;
		AUDIO::_0xAC84686C06184B0D(uParam0->f_3, uParam0->f_1);
		DEBUG::_0xF0783374333FD8CE(680, 124, "FISHING: audio scene ", uParam0->f_1, " changed to ", uParam0->f_3);
	}
}

void func_306(var uParam0)
{
	if (func_34(uParam0, 32))
	{
		return;
	}
	if (func_243("BOB_FISHING_START", 0, 0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: music BOB_FISHING_START succeeded");
		func_35(uParam0, 32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: music BOB_FISHING_START failed");
	}
}

void func_307(var uParam0)
{
	if (!func_192(2))
	{
		if (func_326(16, 1) || func_438(uParam0))
		{
			func_98(&(uParam0->f_157));
			func_439(2);
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 done bobber plop into water");
		}
	}
}

void func_308(var uParam0, var uParam1)
{
	if (func_61(uParam1, 2))
	{
		return;
	}
	func_319(uParam1, 2);
	func_240(uParam0, uParam1);
	func_8(uParam1);
	DEBUG::_0xF0783374333FD8CE(440, 124, "FISHING: participant 0 fishing pos ", &(uParam1->f_4), " heading ", uParam1->f_7);
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: participant 0 eFishingMode ", func_379(uParam1->f_54, 0));
	func_119(uParam1, 1);
	uParam1->f_155++;
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 iCastsSinceLastHookedFish ", uParam1->f_155);
	func_53(uParam0);
	func_440(&(uParam0->f_82), 39, 30);
	if (ENTITY::DOES_ENTITY_EXIST(func_147()))
	{
		ENTITY::_0x978AA2323ED32209(func_147(), 0.1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_150()))
	{
		ENTITY::_0x978AA2323ED32209(func_150(), 0.1f);
	}
}

void func_309(var uParam0)
{
	if ((!func_61(uParam0, 512) && func_56(&(uParam0->f_169))) && func_441(&(uParam0->f_169)) < 6f)
	{
		uParam0->f_168 = 2f;
	}
	else
	{
		uParam0->f_168 = 1f;
	}
}

void func_310(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_192(2))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		switch (uParam1->f_93[iVar0])
		{
			case 0:
				if (func_442(uParam0, uParam1, iVar1))
				{
					func_245(uParam1, iVar1, 1);
					func_98(&(uParam1->f_109[iVar0 /*3*/]));
				}
				else
				{
					func_244(uParam1, iVar1);
				}
				break;
			case 1:
				if (func_443(uParam0, uParam1, iVar1))
				{
					func_244(uParam1, iVar1);
					func_245(uParam1, iVar1, 0);
					func_98(&(uParam1->f_109[iVar0 /*3*/]));
				}
				else
				{
					func_444(uParam0, uParam1, iVar1);
				}
				break;
			case 2:
				func_244(uParam1, iVar1);
				break;
		}
		iVar0++;
	}
}

bool func_311()
{
	if (func_52())
	{
		return true;
	}
	return false;
}

int func_312(var uParam0)
{
	if (!func_56(&(uParam0->f_73)) || func_171(&(uParam0->f_73)) < 3f)
	{
		return 0;
	}
	if (func_226(Global_38.f_5807))
	{
		if (func_232(Global_38.f_5807) || func_233(Global_38.f_5807))
		{
			return 1;
		}
	}
	return 0;
}

void func_313(var uParam0, int iParam1)
{
	if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		func_300(uParam0, 0, 0, 1);
		func_445(uParam0, 0, iParam1);
		if (!func_56(&(uParam0->f_73)))
		{
			func_98(&(uParam0->f_73));
		}
	}
	else
	{
		func_445(uParam0, 0, iParam1);
		func_140(uParam0, 0);
		func_58(&(uParam0->f_73));
	}
}

void func_314(var uParam0, var uParam1)
{
	if (uParam1->f_54 == 0 || uParam1->f_54 == 1)
	{
		func_300(uParam0, 2, 0, 1);
	}
	else
	{
		func_140(uParam0, 2);
	}
}

void func_315(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;

	if ((((((func_311() || (Global_1903123.f_5 == 6 && !func_192(2))) || (Global_1903123.f_5 == 6 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))) || (Global_1903123.f_5 == 10 && !func_192(2))) || (Global_1903123.f_5 == 10 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))) || PAD::_0x6CD79468A1E595C6(0)) || uParam0->f_528 != TASK::_0x5952DFA38FA529FE())
	{
		func_140(uParam0, 3);
		func_58(&(uParam0->f_76));
		uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
		return;
	}
	if (!HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
	{
		iVar0 = 0;
		if (Global_1903123.f_5 == 6)
		{
			if (func_232(Global_38.f_5807) || func_233(Global_38.f_5807))
			{
				iVar0 = 1;
			}
		}
		func_300(uParam0, 3, iVar0, 1);
	}
	if (!HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
	{
		return;
	}
	fVar1 = 0f;
	if (Global_1903123.f_5.f_4 != 0f)
	{
		func_445(uParam0, 3, 0);
		func_58(&(uParam0->f_76));
		fVar1 = Global_1903123.f_5.f_4;
	}
	else if (Global_1903123.f_5 == 6 || Global_1903123.f_5 == 10)
	{
		if (uParam1->f_54 != 0)
		{
			if (func_446(uParam0))
			{
				func_445(uParam0, 3, 1);
			}
			else
			{
				func_445(uParam0, 3, 0);
			}
		}
		else
		{
			func_445(uParam0, 3, 0);
		}
	}
	else
	{
		iVar2 = func_82(uParam1);
		if (func_133(iVar2) && !func_86(uParam2, iVar2))
		{
			if (func_447(uParam0))
			{
				func_445(uParam0, 3, 1);
			}
			else
			{
				func_445(uParam0, 3, 0);
			}
		}
		else
		{
			func_445(uParam0, 3, 0);
			func_58(&(uParam0->f_76));
		}
	}
	fVar1 = func_193(fVar1, -1f, 1f);
	if (fVar1 > 0f)
	{
		fVar3 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"));
		fVar4 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"));
		vVar5 = { func_448(fVar3, fVar4, 0f) };
		vVar8 = { 0f, -1f, 0f };
		fVar11 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar5.x, vVar5.y, vVar8.x, vVar8.y);
		fVar12 = (fVar11 / 360f);
		if (fVar3 < 0f)
		{
			fVar12 = (1f - fVar12);
		}
		fVar12 = func_193(fVar12, 0f, 1f);
		fVar12 = (fVar12 + 0.5f);
		if (fVar12 > 1f)
		{
			fVar12 = (fVar12 - 1f);
		}
		if (!PAD::_IS_USING_KEYBOARD(0))
		{
			HUD::_UIPROMPT_SET_SPINNER_POSITION(uParam0->f_70, fVar12);
		}
	}
}

void func_316(var uParam0, var uParam1)
{
	if ((Global_1903123.f_5 == 6 && !func_61(uParam1, 4096)) && func_226(Global_38.f_5807))
	{
		if (uParam1->f_54 == 1)
		{
			func_298(uParam0, 30, 1, func_449(uParam0), 1);
			if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
			{
				if (TASK::_0x5952DFA38FA529FE())
				{
					func_298(uParam0, 34, 0, -2, 1);
				}
				else
				{
					func_298(uParam0, 33, 0, -2, 1);
				}
			}
			else if (TASK::_0x5952DFA38FA529FE())
			{
				func_298(uParam0, 32, 0, -2, 1);
			}
			else
			{
				func_298(uParam0, 31, 0, -2, 1);
			}
			func_298(uParam0, 37, 0, -2, 1);
			func_298(uParam0, 39, 0, -2, 1);
		}
		else
		{
			func_298(uParam0, 30, 1, func_449(uParam0), 1);
			func_298(uParam0, 37, 0, -2, 1);
			func_298(uParam0, 39, 0, -2, 1);
		}
	}
}

void func_317(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_82(uParam1);
	if ((!func_133(iVar0) && func_226(Global_38.f_5807)) && !func_311())
	{
		func_450(uParam0, uParam1, uParam2);
	}
	iVar0 = func_82(uParam1);
	if (func_133(iVar0))
	{
		if (!func_451(uParam0, uParam1, uParam2))
		{
			func_452(uParam0, uParam1, uParam2);
		}
		else
		{
			func_241(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				if (func_56(&(uParam1->f_160)) && func_57(&(uParam1->f_160)) > uParam1->f_166)
				{
					func_242(uParam0, uParam1, uParam2, 0);
				}
				else
				{
					func_242(uParam0, uParam1, uParam2, 2);
				}
			}
			func_445(uParam0, 2, 0);
			func_453(uParam0, 2, 0);
			func_116(uParam0, uParam1, uParam2, 1, 0);
			uParam1->f_156 = 0;
			uParam1->f_55++;
			func_454(uParam0, uParam1, 1, 0);
		}
	}
}

bool func_318(var uParam0, var uParam1)
{
	if (func_61(uParam1, 4096))
	{
		return true;
	}
	else if (func_340(128))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reset cast FISHING_REQUEST_FAST_REEL_IN");
		return true;
	}
	else if (func_455(uParam0, uParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reset cast FISHING_HAS_PLAYER_PRESSED_CONTEXT_TO_RESET_CAST");
		return true;
	}
	else if (uParam1->f_54 == 0 && !func_226(Global_38.f_5807))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reset cast NOT FISHING_IS_ITEM_BAIT");
		return true;
	}
	else if (func_456())
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reset cast FISHING_HAS_PLAYER_CHANGED_BAIT_WHILE_WAITING_FOR_BITE");
		return true;
	}
	else if (func_192(8))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 reset cast FISHING_PARTICIPANT_UNSAVED_BIT_FORCE_REEL_IN");
		return true;
	}
	return false;
}

void func_319(var uParam0, int iParam1)
{
	if (!func_61(uParam0, iParam1))
	{
		func_128(&(uParam0->f_1), iParam1);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: participant 0 bit ", func_219(iParam1, 0), " set");
	}
}

void func_320(int iParam0)
{
	if (func_192(iParam0))
	{
		func_141(&(Global_1903123.f_2), iParam0);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: participant 0 bit ", func_457(iParam0, 0), " cleared");
	}
}

bool func_321(var uParam0, var uParam1, var uParam2)
{
	if (func_226(Global_38.f_5807))
	{
		if (func_437(uParam0->f_60[2], 1) || func_326(1, 1))
		{
			if (func_458(uParam0, uParam1, uParam2))
			{
				func_459(uParam0, uParam1, uParam2, func_82(uParam1));
				func_53(uParam0);
				func_305(uParam0, uParam0->f_7);
				return true;
			}
			else if (func_460(uParam1))
			{
				DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 missed bait nibble");
				func_116(uParam0, uParam1, uParam2, 1, 0);
				if (uParam1->f_163 == 1)
				{
					func_298(uParam0, 41, 1, -2, 1);
				}
				else
				{
					func_298(uParam0, 42, 1, -2, 1);
				}
				uParam1->f_55++;
				func_454(uParam0, uParam1, 1, 0);
				func_190(1, 1);
				return true;
			}
		}
	}
	return false;
}

void func_322(var uParam0)
{
	if (!func_61(uParam0, 256))
	{
		if (func_326(1, 1))
		{
			func_319(uParam0, 256);
			if (func_56(&(uParam0->f_169)) && func_171(&(uParam0->f_169)) < 10f)
			{
				func_319(uParam0, 512);
			}
			else
			{
				func_101(uParam0, 512);
			}
			func_98(&(uParam0->f_169));
		}
		else if ((func_61(uParam0, 512) && func_56(&(uParam0->f_169))) && func_171(&(uParam0->f_169)) > 10f)
		{
			func_101(uParam0, 512);
		}
	}
	else if (!func_326(1, 0))
	{
		func_101(uParam0, 256);
	}
}

bool func_323(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_82(uParam1);
	if (func_133(iVar0))
	{
		func_461(uParam0, uParam1, uParam2, iVar0);
		func_462(uParam0, uParam1, uParam2, iVar0);
		func_463(uParam1);
	}
	else
	{
		uParam1->f_174 = 0;
		uParam1->f_173 = 0;
		uParam1->f_172 = 0;
	}
	if (func_464(uParam0, uParam1, uParam2, iVar0))
	{
		return true;
	}
	return false;
}

void func_324(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (func_61(uParam1, 524288))
	{
		return;
	}
	func_319(uParam1, 524288);
	func_53(uParam0);
	WATER::_0xA33F5069B0CB89B8();
	func_465();
	func_267();
	uParam1->f_56++;
	iVar0 = 0;
	iVar1 = func_82(uParam1);
	if (!func_133(iVar1) || ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar1]))
	{
		iVar0 = 1;
	}
	DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: iFish ", iVar1, " FISHING_UPDATE_WHEN_BEGIN_LINE_SNAP bIsFishDead ", iVar0);
	func_454(uParam0, uParam1, 2, iVar0);
	func_116(uParam0, uParam1, uParam2, 0, 1);
}

void func_325(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_82(uParam1);
	if (func_133(iVar1))
	{
		if (func_86(uParam2, iVar1))
		{
			func_296(&(uParam0->f_82), 46, iVar0);
			func_296(&(uParam0->f_82), 47, iVar0);
			if (func_56(&(uParam1->f_182)) && func_57(&(uParam1->f_182)) < 4000)
			{
				if (uParam1->f_177 <= 1)
				{
					func_298(uParam0, 43, 1, 10000, 1);
				}
				else
				{
					func_298(uParam0, 45, 0, 10000, 1);
				}
			}
		}
		else
		{
			func_296(&(uParam0->f_82), 43, iVar0);
			func_296(&(uParam0->f_82), 45, iVar0);
			if (uParam1->f_178 > 0)
			{
				if (TASK::_0x5952DFA38FA529FE())
				{
					func_298(uParam0, 47, 1, 10000, 1);
				}
				else
				{
					func_298(uParam0, 46, 1, 10000, 1);
				}
				if (PAD::_IS_USING_KEYBOARD(0) && !TASK::_0x5952DFA38FA529FE())
				{
					func_298(uParam0, 72, 0, 10000, 1);
				}
			}
		}
	}
	else
	{
		func_296(&(uParam0->f_82), 43, iVar0);
		func_296(&(uParam0->f_82), 45, iVar0);
		func_296(&(uParam0->f_82), 46, iVar0);
		func_296(&(uParam0->f_82), 47, iVar0);
		func_296(&(uParam0->f_82), 72, iVar0);
	}
}

bool func_326(int iParam0, int iParam1)
{
	if (func_127(Global_1903123.f_5.f_5, iParam0))
	{
		if (iParam1 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: participant 0 bit ", func_466(iParam0, 0), " status ", func_127(Global_1903123.f_5.f_5, iParam0));
		}
		return true;
	}
	return false;
}

void func_327(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_61(uParam1, 131072))
	{
		return;
	}
	func_319(uParam1, 131072);
	func_467(uParam0, uParam1, uParam2);
	iVar0 = func_82(uParam1);
	if (func_133(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			PED::_0x8AC1D721B2097B6E(uParam2->f_123[iVar0], 75f, 75f);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iVar0, " set cull rage 75m");
		}
		func_21(uParam1, uParam2, iVar0, 0, 0);
	}
	if (!func_45(16))
	{
		func_298(uParam0, 55, 1, -2, 1);
	}
}

void func_328(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_61(uParam1, 8))
	{
		return;
	}
	func_319(uParam1, 8);
	iVar0 = func_82(uParam1);
	if (!func_133(iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 fish ", -1, " when starting to unhook");
	}
	else
	{
		Global_1903123.f_52 = Global_1903123.f_38;
		Global_1903123.f_53 = ENTITY::GET_ENTITY_MODEL(uParam2->f_123[iVar0]);
		DEBUG::_0xF0783374333FD8CE(170632, 124, "FISHING: participant 0 caught fish ", iVar0, " type ", func_134(Global_1903123.f_37, 0), " weight ", Global_1903123.f_38, " model ", func_256(Global_1903123.f_53, 0));
		func_154(uParam2, iVar0, 9);
		uParam0->f_59 = 1;
		iVar1 = func_468(uParam1);
		bVar2 = func_469(uParam2->f_247[iVar0], iVar1);
		if (func_470(bVar2) && uParam2->f_309[iVar0] != 4)
		{
			uParam0->f_59 = 0;
		}
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 bCanKeepFish ", uParam0->f_59);
	}
	func_53(uParam0);
	WATER::_0xA33F5069B0CB89B8();
	func_296(&(uParam0->f_82), 43, 0);
	func_296(&(uParam0->f_82), 45, 0);
	func_296(&(uParam0->f_82), 46, 0);
	func_296(&(uParam0->f_82), 47, 0);
	func_296(&(uParam0->f_82), 72, 0);
	func_296(&(uParam0->f_82), 49, 0);
	func_305(uParam0, uParam0->f_9);
	func_22(uParam1);
	func_471(uParam1);
	func_241(64);
	func_241(32);
	if (func_56(&(uParam1->f_219)))
	{
		if (!func_144(&(uParam1->f_219)))
		{
			func_277(&(uParam1->f_219));
		}
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 timerDragAcrossLand ", func_57(&(uParam1->f_219)));
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 timerDragAcrossLand 0");
	}
}

void func_329(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (func_61(uParam0, 65536))
	{
		return;
	}
	iVar0 = func_82(uParam0);
	Global_1903123.f_40++;
	Global_1903123.f_39++;
	DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: records - participant 0 iFishCaughtThisGameBoot ", Global_1903123.f_40, " iFishCaughtThisSession ", Global_1903123.f_39);
	if (func_472(Global_38.f_5807))
	{
		iVar1 = joaat("FOOD");
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - incremented statItem STAT_ITEM_FOOD");
	}
	else if (func_473(Global_38.f_5807))
	{
		iVar1 = joaat("LIVE_BAIT");
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - incremented statItem STAT_ITEM_LIVE_BAIT");
	}
	else if (func_232(Global_38.f_5807))
	{
		iVar1 = joaat("LURE");
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - incremented statItem STAT_ITEM_LURE");
	}
	else if (func_233(Global_38.f_5807))
	{
		iVar1 = joaat("LEGENDARY_LURE");
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - incremented statItem STAT_ITEM_LEGENDARY_LURE");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - didn't increment any bait statItem");
	}
	if (func_474(Global_1903123.f_37))
	{
		iVar2 = joaat("POTENT_PREDATOR_BAIT");
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - incremented statItem STAT_ITEM_POTENT_PREDATOR_BAIT");
	}
	else
	{
		iVar2 = joaat("POTENT_HERBIVORE_BAIT");
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - incremented statItem STAT_ITEM_POTENT_HERBIVORE_BAIT");
	}
	if (func_133(iVar0))
	{
		uVar3 = uParam1->f_123[iVar0];
		STATS::_0xDA26263C87CCE9C1(uVar3, Global_1903123.f_38, iVar1, iVar2);
		COMPENDIUM::COMPENDIUM_FISH_CAUGHT(uVar3, Global_38.f_5807);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: records - fish ", iVar0, " isn't valid so couldn't do STAT_ITEM_FISH_CAUGHT");
	}
	func_319(uParam0, 65536);
	func_439(64);
}

void func_330(var uParam0, var uParam1)
{
	if (func_61(uParam1, 262144))
	{
		return;
	}
	func_454(uParam0, uParam1, 3, 0);
	func_319(uParam1, 262144);
}

void func_331(var uParam0, int iParam1)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;

	bVar0 = HUD::IS_PAUSE_MENU_ACTIVE();
	if (uParam0->f_2 == 1)
	{
		if (bVar0 == 1)
		{
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: ui fish info - IS_PAUSE_MENU_ACTIVE returned true");
			func_20(uParam0);
		}
		return;
	}
	if (bVar0 == 1)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		if (!func_66(Global_1903123.f_37))
		{
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: ui fish info - eFishType ", func_134(Global_1903123.f_37, 0), " is not valid");
			func_20(uParam0);
			return;
		}
		if (iParam1 == 1)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(38, "MGFSH_CAUGHT_POI", Global_1903123.f_38, func_431(Global_1903123.f_37));
		}
		else
		{
			sVar1 = MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", Global_1903123.f_38, func_431(Global_1903123.f_37));
		}
		sVar2 = func_475(Global_1903123.f_37);
		uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("SHOP_BROWSING_MAIN_FLOW"));
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "InfoBox");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_4, "isVisible", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "itemLabel", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "itemDescription", sVar2);
		*uParam0 = 1;
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: ui fish info - requested");
		DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: ui fish info - sLabel ", sVar1);
		DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: ui fish info - sDescription ", sVar2);
	}
	if ((((*uParam0 == 1 && uParam0->f_1 == 0) && UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3)) && UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, -1645363952)) && UISTATEMACHINE::_UISTATEMACHINE_CREATE(-1295789154, uParam0->f_3))
	{
		uParam0->f_1 = 1;
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: ui fish info - state machine created");
		uParam0->f_2 = 1;
	}
}

void func_332(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_61(uParam1, 64) || func_61(uParam1, 32))
	{
		return;
	}
	func_319(uParam1, 64);
	if (func_192(4))
	{
		iVar0 = func_82(uParam1);
		if (func_133(iVar0))
		{
			uParam2->f_371[iVar0] = 1;
		}
	}
	func_476(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1903123.f_43++;
	Global_1903123.f_44++;
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - participant 0 iFishReleasedThisSession is ", Global_1903123.f_43);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - participant 0 iFishReleasedThisGameBoot is ", Global_1903123.f_44);
	func_115(uParam1);
	func_319(uParam1, 128);
	func_190(64, 1);
}

void func_333(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_61(uParam1, 64) || func_61(uParam1, 32))
	{
		return;
	}
	iVar0 = func_82(uParam1);
	if (!func_311())
	{
		func_300(uParam0, 5, 0, 1);
		if (func_133(iVar0))
		{
			if (func_477(uParam2, iVar0))
			{
				func_300(uParam0, 6, 0, uParam0->f_59);
				if (uParam0->f_59 == 0)
				{
					func_298(uParam0, 58, 1, -2, 1);
				}
			}
		}
		if (func_248(uParam0->f_60[5]) && func_437(uParam0->f_60[5], 1))
		{
			func_332(uParam0, uParam1, uParam2);
			func_140(uParam0, 5);
			func_140(uParam0, 6);
		}
		else if ((func_248(uParam0->f_60[6]) && func_478(uParam0->f_60[6], 0)) && func_437(uParam0->f_60[6], 1))
		{
			func_467(uParam0, uParam1, uParam2);
			func_140(uParam0, 5);
			func_140(uParam0, 6);
		}
		else if (func_192(32))
		{
			func_467(uParam0, uParam1, uParam2);
			func_140(uParam0, 5);
			func_140(uParam0, 6);
			func_320(32);
		}
	}
}

void func_334(var uParam0)
{
	if ((GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18) && func_56(&(uParam0->f_20))) && func_57(&(uParam0->f_20)) > 100)
	{
		func_98(&(uParam0->f_20));
		uParam0->f_19 = (uParam0->f_19 + 0.01f);
		if (uParam0->f_19 > 1f)
		{
			func_115(uParam0);
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_18, "fade", uParam0->f_19, false);
		}
	}
}

void func_335(var uParam0)
{
	if (func_61(uParam0, 16))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1947554776))
	{
		func_319(uParam0, 16);
		if (ENTITY::DOES_ENTITY_EXIST(func_147()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(func_147()))
			{
				ENTITY::DETACH_ENTITY(func_147(), true, true);
				PHYSICS::ACTIVATE_PHYSICS(func_147());
				DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 bobber detached");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 bobber wasn't attached");
			}
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 bobber doesn't exist");
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_150()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(func_150()))
			{
				ENTITY::DETACH_ENTITY(func_150(), true, true);
				PHYSICS::ACTIVATE_PHYSICS(func_150());
				DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hook detached");
			}
			else
			{
				DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hook wasn't attached");
			}
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hook doesn't exist");
		}
	}
}

void func_336(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_61(uParam1, 131072))
	{
		return;
	}
	if (func_326(64, 1))
	{
		func_319(uParam1, 131072);
		iVar0 = func_82(uParam1);
		if (func_133(iVar0))
		{
			func_21(uParam1, uParam2, iVar0, 1, 1);
		}
	}
	else if (func_326(256, 1))
	{
		func_327(uParam0, uParam1, uParam2);
	}
	else if (func_326(128, 1))
	{
		func_319(uParam1, 131072);
	}
}

void func_337()
{
	if (!func_192(4) && func_326(1024, 1))
	{
		func_439(4);
	}
}

void func_338(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_61(uParam1, 4))
	{
		return;
	}
	if (func_326(512, 1))
	{
		func_319(uParam1, 4);
		iVar0 = func_82(uParam1);
		if (func_133(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iVar0], true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iVar0], 17, false);
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 fish ", iVar0, " thrown into water and is alive");
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 fish ", iVar0, " thrown into water but isn't alive");
		}
		func_116(uParam0, uParam1, uParam2, 0, 0);
	}
}

void func_339(var uParam0)
{
	if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_CHEESE"))
	{
		func_298(uParam0, 59, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_BREAD"))
	{
		func_298(uParam0, 60, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_CORN"))
	{
		func_298(uParam0, 61, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_WORM"))
	{
		func_298(uParam0, 62, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_CRICKET"))
	{
		func_298(uParam0, 63, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_CRAYFISH"))
	{
		func_298(uParam0, 64, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE"))
	{
		func_298(uParam0, 65, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER"))
	{
		func_298(uParam0, 66, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"))
	{
		func_298(uParam0, 67, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"))
	{
		func_298(uParam0, 68, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"))
	{
		func_298(uParam0, 69, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"))
	{
		func_298(uParam0, 70, 1, -2, 1);
	}
	else if (Global_38.f_5807 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		func_298(uParam0, 71, 1, -2, 1);
	}
}

bool func_340(int iParam0)
{
	return func_127(Global_1903123.f_5.f_6, iParam0);
}

char* func_341(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "FISHING_REQUEST_MISSED_BITE";
		case 2:
			return "FISHING_REQUEST_LINE_SNAPPED";
		case 4:
			return "FISHING_REQUEST_FISH_HOOKED";
		case 8:
			return "FISHING_REQUEST_FISH_UNHOOKED";
		case 16:
			return "FISHING_REQUEST_LINE_RELEASED";
		case 32:
			return "FISHING_REQUEST_KEEP_FISH";
		case 64:
			return "FISHING_REQUEST_DISCARD_FISH";
		case 128:
			return "FISHING_REQUEST_FAST_REEL_IN";
		case 256:
			return "FISHING_REQUEST_SCRIPT_IN_CONTROL";
		case 512:
			return "FISHING_REQUEST_FISH_NIBBLING";
		case 1024:
			return "FISHING_REQUEST_BEGIN_CAST";
		case 2048:
			return "FISHING_REQUEST_WIND_IN";
		case 4096:
			return "FISHING_REQUEST_WIND_OUT";
		case 8192:
			return "FISHING_REQUEST_FLICK";
		case 16384:
			return "FISHING_REQUEST_FISH_STRUGGLING";
		case 32768:
			return "FISHING_REQUEST_AIMING_BREAKOUT";
		case 65536:
			return "FISHING_REQUEST_FORCE_BOAT_FISHING";
		case 131072:
			return "FISHING_REQUEST_DISABLE_TASK_LOOK_IK";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_342(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = func_391(iParam1);
	if (func_392(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		uParam0->f_31[iParam1] = FLOCK::_0xE93415B3307208E5(iVar0, uParam0->f_12, 0f, fParam2, 10000f, 0f, 0f, 0f, 1);
	}
}

void func_343(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_391(iParam1);
	if (func_392(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, uParam0->f_31[iParam1]);
	}
}

char* func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PRES_SET_MODE_SP";
		case 1:
			return "PRES_SET_MODE_MP";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_345(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PRES_SET_ACT_MOSEY";
		case 1:
			return "PRES_SET_ACT_RUSTLING";
		case 2:
			return "PRES_SET_ACT_HOUSE_ROB";
		case 3:
			return "PRES_SET_ACT_SHOP_ROB";
		case 4:
			return "PRES_SET_ACT_LOANSHARK";
		case 5:
			return "PRES_SET_ACT_HIDEOUT";
		case 6:
			return "PRES_SET_ACT_GFH";
		case 7:
			return "PRES_SET_ACT_FME";
		case 8:
			return "PRES_SET_ACT_POSSE_VS";
		case 9:
			return "PRES_SET_ACT_POKER";
		case 10:
			return "PRES_SET_ACT_TRAIN_ROB";
		case 11:
			return "PRES_SET_ACT_BLACKJACK";
		case 12:
			return "PRES_SET_ACT_DOMINOES";
		case 13:
			return "PRES_SET_ACT_FISHING";
		case 14:
			return "PRES_SET_ACT_FILLET";
		case 15:
			return "PRES_SET_ACT_AMBLE";
		case 16:
			return "PRES_SET_ACT_SAUNTER";
		case 17:
			return "PRES_SET_ACT_ROAM";
		case 18:
			return "PRES_SET_ACT_TARRY";
		case 19:
			return "PRES_SET_ACT_PERAMBULATE";
		case 20:
			return "PRES_SET_ACT_TEAMSTER";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PRES_SET_REG_WILDERNESS";
		case 1:
			return "PRES_SET_REG_BAY_CDW";
		case 2:
			return "PRES_SET_REG_BAY_LAG";
		case 3:
			return "PRES_SET_REG_BAY_LAK";
		case 4:
			return "PRES_SET_REG_BAY_NBX";
		case 5:
			return "PRES_SET_REG_BAY_ORP";
		case 6:
			return "PRES_SET_REG_BAY_SEK";
		case 7:
			return "PRES_SET_REG_BAY_SER";
		case 8:
			return "PRES_SET_REG_BAY_SHB";
		case 9:
			return "PRES_SET_REG_BAY_SIL";
		case 10:
			return "PRES_SET_REG_BGV_APP";
		case 11:
			return "PRES_SET_REG_BGV_BED";
		case 12:
			return "PRES_SET_REG_BGV_FTR";
		case 13:
			return "PRES_SET_REG_BGV_HDR";
		case 14:
			return "PRES_SET_REG_BGV_HUG";
		case 15:
			return "PRES_SET_REG_BGV_LMS";
		case 16:
			return "PRES_SET_REG_BGV_MIH";
		case 17:
			return "PRES_SET_REG_BGV_MOR";
		case 18:
			return "PRES_SET_REG_BGV_OWD";
		case 19:
			return "PRES_SET_REG_BGV_PAI";
		case 20:
			return "PRES_SET_REG_BGV_PRN";
		case 21:
			return "PRES_SET_REG_BGV_RGS";
		case 22:
			return "PRES_SET_REG_BGV_BSH";
		case 23:
			return "PRES_SET_REG_BGV_SHR";
		case 24:
			return "PRES_SET_REG_BGV_STC";
		case 25:
			return "PRES_SET_REG_BGV_STR";
		case 26:
			return "PRES_SET_REG_BGV_VLV";
		case 27:
			return "PRES_SET_REG_BGV_WAT";
		case 28:
			return "PRES_SET_REG_BGV_WMT";
		case 29:
			return "PRES_SET_REG_BLU_CAM";
		case 30:
			return "PRES_SET_REG_BLU_COP";
		case 31:
			return "PRES_SET_REG_BLU_SIS";
		case 32:
			return "PRES_SET_REG_CHO_AMD";
		case 33:
			return "PRES_SET_REG_CHO_RID";
		case 34:
			return "PRES_SET_REG_CHO_TWR";
		case 35:
			return "PRES_SET_REG_CML_BCB";
		case 36:
			return "PRES_SET_REG_CML_CWB";
		case 37:
			return "PRES_SET_REG_CML_CLI";
		case 38:
			return "PRES_SET_REG_CML_DES";
		case 39:
			return "PRES_SET_REG_CML_DNO";
		case 40:
			return "PRES_SET_REG_CML_DOV";
		case 41:
			return "PRES_SET_REG_CML_GUN";
		case 42:
			return "PRES_SET_REG_CML_OFW";
		case 43:
			return "PRES_SET_REG_CML_SIX";
		case 44:
			return "PRES_SET_REG_CML_RCK";
		case 45:
			return "PRES_SET_REG_CML_VET";
		case 46:
			return "PRES_SET_REG_GAP_TBL";
		case 47:
			return "PRES_SET_REG_GRT_BCH";
		case 48:
			return "PRES_SET_REG_GRT_BLK";
		case 49:
			return "PRES_SET_REG_GRT_QAC";
		case 50:
			return "PRES_SET_REG_GRZ_ADL";
		case 51:
			return "PRES_SET_REG_GRZ_CTR";
		case 52:
			return "PRES_SET_REG_GRZ_CHZ";
		case 53:
			return "PRES_SET_REG_GRZ_COH";
		case 54:
			return "PRES_SET_REG_GRZ_COL";
		case 55:
			return "PRES_SET_REG_GRZ_FRO";
		case 56:
			return "PRES_SET_REG_GRZ_GRP";
		case 57:
			return "PRES_SET_REG_GRZ_MIC";
		case 58:
			return "PRES_SET_REG_GRZ_MOM";
		case 59:
			return "PRES_SET_REG_GRZ_LNC";
		case 60:
			return "PRES_SET_REG_GRZ_LOF";
		case 61:
			return "PRES_SET_REG_GRZ_TMR";
		case 62:
			return "PRES_SET_REG_GRZ_WAL";
		case 63:
			return "PRES_SET_REG_GRZ_WAP";
		case 64:
			return "PRES_SET_REG_GUA_AGD";
		case 65:
			return "PRES_SET_REG_GUA_GUC";
		case 66:
			return "PRES_SET_REG_GUA_CIN";
		case 67:
			return "PRES_SET_REG_GUA_LAC";
		case 68:
			return "PRES_SET_REG_GUA_MAN";
		case 69:
			return "PRES_SET_REG_HEN_MFR";
		case 70:
			return "PRES_SET_REG_HEN_THL";
		case 71:
			return "PRES_SET_REG_HRT_ABM";
		case 72:
			return "PRES_SET_REG_HRT_ABE";
		case 73:
			return "PRES_SET_REG_HRT_CAR";
		case 74:
			return "PRES_SET_REG_HRT_CKT";
		case 75:
			return "PRES_SET_REG_HRT_CRF";
		case 76:
			return "PRES_SET_REG_HRT_CMF";
		case 77:
			return "PRES_SET_REG_HRT_DER";
		case 78:
			return "PRES_SET_REG_HRT_DOW";
		case 79:
			return "PRES_SET_REG_HRT_EMR";
		case 80:
			return "PRES_SET_REG_HRT_GRH";
		case 81:
			return "PRES_SET_REG_HRT_HSO";
		case 82:
			return "PRES_SET_REG_HRT_LAR";
		case 83:
			return "PRES_SET_REG_HRT_LUC";
		case 84:
			return "PRES_SET_REG_HRT_SWN";
		case 85:
			return "PRES_SET_REG_HRT_VAL";
		case 86:
			return "PRES_SET_REG_RIO_BEN";
		case 87:
			return "PRES_SET_REG_ROA_ANN";
		case 88:
			return "PRES_SET_REG_ROA_BVH";
		case 89:
			return "PRES_SET_REG_ROA_SBC";
		case 90:
			return "PRES_SET_REG_ROA_BBR";
		case 91:
			return "PRES_SET_REG_ROA_BWD";
		case 92:
			return "PRES_SET_REG_ROA_BUT";
		case 93:
			return "PRES_SET_REG_ROA_HPF";
		case 94:
			return "PRES_SET_REG_ROA_ANI";
		case 95:
			return "PRES_SET_REG_ROA_MAC";
		case 96:
			return "PRES_SET_REG_ROA_MOF";
		case 97:
			return "PRES_SET_REG_ROA_RKV";
		case 98:
			return "PRES_SET_REG_ROA_VHM";
		case 99:
			return "PRES_SET_REG_ROA_VHT";
		case 100:
			return "PRES_SET_REG_SCM_BRA";
		case 101:
			return "PRES_SET_REG_SCM_BUL";
		case 102:
			return "PRES_SET_REG_SCM_CAL";
		case 103:
			return "PRES_SET_REG_SCM_CAT";
		case 104:
			return "PRES_SET_REG_SCM_CLE";
		case 105:
			return "PRES_SET_REG_SCM_CLP";
		case 106:
			return "PRES_SET_REG_SCM_COS";
		case 107:
			return "PRES_SET_REG_SCM_DYF";
		case 108:
			return "PRES_SET_REG_SCM_ERF";
		case 109:
			return "PRES_SET_REG_SCM_HRS";
		case 110:
			return "PRES_SET_REG_SCM_LON";
		case 111:
			return "PRES_SET_REG_SCM_LOV";
		case 112:
			return "PRES_SET_REG_SCM_MBE";
		case 113:
			return "PRES_SET_REG_SCM_MER";
		case 114:
			return "PRES_SET_REG_SCM_RAP";
		case 115:
			return "PRES_SET_REG_SCM_RHO";
		case 116:
			return "PRES_SET_REG_SCM_SLP";
		case 117:
			return "PRES_SET_REG_SCM_UGR";
		case 118:
			return "PRES_SET_REG_TAL_AUB";
		case 119:
			return "PRES_SET_REG_TAL_COC";
		case 120:
			return "PRES_SET_REG_TAL_MTP";
		case 121:
			return "PRES_SET_REG_TAL_PUR";
		case 122:
			return "PRES_SET_REG_TAL_TAN";
		case 123:
			return "PRES_SET_REG_CUR";
		case 124:
			return "PRES_SET_REG_NOR";
		case 125:
			return "PRES_SET_REG_SOU";
		case 126:
			return "PRES_SET_REG_EAS";
		case 127:
			return "PRES_SET_REG_WES";
		case 128:
			return "PRES_SET_REG_LOC_BACCHUS_PLACE";
		case 129:
			return "PRES_SET_REG_LOC_BARDS_CROSSING";
		case 130:
			return "PRES_SET_REG_LOC_BENEDICT_PASS";
		case 131:
			return "PRES_SET_REG_LOC_BLACKFOREST";
		case 132:
			return "PRES_SET_REG_LOC_BRITTLEBUSH";
		case 133:
			return "PRES_SET_REG_LOC_BROKEN_TREE";
		case 134:
			return "PRES_SET_REG_LOC_CALIBAN_SEAT";
		case 135:
			return "PRES_SET_REG_LOC_CHADWICK_FARM";
		case 136:
			return "PRES_SET_REG_LOC_CITADEL_ROCK";
		case 137:
			return "PRES_SET_REG_LOC_CUEVA_SECA";
		case 138:
			return "PRES_SET_REG_LOC_DEL_LOBO_ROCK";
		case 139:
			return "PRES_SET_REG_LOC_DEWBERRY_CREEK";
		case 140:
			return "PRES_SET_REG_LOC_DIABLO_RIDGE";
		case 141:
			return "PRES_SET_REG_LOC_DONNER_FALLS";
		case 142:
			return "PRES_SET_REG_LOC_EL_NIDO";
		case 143:
			return "PRES_SET_REG_LOC_ERIS_FIELD";
		case 144:
			return "PRES_SET_REG_LOC_FACE_ROCK";
		case 145:
			return "PRES_SET_REG_LOC_FORT_BRENNAND";
		case 146:
			return "PRES_SET_REG_LOC_GRANITE_PASS";
		case 147:
			return "PRES_SET_REG_LOC_GREENHOLLOW";
		case 148:
			return "PRES_SET_REG_LOC_HANGING_ROCK";
		case 149:
			return "PRES_SET_REG_LOC_HORSESHOE_OVERLOOK";
		case 150:
			return "PRES_SET_REG_LOC_JORGE_GAP";
		case 151:
			return "PRES_SET_REG_LOC_LIMPANY";
		case 152:
			return "PRES_SET_REG_LOC_MANTECA_FALLS";
		case 153:
			return "PRES_SET_REG_LOC_MERCER_STATION";
		case 154:
			return "PRES_SET_REG_LOC_MESCALERO";
		case 155:
			return "PRES_SET_REG_LOC_MOUNT_HAGEN";
		case 156:
			return "PRES_SET_REG_LOC_MOUNT_SHANN";
		case 157:
			return "PRES_SET_REG_LOC_ODDFELLOW_REST";
		case 158:
			return "PRES_SET_REG_LOC_PIKES_BASIN";
		case 159:
			return "PRES_SET_REG_LOC_PLEASANCE_HOUSE";
		case 160:
			return "PRES_SET_REG_LOC_RATTLESNAKE_HOLLOW";
		case 161:
			return "PRES_SET_REG_LOC_REPENTENCE_ROCK";
		case 162:
			return "PRES_SET_REG_LOC_RIO_DEL_LOBO_HOUSE";
		case 163:
			return "PRES_SET_REG_LOC_SCRATCHING_POST";
		case 164:
			return "PRES_SET_REG_LOC_SILENT_STEAD";
		case 165:
			return "PRES_SET_REG_LOC_SOLOMONS_FOLLY";
		case 166:
			return "PRES_SET_REG_LOC_THREE_SISTERS";
		case 167:
			return "PRES_SET_REG_LOC_TWO_CROW";
		case 168:
			return "PRES_SET_REG_LOC_VENTERS_PLACE";
		case 169:
			return "PRES_SET_REG_LOC_NEKOTI_ROCK";
		case 170:
			return "PRES_SET_REG_DIST_BAYOU_NWA";
		case 171:
			return "PRES_SET_REG_DIST_BIG_VALLEY";
		case 172:
			return "PRES_SET_REG_DIST_BLUEGILL_MARSH";
		case 173:
			return "PRES_SET_REG_DIST_CUMBERLAND_FOREST";
		case 174:
			return "PRES_SET_REG_DIST_GREAT_PLAINS";
		case 175:
			return "PRES_SET_REG_DIST_GRIZZLIES";
		case 176:
			return "PRES_SET_REG_DIST_GUAMA";
		case 177:
			return "PRES_SET_REG_DIST_HEARTLAND";
		case 178:
			return "PRES_SET_REG_DIST_ROANOKE_RIDGE";
		case 179:
			return "PRES_SET_REG_DIST_SCARLETT_MEADOWS";
		case 180:
			return "PRES_SET_REG_DIST_TALL_TREES";
		case 181:
			return "PRES_SET_REG_DIST_GAPTOOTH_RIDGE";
		case 182:
			return "PRES_SET_REG_DIST_RIO_BRAVO";
		case 183:
			return "PRES_SET_REG_DIST_CHOLLA_SPRINGS";
		case 184:
			return "PRES_SET_REG_DIST_HENNIGANS_STEAD";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_347()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_479())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939313.f_75.f_55))
	{
		return false;
	}
	if (func_480(-1 ^ 9, 0, 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 11, "_CAN_DISPLAY_NAMED_LOCATION - on story mission on RCM");
		return false;
	}
	return true;
}

var func_348(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("RIOBRAVO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_RIOBRAVO"));
		case joaat("W_4_TWO_CROWS"):
			return UNK_0x6D61F5AE2F9BCC97(-179358715);
		case joaat("W_5_BROKEN_TREE"):
			return UNK_0x6D61F5AE2F9BCC97(173454341);
		case joaat("W_4_TRADING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(-1315953898);
		case joaat("GAPTOOTHRIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GAPTOOTHRIDGE"));
		case joaat("P_4_TUMBLEWEED"):
			return UNK_0x6D61F5AE2F9BCC97(-1749028203);
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(940483202);
		case joaat("P_4_TEMPEST_RIM"):
			return UNK_0x6D61F5AE2F9BCC97(422568552);
		case joaat("W_4_PLEASANCE_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(646966992);
		case joaat("W_4_CHEZ_PORTER"):
			return UNK_0x6D61F5AE2F9BCC97(1072481660);
		case joaat("P_4_CINCO_TORRES"):
			return UNK_0x6D61F5AE2F9BCC97(1413091285);
		case joaat("P_6_ANNESBURG"):
			return UNK_0x6D61F5AE2F9BCC97(-1607482084);
		case joaat("W_4_CAIRN_LODGE"):
			return UNK_0x6D61F5AE2F9BCC97(1952330244);
		case joaat("W_5_GRAND_KORRIGAN_DOCKED"):
			return UNK_0x6D61F5AE2F9BCC97(37543022);
		case joaat("P_4_TWIN_ROCKS"):
			return UNK_0x6D61F5AE2F9BCC97(-549380028);
		case joaat("LOWERWESTELIZABETH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LOWERWESTELIZABETH"));
		case joaat("BUTCHER"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BUTCHER"));
		case joaat("W_4_METEOR_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-528115102);
		case joaat("P_4_THREE_SISTERS"):
			return UNK_0x6D61F5AE2F9BCC97(-1021785744);
		case joaat("W_4_CARMODY_DELL"):
			return UNK_0x6D61F5AE2F9BCC97(1403325555);
		case joaat("W_4_TAXIDERMIST_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-855761387);
		case joaat("P_3_CATTAIL_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-1462484750);
		case joaat("CORNWALL"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CORNWALL"));
		case joaat("W_4_FACE_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1393421005);
		case joaat("WATER_O_CREAGHS_RUN"):
			return UNK_0x6D61F5AE2F9BCC97(-853858670);
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1125858184);
		case joaat("P_4_VALENTINE"):
			return UNK_0x6D61F5AE2F9BCC97(-1347878595);
		case joaat("P_3_WHINYARD_STRAIT"):
			return UNK_0x6D61F5AE2F9BCC97(-475599173);
		case joaat("W_4_HILL_HAVEN_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(1334904487);
		case joaat("W_4_DODDS_BLUFF"):
			return UNK_0x6D61F5AE2F9BCC97(-1248214233);
		case joaat("W_5_FORT_BRENNAND"):
			return UNK_0x6D61F5AE2F9BCC97(-2038790805);
		case joaat("BEECHERSHOPE"):
			return UNK_0x6D61F5AE2F9BCC97(1744495525);
		case joaat("W_4_PLANTERS_BAWN"):
			return UNK_0x6D61F5AE2F9BCC97(1012530858);
		case joaat("W_4_LAKE_DON_JULIO_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-1581529063);
		case joaat("P_4_BARDS_CROSSING"):
			return UNK_0x6D61F5AE2F9BCC97(2048166136);
		case joaat("P_3_BAHIA_DE_LA_PAZ"):
			return UNK_0x6D61F5AE2F9BCC97(189979751);
		case joaat("P_4_VAN_HORN_TRADING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(1472546624);
		case joaat("W_4_FAIRVALE_SHANTY"):
			return UNK_0x6D61F5AE2F9BCC97(-965822223);
		case joaat("W_4_MACLEANS_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-1613093278);
		case joaat("W_5_BLACK_BONE_FOREST"):
			return UNK_0x6D61F5AE2F9BCC97(1513299502);
		case joaat("P_4_MACFARLANES_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1684527690);
		case joaat("TUMBLEWEED"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_TUMBLEWEED"));
		case joaat("W_4_PAINTED_SKY"):
			return UNK_0x6D61F5AE2F9BCC97(-1036921351);
		case joaat("WATER_SAN_LUIS_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-1323627832);
		case joaat("W_4_COLTER"):
			return UNK_0x6D61F5AE2F9BCC97(1630350283);
		case joaat("W_4_GUTHRIE_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(1226978420);
		case joaat("P_4_OWANJILA_DAM"):
			return UNK_0x6D61F5AE2F9BCC97(-862480784);
		case joaat("W_4_TANNERS_REACH"):
			return UNK_0x6D61F5AE2F9BCC97(1357002938);
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1340584731);
		case joaat("WATER_LAKE_DON_JULIO"):
			return UNK_0x6D61F5AE2F9BCC97(-1677144987);
		case joaat("W_4_HORSESHOE_OVERLOOK"):
			return UNK_0x6D61F5AE2F9BCC97(1952858997);
		case joaat("WATER_FLAT_IRON_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(1889262518);
		case joaat("P_4_CITADEL_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(-475711096);
		case joaat("PERDIDO"):
			return UNK_0x6D61F5AE2F9BCC97(-1316684834);
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1079259464);
		case joaat("WATER_OWANJILA"):
			return UNK_0x6D61F5AE2F9BCC97(-224846611);
		case joaat("NEWHANOVER"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_NEWHANOVER"));
		case joaat("P_4_AGUASDULCES"):
			return UNK_0x6D61F5AE2F9BCC97(781301516);
		case joaat("WATER_STILLWATER_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(365031840);
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(172772656);
		case joaat("W_4_RIO_DEL_LOBO_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(-1766258140);
		case joaat("UPPERWESTELIZABETH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_UPPERWESTELIZABETH"));
		case joaat("P_5_EMERALD_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-1724726665);
		case joaat("WATER_KAMASSA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-770940977);
		case joaat("P_3_MONTOS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(-420849177);
		case joaat("P_4_BEARTOOTH_BECK"):
			return UNK_0x6D61F5AE2F9BCC97(-97221765);
		case joaat("AGUASDULCESVILLA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESVILLA"));
		case joaat("P_4_MANTECA_FALLS"):
			return UNK_0x6D61F5AE2F9BCC97(-271214399);
		case joaat("W_4_THE_OLD_BACCHUS_PLACE"):
			return UNK_0x6D61F5AE2F9BCC97(306374471);
		case joaat("WATER_BAHIA_DE_LA_PAZ"):
			return UNK_0x6D61F5AE2F9BCC97(2129285556);
		case joaat("W_4_CRAWDAD_WILLIES"):
			return UNK_0x6D61F5AE2F9BCC97(-1756728540);
		case joaat("W_4_WATSONS_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(456132689);
		case joaat("P_3_STILLWATER_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-261907161);
		case joaat("P_4_GRANITE_PASS"):
			return UNK_0x6D61F5AE2F9BCC97(28095331);
		case joaat("W_4_SWADBASS_POINT"):
			return UNK_0x6D61F5AE2F9BCC97(-999221054);
		case joaat("WATER_CAIRN_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(-2103722627);
		case joaat("W_4_ADLER_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1250508638);
		case joaat("P_4_FORT_MERCER"):
			return UNK_0x6D61F5AE2F9BCC97(-687274193);
		case joaat("P_3_LOWER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1707579097);
		case joaat("W_5_BLACK_BALSAM_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(1078378285);
		case joaat("P_4_COTORRA_SPRINGS"):
			return UNK_0x6D61F5AE2F9BCC97(998903663);
		case joaat("P_4_BLACKWATER"):
			return UNK_0x6D61F5AE2F9BCC97(-1952785372);
		case joaat("W_4_DORMIN_CREST"):
			return UNK_0x6D61F5AE2F9BCC97(582920664);
		case joaat("W_4_BRITTLEBRUSH_TRAWL"):
			return UNK_0x6D61F5AE2F9BCC97(615996265);
		case joaat("P_3_HEARTLAND_OIL_FIELDS"):
			return UNK_0x6D61F5AE2F9BCC97(916258405);
		case joaat("P_4_BACCHUS_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(51486504);
		case joaat("WALLACE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WALLACE"));
		case joaat("W_4_GRANGERS_HOGGERY"):
			return UNK_0x6D61F5AE2F9BCC97(-1718445658);
		case joaat("W_4_SILENT_STEAD"):
			return UNK_0x6D61F5AE2F9BCC97(-1758509878);
		case joaat("P_4_RATHSKELLER_FORK"):
			return UNK_0x6D61F5AE2F9BCC97(-1884588501);
		case joaat("SCARLETTMEADOWS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_SCARLETTMEADOWS"));
		case joaat("P_4_ARROYO_DE_LA_VIBORA"):
			return UNK_0x6D61F5AE2F9BCC97(1056406359);
		case joaat("P_4_FLATNECK_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-280952595);
		case joaat("W_5_LIMPANY"):
			return UNK_0x6D61F5AE2F9BCC97(-672173142);
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP"):
			return UNK_0x6D61F5AE2F9BCC97(-1961608557);
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return UNK_0x6D61F5AE2F9BCC97(-949235630);
		case joaat("W_5_CHADWICK_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(-1566065953);
		case joaat("WATER_MOONSTONE_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-165812981);
		case joaat("WATER_CATTIAL_POND"):
			return UNK_0x6D61F5AE2F9BCC97(597429142);
		case joaat("W_4_RIDGE_VIEW"):
			return UNK_0x6D61F5AE2F9BCC97(805571051);
		case joaat("W_4_ABANDONED_MISSION"):
			return UNK_0x6D61F5AE2F9BCC97(336092009);
		case joaat("W_4_UTOPIAN_COLONY_BUILDING"):
			return UNK_0x6D61F5AE2F9BCC97(1655373005);
		case joaat("STDENIS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_STDENIS"));
		case joaat("P_4_BENEDICT_POINT"):
			return UNK_0x6D61F5AE2F9BCC97(-1260592885);
		case joaat("ARMADILLO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ARMADILLO"));
		case joaat("W_4_FIRE_LOOKOUT_TOWER"):
			return UNK_0x6D61F5AE2F9BCC97(-227556962);
		case joaat("P_5_WAPITI_INDIAN_RESERVATION"):
			return UNK_0x6D61F5AE2F9BCC97(1837497074);
		case joaat("P_4_HAWKS_EYE_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-579853108);
		case joaat("W_4_DOWNES_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-692576309);
		case joaat("W_4_DOVERHILL"):
			return UNK_0x6D61F5AE2F9BCC97(-1912223548);
		case joaat("W_4_ODDFELLOWS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(-1856290073);
		case joaat("W_4_CASTORS_RIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(594544929);
		case joaat("W_4_LONE_MULE_STEAD"):
			return UNK_0x6D61F5AE2F9BCC97(-1756704810);
		case joaat("WATER_BAYOU_NWA"):
			return UNK_0x6D61F5AE2F9BCC97(809853811);
		case joaat("W_4_EWING_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(1428639182);
		case joaat("GUARMAD"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GUARMAD"));
		case joaat("W_4_SHEPHERDS_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-1425378678);
		case joaat("P_3_SEA_OF_CORONADO"):
			return UNK_0x6D61F5AE2F9BCC97(584006842);
		case joaat("P_4_CUMBERLAND_FALLS"):
			return UNK_0x6D61F5AE2F9BCC97(-1504491725);
		case joaat("EMERALD"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_EMERALD"));
		case joaat("W_4_THE_LOFT"):
			return UNK_0x6D61F5AE2F9BCC97(505912805);
		case joaat("W_4_BUTCHER_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-345989274);
		case joaat("P_4_ARMADILLO"):
			return UNK_0x6D61F5AE2F9BCC97(-329649359);
		case joaat("W_4_APPLESEED_TIMBER_COMPANY"):
			return UNK_0x6D61F5AE2F9BCC97(-853744875);
		case joaat("P_3_SOUTHFIELD_FLATS"):
			return UNK_0x6D61F5AE2F9BCC97(577419414);
		case joaat("P_5_STRAWBERRY"):
			return UNK_0x6D61F5AE2F9BCC97(-2000764299);
		case joaat("W_4_PIKES_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(101161189);
		case joaat("W_4_OLD_GREENBANK_MILL"):
			return UNK_0x6D61F5AE2F9BCC97(1428223926);
		case joaat("W_4_BEAR_CLAW"):
			return UNK_0x6D61F5AE2F9BCC97(-730996901);
		case joaat("WATER_WHINYARD_STRAIT"):
			return UNK_0x6D61F5AE2F9BCC97(52101277);
		case joaat("W_5_RADLEYS_PASTURE"):
			return UNK_0x6D61F5AE2F9BCC97(-721517362);
		case joaat("WATER_SEA_OF_CORONADO"):
			return UNK_0x6D61F5AE2F9BCC97(-451351429);
		case joaat("AMBARINO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AMBARINO"));
		case joaat("WATER_SPIDER_GORGE"):
			return UNK_0x6D61F5AE2F9BCC97(489087316);
		case joaat("W_4_OLD_TRAIL_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-1163536485);
		case joaat("P_3_DEWBERRY_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(1968506349);
		case joaat("WATER_AURORA_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(1635242381);
		case joaat("P_4_BRAITHWAITE_MANOR"):
			return UNK_0x6D61F5AE2F9BCC97(224532591);
		case joaat("P_4_MERCER_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-472607657);
		case joaat("W_4_WILLARDS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(849467908);
		case joaat("W_4_FIRWOOD_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-1922007300);
		case joaat("W_5_BEAVER_HOLLOW"):
			return UNK_0x6D61F5AE2F9BCC97(-413395734);
		case joaat("P_3_DAKOTA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-690937176);
		case joaat("W_4_PRONGHORN_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1463959216);
		case joaat("GRIZZLIESEAST"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GRIZZLIESEAST"));
		case joaat("CHOLLASPRINGS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CHOLLASPRINGS"));
		case joaat("WATER_ELYSIAN_POOL"):
			return UNK_0x6D61F5AE2F9BCC97(-1941950534);
		case joaat("W_4_HANGING_DOG_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(258519640);
		case joaat("P_4_FORT_WALLACE"):
			return UNK_0x6D61F5AE2F9BCC97(206800943);
		case joaat("P_4_BOLGER_GLADE"):
			return UNK_0x6D61F5AE2F9BCC97(-1500425599);
		case joaat("W_4_COOTS_CHAPEL"):
			return UNK_0x6D61F5AE2F9BCC97(1647986426);
		case joaat("WATER_ARROYO_DE_LA_VIBORA"):
			return UNK_0x6D61F5AE2F9BCC97(-1297598175);
		case joaat("W_4_GILL_LANDING"):
			return UNK_0x6D61F5AE2F9BCC97(992898011);
		case -1:
			return UNK_0x6D61F5AE2F9BCC97(-1558728209);
		case joaat("W_4_SCRATCHING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(589209742);
		case joaat("ANNESBURG"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ANNESBURG"));
		case joaat("P_4_SAINT_DENIS"):
			return UNK_0x6D61F5AE2F9BCC97(-237301247);
		case joaat("LEMOYNE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LEMOYNE"));
		case joaat("P_3_FLAT_IRON_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(-1288553638);
		case joaat("W_4_HAGEN_ORCHARDS"):
			return UNK_0x6D61F5AE2F9BCC97(839036238);
		case joaat("W_4_THE_HANGING_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1778253480);
		case joaat("W_4_GAPTOOTH_BREACH"):
			return UNK_0x6D61F5AE2F9BCC97(45480399);
		case joaat("W_4_VENTERS_PLACE"):
			return UNK_0x6D61F5AE2F9BCC97(-426370264);
		case joaat("HEARTLANDS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_HEARTLANDS"));
		case joaat("ROANOKE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_ROANOKE"));
		case joaat("W_4_BAYGALL_EDGE"):
			return UNK_0x6D61F5AE2F9BCC97(126421978);
		case joaat("AGUASDULCESRUINS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESRUINS"));
		case joaat("P_4_BACCHUS_BRIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(2025958694);
		case joaat("W_4_ABERDEEN_PIG_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(-1994823782);
		case joaat("W_4_LUCKYS_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(-487594955);
		case joaat("W_5_HURON_GLEN"):
			return UNK_0x6D61F5AE2F9BCC97(-466326051);
		case joaat("WATER_CALMUT_RAVINE"):
			return UNK_0x6D61F5AE2F9BCC97(-793511668);
		case joaat("W_5_ARGIL_RISE"):
			return UNK_0x6D61F5AE2F9BCC97(-387206358);
		case joaat("P_4_PLAINVIEW"):
			return UNK_0x6D61F5AE2F9BCC97(1694507244);
		case joaat("WATER_MATTLOCK_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-969377220);
		case joaat("W_4_COCHINAY"):
			return UNK_0x6D61F5AE2F9BCC97(220207608);
		case joaat("P_4_EMERALD_RANCH"):
			return UNK_0x6D61F5AE2F9BCC97(-1397796134);
		case joaat("W_4_OSMAN_GROVE"):
			return UNK_0x6D61F5AE2F9BCC97(1388488635);
		case joaat("WATER_DAKOTA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-1968376296);
		case joaat("W_4_TRAPPERS_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(453382979);
		case joaat("W_4_NEKOTI_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1748215998);
		case joaat("LAGRAS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_LAGRAS"));
		case joaat("W_4_EL_NIDO"):
			return UNK_0x6D61F5AE2F9BCC97(-998540134);
		case joaat("P_4_CALUMET_RAVINE"):
			return UNK_0x6D61F5AE2F9BCC97(450452876);
		case joaat("DIEZCORONAS"):
			return UNK_0x6D61F5AE2F9BCC97(-218414422);
		case joaat("STRAWBERRY"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_STRAWBERRY"));
		case joaat("VALENTINE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_VALENTINE"));
		case joaat("P_3_LAKAY"):
			return UNK_0x6D61F5AE2F9BCC97(-1198271207);
		case joaat("WATER_DEWBERRY_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-724951584);
		case joaat("GREATPLAINS"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GREATPLAINS"));
		case joaat("W_4_CORNWALL_KEROSENE_TAR"):
			return UNK_0x6D61F5AE2F9BCC97(-697301044);
		case joaat("W_4_COMPSONS_STEAD"):
			return UNK_0x6D61F5AE2F9BCC97(1246608437);
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1"):
			return UNK_0x6D61F5AE2F9BCC97(1079923585);
		case joaat("P_4_MOUNT_SHANN"):
			return UNK_0x6D61F5AE2F9BCC97(-1851739719);
		case joaat("W_4_HANIS_BETHEL"):
			return UNK_0x6D61F5AE2F9BCC97(-337974688);
		case joaat("P_4_CALIBANS_SEAT"):
			return UNK_0x6D61F5AE2F9BCC97(563595232);
		case joaat("P_4_MANZANITA_POST"):
			return UNK_0x6D61F5AE2F9BCC97(994223196);
		case joaat("W_4_CANEBREAK_MANOR"):
			return UNK_0x6D61F5AE2F9BCC97(-1046614768);
		case joaat("P_3_CAIRN_LAKE"):
			return UNK_0x6D61F5AE2F9BCC97(1914999778);
		case joaat("WATER_LAKE_ISABELLA"):
			return UNK_0x6D61F5AE2F9BCC97(-1781716009);
		case joaat("NUEVOPARAISO"):
			return UNK_0x6D61F5AE2F9BCC97(-1107977956);
		case joaat("WATER_BEARTOOTH_BECK"):
			return UNK_0x6D61F5AE2F9BCC97(-415784948);
		case joaat("W_5_VALLEY_VIEW"):
			return UNK_0x6D61F5AE2F9BCC97(807958313);
		case joaat("W_5_DEER_COTTAGE"):
			return UNK_0x6D61F5AE2F9BCC97(-872624188);
		case joaat("P_4_QUAKERS_COVE"):
			return UNK_0x6D61F5AE2F9BCC97(-1199568170);
		case joaat("P_3_OCREAGHS_RUN"):
			return UNK_0x6D61F5AE2F9BCC97(-1184868151);
		case joaat("W_4_RILEYS_CHARGE"):
			return UNK_0x6D61F5AE2F9BCC97(-941219432);
		case joaat("P_4_RIGGS_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(-923377861);
		case joaat("W_4_LONNIES_SHACK"):
			return UNK_0x6D61F5AE2F9BCC97(-555463868);
		case joaat("WATER_BARROW_LAGOON"):
			return UNK_0x6D61F5AE2F9BCC97(-1552073914);
		case joaat("W_4_MARTHAS_SWAIN"):
			return UNK_0x6D61F5AE2F9BCC97(-487377121);
		case joaat("BIGVALLEY"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BIGVALLEY"));
		case joaat("P_4_LAKE_ISABELLA"):
			return UNK_0x6D61F5AE2F9BCC97(-656868670);
		case joaat("W_4_SAWBONE_CLEARING"):
			return UNK_0x6D61F5AE2F9BCC97(1212791156);
		case joaat("W_4_WITCHES_CAULDRON"):
			return UNK_0x6D61F5AE2F9BCC97(-1604939054);
		case joaat("W_4_SHADY_BELLE"):
			return UNK_0x6D61F5AE2F9BCC97(1958759930);
		case joaat("W_4_SOLOMONS_FOLLY"):
			return UNK_0x6D61F5AE2F9BCC97(1772850469);
		case joaat("W_4_VAN_HORN_MANSION"):
			return UNK_0x6D61F5AE2F9BCC97(1765331379);
		case joaat("HENNIGANSSTEAD"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_HENNIGANSSTEAD"));
		case joaat("W_4_PLEASANCE"):
			return UNK_0x6D61F5AE2F9BCC97(198366362);
		case joaat("P_4_LAGRAS"):
			return UNK_0x6D61F5AE2F9BCC97(389964733);
		case joaat("P_4_THIEVES_LANDING"):
			return UNK_0x6D61F5AE2F9BCC97(1208901393);
		case joaat("W_4_SILTWATER_STRAND"):
			return UNK_0x6D61F5AE2F9BCC97(367027611);
		case joaat("W_4_VETERANS_HOMESTEAD"):
			return UNK_0x6D61F5AE2F9BCC97(-431376049);
		case joaat("P_4_TWIN_STACK_PASS"):
			return UNK_0x6D61F5AE2F9BCC97(1292124363);
		case joaat("W_4_MOSSY_FLATS"):
			return UNK_0x6D61F5AE2F9BCC97(-768608803);
		case joaat("W_4_EVELYN_MILLER_CAMP"):
			return UNK_0x6D61F5AE2F9BCC97(-725252354);
		case joaat("P_4_DIABLO_RIDGE"):
			return UNK_0x6D61F5AE2F9BCC97(34572935);
		case joaat("BLACKWATER"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BLACKWATER"));
		case joaat("W_4_MACOMBS_END"):
			return UNK_0x6D61F5AE2F9BCC97(-991017380);
		case joaat("W_5_LENORA_VIEW"):
			return UNK_0x6D61F5AE2F9BCC97(-356012590);
		case joaat("P_4_LA_CAPILLA"):
			return UNK_0x6D61F5AE2F9BCC97(-30512579);
		case joaat("W_4_COPPERHEAD_LANDING"):
			return UNK_0x6D61F5AE2F9BCC97(1847948966);
		case joaat("P_5_BRANDYWINE_DROP"):
			return UNK_0x6D61F5AE2F9BCC97(335100198);
		case joaat("W_4_STILT_SHACK"):
			return UNK_0x6D61F5AE2F9BCC97(800398523);
		case joaat("P_4_SISIKA_PENITENTIARY"):
			return UNK_0x6D61F5AE2F9BCC97(-340073099);
		case joaat("W_4_REPENTANCE"):
			return UNK_0x6D61F5AE2F9BCC97(1946536511);
		case joaat("W_4_ABANDONED_TRADING_POST"):
			return UNK_0x6D61F5AE2F9BCC97(-1903442384);
		case joaat("WATER_HOT_SPRINGS"):
			return UNK_0x6D61F5AE2F9BCC97(77878338);
		case joaat("P_3_AURORA_BASIN"):
			return UNK_0x6D61F5AE2F9BCC97(-1831852884);
		case joaat("P_3_LAKE_DON_JULIO"):
			return UNK_0x6D61F5AE2F9BCC97(1685262616);
		case joaat("P_3_ERIS_FIELD"):
			return UNK_0x6D61F5AE2F9BCC97(1797803116);
		case joaat("W_5_BERYLS_DREAM"):
			return UNK_0x6D61F5AE2F9BCC97(1541987280);
		case joaat("WATER_DEADBOOT_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-86903947);
		case joaat("WESTELIZABETH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WESTELIZABETH"));
		case joaat("P_4_WINDOW_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(1590139118);
		case joaat("W_4_CUEVA_SECA"):
			return UNK_0x6D61F5AE2F9BCC97(-1470814629);
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3"):
			return UNK_0x6D61F5AE2F9BCC97(-710410730);
		case joaat("MANICATO"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_MANICATO"));
		case joaat("P_4_RHODES"):
			return UNK_0x6D61F5AE2F9BCC97(-257468296);
		case joaat("W_4_OIL_DERRICK"):
			return UNK_0x6D61F5AE2F9BCC97(1972784215);
		case joaat("BLUEWATERMARSH"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BLUEWATERMARSH"));
		case joaat("P_3_UPPER_MONTANA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1878473840);
		case joaat("W_4_OLD_HARRY_FEN"):
			return UNK_0x6D61F5AE2F9BCC97(-34806732);
		case joaat("W_4_MERKINS_WALLER"):
			return UNK_0x6D61F5AE2F9BCC97(1599875934);
		case joaat("W_4_ROBARD_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(-2089181823);
		case joaat("P_3_DEADBOOT_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(-1300038760);
		case joaat("W_5_VETTERS_ECHO"):
			return UNK_0x6D61F5AE2F9BCC97(1147621771);
		case joaat("W_4_MANITO_GLADE"):
			return UNK_0x6D61F5AE2F9BCC97(-644526564);
		case joaat("W_4_FLATTENED_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(-889775621);
		case joaat("P_4_WALLACE_STATION"):
			return UNK_0x6D61F5AE2F9BCC97(1745620619);
		case joaat("PUNTAORGULLO"):
			return UNK_0x6D61F5AE2F9BCC97(1745042391);
		case joaat("MANZANITA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_MANZANITA"));
		case joaat("P_4_BENEDICT_PASS"):
			return UNK_0x6D61F5AE2F9BCC97(-1045615482);
		case joaat("W_4_RATTLESNAKE_HOLLOW"):
			return UNK_0x6D61F5AE2F9BCC97(648379522);
		case joaat("P_3_ROANOKE_VALLEY"):
			return UNK_0x6D61F5AE2F9BCC97(876016790);
		case joaat("P_3_BARROW_LAGOON"):
			return UNK_0x6D61F5AE2F9BCC97(-1548925919);
		case joaat("W_6_REED_COTTAGE"):
			return UNK_0x6D61F5AE2F9BCC97(1210215629);
		case joaat("W_4_MICAHS_HIDEOUT"):
			return UNK_0x6D61F5AE2F9BCC97(162507934);
		case joaat("W_4_RIDGEWOOD_FARM"):
			return UNK_0x6D61F5AE2F9BCC97(1974485917);
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2"):
			return UNK_0x6D61F5AE2F9BCC97(-1004905733);
		case joaat("P_3_LANNAHECHEE_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-1089943698);
		case joaat("P_3_MATTOCK_POND"):
			return UNK_0x6D61F5AE2F9BCC97(2130809939);
		case joaat("P_3_OWANJILA"):
			return UNK_0x6D61F5AE2F9BCC97(-102604905);
		case joaat("P_4_KAMASSA_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(-136736133);
		case joaat("W_4_OLD_TOMS_BLIND"):
			return UNK_0x6D61F5AE2F9BCC97(1152533298);
		case joaat("W_5_GRAND_KORRIGAN_SEA"):
			return UNK_0x6D61F5AE2F9BCC97(-1780933259);
		case joaat("W_4_CLAWSONS_REST"):
			return UNK_0x6D61F5AE2F9BCC97(-1495172807);
		case joaat("GRIZZLIESWEST"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GRIZZLIESWEST"));
		case joaat("AGUASDULCESFARM"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_AGUASDULCESFARM"));
		case joaat("WAPITI"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_WAPITI"));
		case joaat("P_3_MOONSTONE_POND"):
			return UNK_0x6D61F5AE2F9BCC97(-38863779);
		case joaat("W_4_BEECHERS_HOPE"):
			return UNK_0x6D61F5AE2F9BCC97(1144880185);
		case joaat("TALLTREES"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_TALLTREES"));
		case joaat("P_3_SPIDER_GORGE"):
			return UNK_0x6D61F5AE2F9BCC97(-1950089507);
		case joaat("W_4_CATFISH_JACKSONS"):
			return UNK_0x6D61F5AE2F9BCC97(1912441084);
		case joaat("W_4_WALLACE_OVERLOOK"):
			return UNK_0x6D61F5AE2F9BCC97(751555489);
		case joaat("W_4_ROADSIDE_BROTHEL"):
			return UNK_0x6D61F5AE2F9BCC97(-1251986070);
		case joaat("P_3_SAN_LUIS_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1254246155);
		case joaat("P_3_ELYSIAN_POOL"):
			return UNK_0x6D61F5AE2F9BCC97(-2106275894);
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return UNK_0x6D61F5AE2F9BCC97(913322904);
		case joaat("W_4_LARNED_SOD"):
			return UNK_0x6D61F5AE2F9BCC97(-1486600045);
		case joaat("P_4_RINGNECK_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(1966949384);
		case joaat("BRAITHWAITE"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BRAITHWAITE"));
		case joaat("P_3_MOUNT_HAGEN"):
			return UNK_0x6D61F5AE2F9BCC97(-68989566);
		case joaat("W_4_CLEMENS_POINT"):
			return UNK_0x6D61F5AE2F9BCC97(1940299500);
		case joaat("CUMBERLAND"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CUMBERLAND"));
		case joaat("P_4_RIO_DEL_LOBO_ROCK"):
			return UNK_0x6D61F5AE2F9BCC97(94694339);
		case joaat("W_4_PRINZ_CO"):
			return UNK_0x6D61F5AE2F9BCC97(-1548446900);
		case joaat("CALIGA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_CALIGA"));
		case joaat("W_4_STILLWATER_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(795840665);
		case joaat("W_4_HOUSEBOAT"):
			return UNK_0x6D61F5AE2F9BCC97(-293766051);
		case joaat("W_4_GREENHOLLOW"):
			return UNK_0x6D61F5AE2F9BCC97(-675788085);
		case joaat("GUARMA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_GUARMA"));
		case joaat("P_4_DONNER_FALLS"):
			return UNK_0x6D61F5AE2F9BCC97(1522447378);
		case joaat("W_6_RADLEYS_HOUSE"):
			return UNK_0x6D61F5AE2F9BCC97(1392576518);
		case joaat("W_4_CLINGMAN"):
			return UNK_0x6D61F5AE2F9BCC97(556441814);
		case joaat("WATER_RINGNECK_CREEK"):
			return UNK_0x6D61F5AE2F9BCC97(454066312);
		case joaat("P_3_LITTLE_CREEK_RIVER"):
			return UNK_0x6D61F5AE2F9BCC97(1603575037);
		case joaat("P_4_JORGES_GAP"):
			return UNK_0x6D61F5AE2F9BCC97(1747361576);
		case joaat("BAYOUNWA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_BAYOUNWA"));
		case joaat("NEWAUSTIN"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_NEWAUSTIN"));
		case joaat("RHODES"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_RHODES"));
		case joaat("W_4_SIX_POINT_CABIN"):
			return UNK_0x6D61F5AE2F9BCC97(100533548);
		case joaat("P_4_CALIGA_HALL"):
			return UNK_0x6D61F5AE2F9BCC97(1755139455);
		case joaat("W_5_FISHINGSPOT"):
			return UNK_0x6D61F5AE2F9BCC97(-813506563);
		case joaat("P_3_HEARTLAND_OVERFLOW"):
			return UNK_0x6D61F5AE2F9BCC97(607782628);
		case joaat("VANHORN"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_VANHORN"));
		case joaat("W_4_MILLESANI_CLAIM"):
			return UNK_0x6D61F5AE2F9BCC97(-1034387204);
		case joaat("SISKA"):
			return UNK_0x6D61F5AE2F9BCC97(joaat("MAP_ZONE_SISKA"));
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_349(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "LAW_BOUNTY_STATE_INVALID";
		case 0:
			return "LAW_BOUNTY_STATE_FIRST";
		case 1:
			return "LAW_BOUNTY_STATE_NEW_HANOVER";
		case 2:
			return "LAW_BOUNTY_STATE_LEMOYNE";
		case 3:
			return "LAW_BOUNTY_STATE_WEST_ELIZABETH";
		case 4:
			return "LAW_BOUNTY_STATE_NEW_AUSTIN";
		case 5:
			return "LAW_BOUNTY_STATE_GUARMA";
		case 6:
			return "LAW_BOUNTY_STATE_MAX";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_350(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893599.f_162)))
	{
		sVar0 = func_481(Global_1893599.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_483(func_482(Global_34));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_484(iParam0) || func_485(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (bParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_351(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_352(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_353(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_355(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_351(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 111, "GET_LAW_BOUNTY_STATE_BOUNTY - eLBS ", iParam0, " is invalid.");
		return -1;
	}
	if (Global_1572887.f_13 == -1)
	{
		return Global_38.f_194[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_486(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072032.f_21329[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return Global_1072032.f_21329[iParam0 /*12*/];
}

int func_356(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_358(int iParam0, int iParam1)
{
	if (!func_487(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_38.f_267[iParam0] && iParam1) != 0;
	}
	return (Global_1072032.f_21402[iParam0] && iParam1) != 0;
}

bool func_359(int iParam0, int iParam1)
{
	if (!func_351(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_38.f_194[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072032.f_21329[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_360(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		return (Global_8126[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1072032.f_19678[iParam0 /*11*/] && iParam1) != 0;
}

int func_361()
{
	return Global_1902870;
}

int func_362(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_363(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_364(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

var func_365(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = UIFEED::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

void func_366(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_367(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_368(bool bParam0)
{
	if (func_211() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_369(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_370(bool bParam0)
{
	vector3 vVar0;

	if (!func_369(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_371(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM - Invalid item!");
		return false;
	}
	if (Global_1940410.f_6)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 158, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player is dead");
		return false;
	}
	bVar0 = func_385(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_488("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: icollectsize ", iVar2);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_489(&Var4, iVar3, iVar1, iVar2))
			{
				DEBUG::_0x1B08D1EB9D8C4931(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: failed to get item data at index ", iVar3);
			}
			else if (!func_490(Var4.f_4))
			{
				DEBUG::_0x1B08D1EB9D8C4931(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: IS_WEAPON_VALID_AND_NOT_UNARMED ", func_225(Var4.f_4, 0));
			}
			else
			{
				DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: checking weapon ", func_225(Var4.f_4, 0), " that uses the ammo - ", func_225(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4), 0));
				if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
				{
					func_491(iVar1);
					DEBUG::_0x1B08D1EB9D8C4931(680, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: player has the weapon ", func_225(Var4.f_4, 0), " that uses the ammo - ", func_225(bParam0, 0));
					return true;
				}
			}
			iVar3++;
		}
		func_491(iVar1);
	}
	else
	{
		DEBUG::_0x83407B92D46F25C3(8, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: PLAYER_INVENTORY_CREATE_ITEM_COLLECTION failed");
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 150, "DOES_PLAYER_HAVE_WEAPON_THAT_REQUIRES_AMMO_ITEM: couldn't find a player weapon linked to ammo item - ", func_225(bParam0, 0));
	return false;
}

bool func_372(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_369(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_492(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_493(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_494(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] player is wearing an invalid item so none applied is true: ", func_225(bParam0, 0));
			return true;
		}
	}
	iVar1 = func_495(bParam0);
	iVar2 = func_494(&(Global_17414.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
		DEBUG::_0xF0783374333FD8CE(40, 139, "[BARBER_IS_PLAYER_WEARING_MAKEUP] saved overlay item was invalid for : ", func_225(bParam0, 0));
	}
	return bParam0 == Global_17414.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_373(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (bParam0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Invalid award requested, aborting");
		UNK_0x355E72323AEE83CC(205, 4);
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - CashInventory Session is NOT ready, aborting");
		UNK_0x355E72323AEE83CC(205, 8);
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(bParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Award ", func_496(bParam0, 0), "(", bParam0, ") has already reached maxclaims. Ignoring and returning TRUE.");
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		DEBUG::_0xF0783374333FD8CE(10920, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - bPosseSplits: ", MISC::_0xF216F74101968DB0(bParam7), " bGangActive: ", MISC::_0xF216F74101968DB0(bVar0), " so bPosseSplits is now: ", MISC::_0xF216F74101968DB0(bVar0));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_497(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Failed to request award ", func_496(bParam0, 0), "(", bParam0, ")");
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 84, "PERSONA_REQUEST_AWARD_MODIFIED_WITH_CONDS_WITH_RPC_GUID - Posse Split - Failed to request award ", func_496(bParam0, 0), "(", bParam0, ")");
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_498(uParam1, bParam0, Var3);
	return 1;
}

struct<5> func_374(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_499(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_370(bParam0);
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInventoryItem = ", func_225(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - eInvItemGroup = ", func_500(iVar5, 0));
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_375(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_501(bParam1) };
			if (bParam2 && func_502(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_503(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_503(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_504(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_505(bParam1) };
			switch (func_492(bParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_506(bParam0, -1823706425))
			{
				Var0 = { func_375(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_506(bParam0, -1483207246))
			{
				Var0 = { func_375(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_375(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_506(bParam0, -1653629781))
			{
				Var0 = { func_375(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_507(Var0, &Var28, bParam1, 0, -1))
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to fetch CHARACTER item info for ", UNK_0xD2E4270E5D98EEE4(&Var0));
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_506(bParam0, -1653629781))
			{
				Var0 = { func_375(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
					DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - Unable to find an approprite default slot for item ", func_225(bParam0, 0));
				}
			}
			break;
	}
	DEBUG::_0xA308F935BDECCEC0(10920, 157, "PLAYER_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO - ", func_225(bParam0, 0), ": ", func_508(Var0.f_4, 0), " - ", UNK_0xD2E4270E5D98EEE4(&Var0));
	return Var0;
}

struct<4> func_375(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PLAYER_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_225(bParam0, 0), " (", bParam0, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_368(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

void func_376(var uParam0, int iParam1)
{
	if ((func_472(iParam1) || func_473(iParam1)) || iParam1 == 1309979101)
	{
		uParam0->f_54 = 0;
	}
	else
	{
		uParam0->f_54 = 1;
	}
}

int func_377(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (uParam0->f_54 == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

char* func_378(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return "p_baitBread01x";
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return "p_baitCorn01x";
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return "p_baitCheese01x";
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return "p_baitWorm01x";
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return "p_baitCricket01x";
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return "P_CRAWDAD01X";
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return "p_finishedragonfly01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return "p_FinisdFishlure01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return "p_finishdcrawd01x";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return "P_FINISHEDRAGONFLYLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return "P_FINISDFISHLURELEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return "P_FINISHDCRAWDLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return "P_LGOC_SPINNER_V4";
		case 1309979101: /* GXTEntry: "No Bait" */
			return "P_FISHHOOK02X";
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_MODEL_STRING_FOR_ITEM unknown enum ", func_225(bParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_MODEL_STRING_FOR_ITEM: unknown enum");
	return "P_FISHHOOK02X";
}

char* func_379(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_MODE_BOBBER";
		case 1:
			return "FISHING_MODE_LURE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_380(var uParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;
	struct<5> Var11;
	struct<4> Var16;

	if (Global_38.f_5807 == 1309979101)
	{
		iVar0 = func_368(0);
		Var1 = { func_374(1309979101 /* GXTEntry: "No Bait" */, 0, 0) };
		Var6 = { func_375(1309979101 /* GXTEntry: "No Bait" */, Var1, Var1.f_4, 0) };
		if (INVENTORY::_0xF9933164965533B7(iVar0, &Var6))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar0, &Var6, 0);
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - unhide ", func_225(1309979101 /* GXTEntry: "No Bait" */, 0));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - already done unhide ", func_225(1309979101 /* GXTEntry: "No Bait" */, 0));
		}
	}
	else
	{
		iVar10 = func_368(0);
		Var11 = { func_374(1309979101 /* GXTEntry: "No Bait" */, 0, 0) };
		Var16 = { func_375(1309979101 /* GXTEntry: "No Bait" */, Var11, Var11.f_4, 0) };
		if (!INVENTORY::_0xF9933164965533B7(iVar10, &Var16))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar10, &Var16, 1);
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - hide ", func_225(1309979101 /* GXTEntry: "No Bait" */, 0));
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: inventory - already done hide ", func_225(1309979101 /* GXTEntry: "No Bait" */, 0));
		}
		uParam0->f_57 = Global_38.f_5807;
	}
}

void func_381()
{
	struct<2> Var0;
	bool bVar2;

	Var0 = 0;
	bVar2 = false;
	if (func_226(Global_38.f_5807) && func_222(Global_38.f_5807, 1))
	{
		bVar2 = Global_38.f_5807;
	}
	else if (Global_38.f_5807 == 1309979101)
	{
		bVar2 = 1309979101; /* GXTEntry: "No Bait" */
	}
	else if (func_222(joaat("UPGRADE_FSH_BAIT_BREAD"), 1))
	{
		bVar2 = joaat("UPGRADE_FSH_BAIT_BREAD");
	}
	else if (func_222(joaat("UPGRADE_FSH_BAIT_CORN"), 1))
	{
		bVar2 = joaat("UPGRADE_FSH_BAIT_CORN");
	}
	else if (func_222(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1))
	{
		bVar2 = joaat("UPGRADE_FSH_BAIT_CHEESE");
	}
	if (bVar2 != 0)
	{
		Var0 = 2;
		switch (bVar2)
		{
			case joaat("UPGRADE_FSH_BAIT_BREAD"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_BREAD");
				break;
			case joaat("UPGRADE_FSH_BAIT_CORN"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CORN");
				break;
			case joaat("UPGRADE_FSH_BAIT_CHEESE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CHEESE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CRICKET");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_WORM");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CRAYFISH");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_RIVER");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_SWAMP");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP");
				break;
			case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG");
				break;
			case 1309979101: /* GXTEntry: "No Bait" */
				Var0.f_1 = 1309979101; /* GXTEntry: "No Bait" */
				break;
		}
		HUD::_0x8A59D44189AF2BC5(&Var0, 1856029758);
		DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: participant 0 set hud quick select item ", func_225(bVar2, 0));
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 didn't set hud quick select item");
	}
}

void func_382(var uParam0)
{
	uParam0->f_49 = 0;
	if (uParam0->f_48 == -1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 eWaterType is not valid so cannot check bEquippedBaitSuitableForWaterType");
	}
	else if (uParam0->f_48 == 0)
	{
		uParam0->f_49 = func_509(Global_38.f_5807);
	}
	else if (uParam0->f_48 == 1)
	{
		uParam0->f_49 = func_510(Global_38.f_5807);
	}
	else if (uParam0->f_48 == 2)
	{
		uParam0->f_49 = func_511(Global_38.f_5807);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 eWaterType is unknown so cannot check bEquippedBaitSuitableForWaterType");
	}
	DEBUG::_0xF0783374333FD8CE(2728, 124, "FISHING: participant 0 eWaterType ", func_423(uParam0->f_48, 0), " eCurrentBaitEquipped ", func_225(Global_38.f_5807, 0), " bEquippedBaitSuitableForWaterType ", uParam0->f_49);
}

bool func_383(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	iVar0 = func_512(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_384(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_385(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0x4423BBAB7EB2B96B(40, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - Invalid item: ", func_225(bParam0, 0));
		return false;
	}
	iVar0 = func_370(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_513(bParam0, 1399091007))
	{
		func_514(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_AMMO_TYPE_FROM_SATCHEL_ITEM - ", func_225(bParam0, 0), " does not map to a valid ammo item");
	return false;
}

char[] func_386(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	char[] cVar15[8];

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PLAYER_WEAPON_ITEM_COUNT - Attempting to check for an invalid weapon!");
		return 0;
	}
	Var0 = { func_515(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_516(&Var0, func_501(0));
	}
	if (!func_517(&Var0, &iVar14, &cVar15, 0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found 0 of item ", func_225(bParam0, 0));
		return 0;
	}
	func_491(iVar14);
	DEBUG::_0x1B08D1EB9D8C4931(10376, 157, "GET_PLAYER_WEAPON_ITEM_COUNT bCarriedOnly = ", bParam1, " - Found ", cVar15, " of item ", func_225(bParam0, 0));
	return cVar15;
}

int func_387(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_519(func_518(bParam0), 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 157, "[GET_INVENTORY_ITEM_PATHSET] Discovered bundle item. Aborting, as bundle items do not have catalog item ids");
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

struct<4> func_388(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_374(bParam0, bParam1, 0) };
	return func_375(bParam0, Var0, Var0.f_4, bParam1);
}

char* func_389(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PRES_SET_AMB_CAMP";
		case 1:
			return "PRES_SET_AMB_SHOP";
		case 2:
			return "PRES_SET_AMB_PROPERTY";
		case 3:
			return "PRES_SET_AMB_WANTED";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_390(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "NET_MUSIC_PRIORITY_INVALID";
		case 0:
			return "NET_MUSIC_PRIORITY_AMBIENT";
		case 1:
			return "NET_MUSIC_PRIORITY_MISSION";
		case 2:
			return "NET_MUSIC_PRIORITY_MATCHMAKING";
		case 3:
			return "NET_MUSIC_PRIORITY_UGC";
		case 4:
			return "NET_MUSIC_PRIORITY_OVERRIDE_ALL";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SPECIES_FISH_BLUEGILL");
		case 1:
			return joaat("SPECIES_FISH_BULLHEADCATFISH");
		case 2:
			return joaat("SPECIES_FISH_CHAINPICKEREL");
		case 3:
			return joaat("SPECIES_FISH_CHANNELCATFISH");
		case 4:
			return joaat("SPECIES_FISH_LAKESTURGEON");
		case 5:
			return joaat("SPECIES_FISH_LARGEMOUTHBASS");
		case 6:
			return joaat("SPECIES_FISH_LONGNOSEGAR");
		case 7:
			return joaat("SPECIES_FISH_MUSKIE");
		case 8:
			return joaat("SPECIES_FISH_NORTHERNPIKE");
		case 9:
			return joaat("SPECIES_FISH_PERCH");
		case 10:
			return joaat("SPECIES_FISH_REDFINPICKEREL");
		case 11:
			return joaat("SPECIES_FISH_ROCKBASS");
		case 12:
			return joaat("SPECIES_FISH_SMALLMOUTHBASS");
		case 13:
			return joaat("SPECIES_FISH_SALMONSOCKEYE");
		case 14:
			return joaat("SPECIES_FISH_STEELHEADTROUT");
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_SPECIES_FROM_FISH_TYPE unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_SPECIES_FROM_FISH_TYPE: unknown enum");
	return 0;
}

bool func_392(int iParam0)
{
	if ((((((((((((((iParam0 == joaat("SPECIES_FISH_BLUEGILL") || iParam0 == joaat("SPECIES_FISH_BULLHEADCATFISH")) || iParam0 == joaat("SPECIES_FISH_CHAINPICKEREL")) || iParam0 == joaat("SPECIES_FISH_CHANNELCATFISH")) || iParam0 == joaat("SPECIES_FISH_LAKESTURGEON")) || iParam0 == joaat("SPECIES_FISH_LARGEMOUTHBASS")) || iParam0 == joaat("SPECIES_FISH_LONGNOSEGAR")) || iParam0 == joaat("SPECIES_FISH_MUSKIE")) || iParam0 == joaat("SPECIES_FISH_NORTHERNPIKE")) || iParam0 == joaat("SPECIES_FISH_PERCH")) || iParam0 == joaat("SPECIES_FISH_REDFINPICKEREL")) || iParam0 == joaat("SPECIES_FISH_ROCKBASS")) || iParam0 == joaat("SPECIES_FISH_SALMONSOCKEYE")) || iParam0 == joaat("SPECIES_FISH_SMALLMOUTHBASS")) || iParam0 == joaat("SPECIES_FISH_STEELHEADTROUT"))
	{
		return true;
	}
	return false;
}

void func_393(int iParam0, float fParam1)
{
	char* sVar0;

	sVar0 = func_214(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DECORATOR::DECOR_SET_FLOAT(PLAYER::PLAYER_PED_ID(), sVar0, fParam1);
	}
}

int func_394(int iParam0)
{
	return iParam0;
}

void func_395(int iParam0)
{
	DEBUG::_0xA308F935BDECCEC0(8, 145, "RELEASE_USE_CONTEXT_AT_INDEX ", iParam0);
	if (!func_520(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1952230[iParam0 /*23*/].f_3);
	}
	Global_1952230[iParam0 /*23*/].f_4 = 0;
	Global_1952230[iParam0 /*23*/] = 1;
	Global_1952230[iParam0 /*23*/].f_16 = 0;
	Global_1952230[iParam0 /*23*/].f_1 = 0;
	Global_1952230[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_9 = 0f;
	Global_1952230[iParam0 /*23*/].f_10 = 0;
	Global_1952230[iParam0 /*23*/].f_11 = 0;
	Global_1952230[iParam0 /*23*/].f_2 = 1;
	Global_1952230[iParam0 /*23*/].f_15 = -1f;
}

int func_396()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 0;
	bVar1 = POPULATION::_0x595478B3BBC3076D();
	iVar2 = func_262(bVar1);
	if (iVar2 != 15)
	{
		if ((((iVar2 == 3 || iVar2 == 4) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 124, "FISHING: FISHING_GET_RANDOM_FISH_TYPE_FOR_LOCATION not allowing ", func_134(iVar2, 0), " to be created");
			return 15;
		}
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_397(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			return joaat("A_C_FISHBLUEGIL_01_SM");
		case 1:
			return joaat("A_C_FISHBULLHEADCAT_01_SM");
		case 2:
			return joaat("A_C_FISHCHAINPICKEREL_01_SM");
		case 3:
			return joaat("A_C_FISHCHANNELCATFISH_01_LG");
		case 4:
			return joaat("A_C_FISHLAKESTURGEON_01_LG");
		case 5:
			return joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
		case 6:
			return joaat("A_C_FISHLONGNOSEGAR_01_LG");
		case 7:
			return joaat("A_C_FISHMUSKIE_01_LG");
		case 8:
			return joaat("A_C_FISHNORTHERNPIKE_01_LG");
		case 9:
			return joaat("A_C_FISHPERCH_01_SM");
		case 10:
			return joaat("A_C_FISHREDFINPICKEREL_01_SM");
		case 11:
			return joaat("A_C_FISHROCKBASS_01_SM");
		case 12:
			return joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
		case 13:
			return joaat("A_C_FISHSALMONSOCKEYE_01_MS");
		case 14:
			return joaat("A_C_FISHRAINBOWTROUT_01_MS");
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_MODEL_FOR_FISH_TYPE unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_MODEL_FOR_FISH_TYPE: unknown enum");
	return iVar0;
}

int func_398(var uParam0, vector3 vParam1)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), vParam1) };
	if ((vVar0.x < uParam0->f_27[1 /*3*/] || vVar0.x > uParam0->f_27[4 /*3*/]) || vVar0.y > uParam0->f_27[2 /*3*/].f_1)
	{
		return 0;
	}
	return 1;
}

int func_399(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	vVar3 = { func_448(vParam0 - Global_34) };
	fVar6 = func_521(vVar0, vVar3);
	fVar7 = BUILTIN::COS(45f);
	if (fVar6 < fVar7)
	{
		return 0;
	}
	return 1;
}

float func_400(int iParam0)
{
	return FLOCK::_0x53187E563F938E76(iParam0);
}

void func_401(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			DEBUG::_0xA308F935BDECCEC0(40, 0, "CREATE_PED_WITH_DEFAULTS: applying random outfit to ped - ", UNK_0xE02C950E4C991632(iParam0));
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_522(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_523(iParam0, 0);
			bVar0 = true;
		}
		func_524(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_402(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_525(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 0.25f);
		if (func_526())
		{
			fVar0 = (fVar0 + fVar1);
		}
	}
	return fVar0;
}

float func_403(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_527(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 0.25f);
		if (!func_526())
		{
			fVar0 = (fVar0 - fVar1);
		}
	}
	return fVar0;
}

float func_404(float fParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = BUILTIN::FLOOR(fParam0);
	fVar1 = (fParam0 - IntToFloat(iVar0));
	if (fVar1 < 0.0625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0f);
	}
	else if (fVar1 < 0.125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.0625f);
	}
	else if (fVar1 < 0.1875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.125f);
	}
	else if (fVar1 < 0.25f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.1875f);
	}
	else if (fVar1 < 0.3125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.25f);
	}
	else if (fVar1 < 0.375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.3125f);
	}
	else if (fVar1 < 0.4375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.375f);
	}
	else if (fVar1 < 0.5f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.4375f);
	}
	else if (fVar1 < 0.5625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5f);
	}
	else if (fVar1 < 0.625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5625f);
	}
	else if (fVar1 < 0.6875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.625f);
	}
	else if (fVar1 < 0.75f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.6875f);
	}
	else if (fVar1 < 0.8125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.75f);
	}
	else if (fVar1 < 0.875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.8125f);
	}
	else if (fVar1 < 0.9375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.875f);
	}
	else
	{
		fVar2 = (IntToFloat(iVar0) + 0.9375f);
	}
	DEBUG::_0x4DC69742196F818A(104600, 124, "FISHING: nearest ounce, fFishWeight ", fParam0, " iWithoutDecimals ", iVar0, " fDecimals ", fVar1, " fFishWeightToNearestOunce ", fVar2);
	return fVar2;
}

void func_405(int iParam0, bool bParam1)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(40, 147, "SET_ENTITY_CAN_BE_QUICK_AND_LONG_LOOTED - bLootable = ", MISC::_0xF216F74101968DB0(bParam1));
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 147, "SET_ENTITY_CAN_BE_QUICK_AND_LONG_LOOTED - Entity does not exist.");
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 147, "SET_ENTITY_CAN_BE_QUICK_AND_LONG_LOOTED - Entity is not a ped.");
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, bParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, bParam1);
}

int func_406(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(6000) * fVar0));
	iVar1 += 4000;
	DEBUG::_0xA308F935BDECCEC0(624776, 124, "FISHING: fish ", iParam1, " smallest ", 4000, " largest ", 10000, " fWeightPercentage ", fVar0, " iFirstStruggleDuration ", iVar1);
	return iVar1;
}

void func_407(var uParam0)
{
	if (uParam0->f_202 == 0f)
	{
		return;
	}
	uParam0->f_202 = (uParam0->f_202 * 0.9f);
	if (uParam0->f_202 < 0.001f)
	{
		uParam0->f_202 = 0f;
	}
}

int func_408(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 30;
	if (uParam0->f_309[iParam1] == 4)
	{
		iVar0 = 20;
	}
	else if (uParam0->f_309[iParam1] == 2 || uParam0->f_309[iParam1] == 3)
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_409(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(-4000) * fVar0));
	iVar1 += 10000;
	DEBUG::_0xA308F935BDECCEC0(624776, 124, "FISHING: fish ", iParam1, " smallest ", 10000, " largest ", 6000, " fWeightPercentage ", fVar0, " iFirstTiredDuration ", iVar1);
	return iVar1;
}

int func_410(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return joaat("P_BAITBREAD01X");
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return joaat("P_BAITCORN01X");
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return joaat("P_BAITCHEESE01X");
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return joaat("P_BAITWORM01X");
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return joaat("P_BAITCRICKET01X");
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return joaat("P_CRAWDAD01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return joaat("P_FINISHEDRAGONFLY01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return joaat("P_FINISDFISHLURE01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return joaat("P_FINISHDCRAWD01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return joaat("P_FINISHEDRAGONFLYLEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return joaat("P_FINISDFISHLURELEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return joaat("P_FINISHDCRAWDLEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return joaat("P_LGOC_SPINNER_V4");
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_MODEL_ENUM_FOR_ITEM unknown enum ", func_225(bParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_MODEL_ENUM_FOR_ITEM: unknown enum");
	return 0;
}

float func_411(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	bVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_149(vParam0, 1092616192 /* Float: 10f */), iVar0, &fVar2);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_149(vParam0, 1092616192 /* Float: 10f */), &fVar3, false);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		fVar1 = (fVar2 - fVar3);
	}
	return fVar1;
}

bool func_412(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { func_289(vParam0, 1) };
	if (!ENTITY::_0x0C9DBF48C6BA6E4C(PLAYER::PLAYER_PED_ID(), vVar0, 1))
	{
		return true;
	}
	return false;
}

void func_413(var uParam0, vector3 vParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_8, vParam1, true, false, true, true);
		func_98(&(uParam0->f_215));
	}
}

bool func_414(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_224 > 1)
	{
		if (func_139())
		{
			if (uParam0->f_222 != 1f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_420())
		{
			if (uParam0->f_222 != 1.5f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_86(uParam1, iParam2))
		{
			if (uParam0->f_222 != 3f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (uParam0->f_222 != 1.5f)
		{
			uParam0->f_223 = 1;
		}
	}
	return uParam0->f_223;
}

float func_415(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES - entity1 does not exist");
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "GET_DISTANCE_BETWEEN_ENTITIES - entity2 does not exist");
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

float func_416(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_528(vVar0, vVar3, iParam2);
}

bool func_417(int iParam0)
{
	if (Global_1903123.f_5.f_3 > 0.5f)
	{
		return false;
	}
	return iParam0 > 0;
}

bool func_418(int iParam0)
{
	if (Global_1903123.f_5.f_3 > 0.5f)
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_419(var uParam0, float fParam1, float fParam2)
{
	if (uParam0->f_200 == 2)
	{
		if (fParam1 >= (fParam2 / 3f))
		{
			return true;
		}
	}
	if (((uParam0->f_200 == 1 || uParam0->f_200 == 3) || uParam0->f_200 == 4) || uParam0->f_200 == 5)
	{
		if (fParam1 >= (fParam2 / 2f))
		{
			return true;
		}
	}
	return false;
}

bool func_420()
{
	if (!PAD::_IS_USING_KEYBOARD(0))
	{
		if (func_137() != 0 || func_138() != 0)
		{
			return true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_IN")) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_OUT_MODIFER")))
	{
		return true;
	}
	return false;
}

int func_421(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (AUDIO::_0x84848E1C0FC67DBB(uParam0->f_70[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_422(var uParam0, var uParam1)
{
	int iVar0;

	if (func_61(uParam0, 32))
	{
		iVar0 = func_82(uParam0);
		if (func_133(iVar0) && uParam1->f_309[iVar0] != 4)
		{
			DEBUG::_0xF0783374333FD8CE(2696, 124, "FISHING: fish ", iVar0, " state ", func_276(uParam1->f_154[iVar0], 0), " FISHING_HANDLE_UNEXPECTED_KEPT_FISH_STILL_ALIVE_DURING_DATA_RESET");
			if (uParam1->f_154[iVar0] == 9)
			{
				DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iVar0, " need to delete fish FISHING_HANDLE_UNEXPECTED_KEPT_FISH_STILL_ALIVE_DURING_DATA_RESET");
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

char* func_423(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "WATER_TYPE_INVALID";
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

var func_424()
{
	return Global_1940296.f_10;
}

var func_425()
{
	return Global_1940296.f_11;
}

var func_426()
{
	return Global_1940296.f_13;
}

char* func_427(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_HELP_ENUM_EQ_ROD1";
		case 1:
			return "FISHING_HELP_ENUM_EQ_ROD2";
		case 2:
			return "FISHING_HELP_ENUM_EQ_ROD3";
		case 3:
			return "FISHING_HELP_ENUM_EQ_BAIT1";
		case 4:
			return "FISHING_HELP_ENUM_EQ_BAIT2_ABI1";
		case 5:
			return "FISHING_HELP_ENUM_EQ_BAIT2_FUD1";
		case 6:
			return "FISHING_HELP_ENUM_EQ_BAIT2_WAR1";
		case 7:
			return "FISHING_HELP_ENUM_EQ_BAIT2_FSH1";
		case 8:
			return "FISHING_HELP_ENUM_EQ_BAIT3_ABI1";
		case 9:
			return "FISHING_HELP_ENUM_EQ_BAIT3_FUD1";
		case 10:
			return "FISHING_HELP_ENUM_EQ_BAIT3_WAR1";
		case 11:
			return "FISHING_HELP_ENUM_EQ_BAIT3_FSH1";
		case 12:
			return "FISHING_HELP_ENUM_EQ_REBAIT";
		case 13:
			return "FISHING_HELP_ENUM_EQ_BAIT_ANY1";
		case 14:
			return "FISHING_HELP_ENUM_EQ_BAIT_ANY2";
		case 15:
			return "FISHING_HELP_ENUM_CAST_DEEP";
		case 16:
			return "FISHING_HELP_ENUM_CAST_HIGH";
		case 17:
			return "FISHING_HELP_ENUM_CAST_WATER";
		case 18:
			return "FISHING_HELP_ENUM_CAST_CLOSE";
		case 19:
			return "FISHING_HELP_ENUM_CAST_LOS";
		case 20:
			return "FISHING_HELP_ENUM_CAST_BAIT";
		case 21:
			return "FISHING_HELP_ENUM_CAST_NOT_HERE";
		case 22:
			return "FISHING_HELP_ENUM_BEGIN_AIM_HLP";
		case 23:
			return "FISHING_HELP_ENUM_BEGIN_AIM_TOG_HLP";
		case 24:
			return "FISHING_HELP_ENUM_BEGIN_AIM_OBJ";
		case 25:
			return "FISHING_HELP_ENUM_CAST_AIMING_HLP";
		case 26:
			return "FISHING_HELP_ENUM_CAST_AIMING_OBJ";
		case 27:
			return "FISHING_HELP_ENUM_CAST_RELEASE_HLP";
		case 28:
			return "FISHING_HELP_ENUM_CAST_RELEASE_OBJ";
		case 29:
			return "FISHING_HELP_ENUM_CAST_POWER";
		case 30:
			return "FISHING_HELP_ENUM_NIBBLE_DESC";
		case 31:
			return "FISHING_HELP_ENUM_WAIT_BITE_LURE_HLP";
		case 32:
			return "FISHING_HELP_ENUM_WAIT_BITE_LURE_AUTO_HLP";
		case 33:
			return "FISHING_HELP_ENUM_WAIT_BITE_LURE_TOG_HLP";
		case 34:
			return "FISHING_HELP_ENUM_WAIT_BITE_LURE_TOG_AUTO_HLP";
		case 35:
			return "FISHING_HELP_ENUM_WAIT_BITE_LURE_GRIP";
		case 36:
			return "FISHING_HELP_ENUM_WAIT_BITE_LURE_HOOK";
		case 37:
			return "FISHING_HELP_ENUM_HOOK_FISH_HLP";
		case 38:
			return "FISHING_HELP_ENUM_HOOK_FISH_OBJ";
		case 39:
			return "FISHING_HELP_ENUM_FLICK_BAIT";
		case 40:
			return "FISHING_HELP_ENUM_SPOOL_EMPTY";
		case 41:
			return "FISHING_HELP_ENUM_MISSED_BITE1";
		case 42:
			return "FISHING_HELP_ENUM_MISSED_BITE2";
		case 43:
			return "FISHING_HELP_ENUM_HOOKED_MOVE_ROD1_HLP";
		case 44:
			return "FISHING_HELP_ENUM_HOOKED_MOVE_ROD1_OBJ";
		case 45:
			return "FISHING_HELP_ENUM_HOOKED_MOVE_ROD2_HLP";
		case 46:
			return "FISHING_HELP_ENUM_HOOKED_REEL_IN_HLP";
		case 47:
			return "FISHING_HELP_ENUM_HOOKED_REEL_IN_AUTO_HLP";
		case 48:
			return "FISHING_HELP_ENUM_HOOKED_REEL_IN_OBJ";
		case 49:
			return "FISHING_HELP_ENUM_OBJECT_REEL_IN";
		case 50:
			return "FISHING_HELP_ENUM_FISH_ESC1";
		case 51:
			return "FISHING_HELP_ENUM_FISH_ESC2";
		case 52:
			return "FISHING_HELP_ENUM_FISH_ESC3";
		case 53:
			return "FISHING_HELP_ENUM_FISH_ESC4";
		case 54:
			return "FISHING_HELP_ENUM_BAIT_LOST";
		case 55:
			return "FISHING_HELP_ENUM_STOW_HORSE";
		case 56:
			return "FISHING_HELP_ENUM_HOLD_REEL";
		case 57:
			return "FISHING_HELP_ENUM_PUMP_ROD";
		case 58:
			return "FISHING_HELP_ENUM_FULL_SATCHEL";
		case 59:
			return "FISHING_HELP_ENUM_EQUIP_CHEESE";
		case 60:
			return "FISHING_HELP_ENUM_EQUIP_BREAD";
		case 61:
			return "FISHING_HELP_ENUM_EQUIP_CORN";
		case 62:
			return "FISHING_HELP_ENUM_EQUIP_WORM";
		case 63:
			return "FISHING_HELP_ENUM_EQUIP_CRICKET";
		case 64:
			return "FISHING_HELP_ENUM_EQUIP_CRAYFISH";
		case 65:
			return "FISHING_HELP_ENUM_EQUIP_LURE_LAKE";
		case 66:
			return "FISHING_HELP_ENUM_EQUIP_LURE_RIVER";
		case 67:
			return "FISHING_HELP_ENUM_EQUIP_LURE_SWAMP";
		case 68:
			return "FISHING_HELP_ENUM_EQUIP_SPECIAL_LURE_LAKE";
		case 69:
			return "FISHING_HELP_ENUM_EQUIP_SPECIAL_LURE_RIVER";
		case 70:
			return "FISHING_HELP_ENUM_EQUIP_SPECIAL_LURE_SWAMP";
		case 71:
			return "FISHING_HELP_ENUM_EQUIP_SPECIAL_SPINNER";
		case 72:
			return "FISHING_HELP_ENUM_HOOKED_REEL_IN_HLP2";
		case 73:
			return "FISHING_HELP_ENUM_NUM";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_428(var uParam0, int iParam1)
{
	return uParam0->f_74[iParam1] == 1;
}

bool func_429(var uParam0, int iParam1)
{
	if ((uParam0->f_368[iParam1] > 0 && func_56(&(uParam0->f_148[iParam1 /*3*/]))) && func_171(&(uParam0->f_148[iParam1 /*3*/])) < IntToFloat(uParam0->f_368[iParam1]))
	{
		return true;
	}
	return false;
}

char* func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGFSH_EQ_ROD1";
		case 1:
			return "MGFSH_EQ_ROD2";
		case 2:
			return "MGFSH_EQ_ROD3";
		case 3:
			return "MGFSH_EQ_BAIT1";
		case 4:
			return "MGFSH_EQ_BAIT2_ABI1";
		case 5:
			return "MGFSH_EQ_BAIT2_FUD1";
		case 6:
			return "MGFSH_EQ_BAIT2_WAR1";
		case 7:
			return "MGFSH_EQ_BAIT2_FSH1";
		case 8:
			return "MGFSH_EQ_BAIT3_ABI1";
		case 9:
			return "MGFSH_EQ_BAIT3_FUD1";
		case 10:
			return "MGFSH_EQ_BAIT3_WAR1";
		case 11:
			return "MGFSH_EQ_BAIT3_FSH1";
		case 12:
			return "MGFSH_EQ_REBAIT";
		case 13:
			return "MGFSH_EQ_BAIT1";
		case 14:
			return "MGFSH_EQ_BAIT_ANY";
		case 15:
			return "MGFSH_CAST_DEEP";
		case 16:
			return "MGFSH_CAST_HIGH";
		case 17:
			return "MGFSH_CAST_WATER";
		case 18:
			return "MGFSH_CAST_CLOSE";
		case 19:
			return "MGFSH_CAST_LOS";
		case 20:
			return "MGFSH_CAST_BAIT";
		case 21:
			return "MGFSH_CAST_NOT_HERE";
		case 22:
			return "MGFSH_BEGIN_AIM_HLP";
		case 23:
			return "MGFSH_BEGIN_AIM_TOG_HLP";
		case 24:
			return "MGFSH_BEGIN_AIM_OBJ";
		case 25:
			return "MGFSH_CAST_AIMING_HLP";
		case 26:
			return "MGFSH_CAST_AIMING_OBJ";
		case 27:
			return "MGFSH_CAST_RELEASE_HLP";
		case 28:
			return "MGFSH_CAST_RELEASE_OBJ";
		case 29:
			return "MGFSH_CAST_POWER";
		case 30:
			return "MGFSH_NIBBLE_DESC";
		case 31:
			return "MGFSH_WAIT_LURE_HLP";
		case 32:
			return "MGFSH_WAIT_LURE_AUTO_HLP";
		case 33:
			return "MGFSH_WAIT_LURE_TOG_HLP";
		case 34:
			return "MGFSH_WAIT_LURE_TOG_AUTO_HLP";
		case 35:
			return "MGFSH_WAIT_LURE_GRIP";
		case 36:
			return "MGFSH_WAIT_LURE_HOOK";
		case 37:
			return "MGFSH_HOOK_FISH_HLP";
		case 38:
			return "MGFSH_HOOK_FISH_OBJ";
		case 39:
			return "MGFSH_FLICK_BAIT";
		case 40:
			return "MGFSH_SPOOL_EMPTY";
		case 41:
			return "MGFSH_MISSED_BITE1";
		case 42:
			return "MGFSH_MISSED_BITE2";
		case 43:
			return "MGFSH_HOOK_ROD1_HLP";
		case 44:
			return "MGFSH_HOOK_ROD1_OBJ";
		case 45:
			return "MGFSH_HOOK_ROD2";
		case 46:
			return "MGFSH_REEL_FISH_HLP";
		case 47:
			return "MGFSH_REEL_FISH_AUTO_HLP";
		case 48:
			return "MGFSH_REEL_FISH_OBJ";
		case 49:
			return "MGFSH_OBJECT_REEL";
		case 50:
			return "MGFSH_FISH_ESC1";
		case 51:
			return "MGFSH_FISH_ESC2";
		case 52:
			return "MGFSH_FISH_ESC3";
		case 53:
			return "MGFSH_FISH_ESC4";
		case 54:
			return "MGFSH_BAIT_LOST";
		case 55:
			return "MGFSH_STOW_HORSE";
		case 56:
			return "MGFSH_HOLD_REEL";
		case 57:
			return "MGFSH_PUMP_ROD";
		case 58:
			return "MGFSH_FULL_SAT";
		case 59:
			return "MGFSH_EQD_CHEESE";
		case 60:
			return "MGFSH_EQD_BREAD";
		case 61:
			return "MGFSH_EQD_CORN";
		case 62:
			return "MGFSH_EQD_WORM";
		case 63:
			return "MGFSH_EQD_CRICKET";
		case 64:
			return "MGFSH_EQD_CRAYFISH";
		case 65:
			return "MGFSH_EQD_LURE_LAKE";
		case 66:
			return "MGFSH_EQD_LURE_RIVER";
		case 67:
			return "MGFSH_EQD_LURE_SWAMP";
		case 68:
			return "MGFSH_EQD_LURE_LAKE";
		case 69:
			return "MGFSH_EQD_LURE_RIVER";
		case 70:
			return "MGFSH_EQD_LURE_SWAMP";
		case 71:
			return "MGFSH_EQD_SPECIAL_SPINNER_MP";
		case 72:
			return "MGFSH_REEL_FISH_HLP2_KM";
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_HELP_MESSAGE_STRING unknown enum ", func_427(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_HELP_MESSAGE_STRING: unknown enum");
	return "";
}

char* func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_TEXT_STRING_FOR_FISH_TYPE unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_TEXT_STRING_FOR_FISH_TYPE: unknown enum");
	return "";
}

var func_432(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = sParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_433(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	DEBUG::_0xA308F935BDECCEC0(168, 145, "REGISTER_USE_CONTEXT_FRONTEND - (", sParam0, ")");
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Cannot register a context without a label!");
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Cannot register a context with an invalid control!");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_529(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_530(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		DEBUG::_0xA308F935BDECCEC0(648, 145, "REGISTER_USE_CONTEXT_FRONTEND - Registered context w/ ID: ", iVar1, " for thread: ", UNK_0xD2ADB90D13FA15A8(SCRIPTS::GET_ID_OF_THIS_THREAD()));
		UNK_0x355E72323AEE83CC(145, 9);
		return iVar1;
	}
	DEBUG::_0x83407B92D46F25C3(8, 145, "REGISTER_USE_CONTEXT_FRONTEND - Couldn't find an empty slot for your use context! Get Evan Lawson!");
	return 0;
}

void func_434(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_248(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_MANUAL_RESOLVED - Cannot handle an invalid context!");
		return;
	}
	iVar0 = func_394(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_0xA520C7B05FA4EB2A(Global_1952230[iVar0 /*23*/].f_3, iParam1);
}

void func_435(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (bParam2 && !func_248(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ENABLED - Invalid context!");
		return;
	}
	sVar0 = func_394(iParam0);
	if (bParam1)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Enable use context, ", sVar0);
		func_531(iParam0, 4);
		if (bParam3)
		{
			func_532(sVar0, 1);
		}
		func_533(sVar0, 1);
	}
	else
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 145, "Disable use context, ", sVar0);
		func_534(iParam0, 4);
		func_533(sVar0, 0);
	}
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_248(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "SET_USE_CONTEXT_ALLOWED_CONTROL_ACTION - Cannot handle an invalid context!");
		return;
	}
	iVar0 = func_394(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1952230[iVar0 /*23*/].f_3, iParam1);
}

bool func_437(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_248(iParam0))
	{
		return false;
	}
	iVar0 = func_394(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1952230[iVar0 /*23*/].f_3);
}

bool func_438(var uParam0)
{
	return (uParam0->f_12 != -99999f && uParam0->f_12 < 0.03f);
}

void func_439(int iParam0)
{
	if (!func_192(iParam0))
	{
		func_128(&(Global_1903123.f_2), iParam0);
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: participant 0 bit ", func_457(iParam0, 0), " set");
	}
}

void func_440(var uParam0, int iParam1, int iParam2)
{
	func_98(&(uParam0->f_148[iParam1 /*3*/]));
	uParam0->f_368[iParam1] = iParam2;
	DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: help text ", func_427(iParam1, 0), " set delay to ", uParam0->f_368[iParam1]);
}

float func_441(var uParam0)
{
	if (!func_56(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "WARNING: Trying to get value of TIMER that has not been started!");
		return uParam0->f_1;
	}
	if (func_144(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_291() - uParam0->f_1);
}

bool func_442(var uParam0, var uParam1, int iParam2)
{
	if ((((func_535(uParam0, uParam1, 1) && !func_61(uParam1, 512)) && func_226(Global_38.f_5807)) && func_536(uParam0, iParam2) > 0f) && func_537(uParam1, iParam2))
	{
		return true;
	}
	return false;
}

bool func_443(var uParam0, var uParam1, int iParam2)
{
	if (!func_535(uParam0, uParam1, 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 124, "FISHING: participant 0 species attractor ", func_134(iParam2, 0), " should change to inactive because NOT FISHING_ALLOW_PARTICIPANT_TO_HOOK");
		return true;
	}
	else if (func_61(uParam1, 512))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 124, "FISHING: participant 0 species attractor ", func_134(iParam2, 0), " should change to inactive because FISHING_PARTICIPANT_BIT_FLICKED_BAIT_TOO_OFTEN");
		return true;
	}
	else if (!func_226(Global_38.f_5807))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 124, "FISHING: participant 0 species attractor ", func_134(iParam2, 0), " should change to inactive because NOT FISHING_IS_ITEM_BAIT");
		return true;
	}
	else if (func_536(uParam0, iParam2) == 0f)
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 124, "FISHING: participant 0 species attractor ", func_134(iParam2, 0), " should change to inactive because FISHING_GET_PARTICIPANT_LURE_DISTANCE_FOR_FISH_TYPE=CONST_LURE_SUITABILITY_ZERO");
		return true;
	}
	else if (!func_537(uParam1, iParam2))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 124, "FISHING: participant 0 species attractor ", func_134(iParam2, 0), " should change to inactive because NOT FISHING_IS_HOOK_IN_SUFFICIENT_WATER_TO_LURE_FISH_TYPE");
		return true;
	}
	return false;
}

void func_444(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;

	iVar0 = func_391(iParam2);
	if (func_392(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam1->f_77[iParam2]))
	{
		fVar1 = func_536(uParam0, iParam2);
		uParam1->f_77[iParam2] = FLOCK::_0xE93415B3307208E5(iVar0, func_150(), 0f, fVar1, 10000f, 0f, 0f, 0f, 1);
		func_393(iParam2, fVar1);
	}
}

void func_445(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 3)
	{
		if (iParam2 == 1)
		{
			if (!HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_70))
			{
				HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_70, true);
			}
		}
		else if (HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_70))
		{
			HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_70, false);
		}
	}
	else if (func_248(uParam0->f_60[iParam1]))
	{
		iVar0 = func_394(uParam0->f_60[iParam1]);
		if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iVar0 /*23*/].f_3))
		{
			if (iParam2 == 1)
			{
				if (!HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(Global_1952230[iVar0 /*23*/].f_3))
				{
					HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(Global_1952230[iVar0 /*23*/].f_3, true);
				}
			}
			else if (HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(Global_1952230[iVar0 /*23*/].f_3))
			{
				HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(Global_1952230[iVar0 /*23*/].f_3, false);
			}
		}
	}
}

bool func_446(var uParam0)
{
	if (!func_56(&(uParam0->f_76)))
	{
		func_98(&(uParam0->f_76));
	}
	if (func_171(&(uParam0->f_76)) >= 3f && func_226(Global_38.f_5807))
	{
		if (func_232(Global_38.f_5807) || func_233(Global_38.f_5807))
		{
			return true;
		}
	}
	return false;
}

bool func_447(var uParam0)
{
	if (!func_56(&(uParam0->f_76)))
	{
		func_98(&(uParam0->f_76));
	}
	return func_171(&(uParam0->f_76)) >= 3f;
}

Vector3 func_448(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

char* func_449(var uParam0)
{
	return uParam0->f_53 * 1000;
}

void func_450(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;

	if (!func_535(uParam0, uParam1, 1) || func_61(uParam1, 256))
	{
		return;
	}
	iVar0 = -1;
	if (!func_133(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar1]) && uParam2->f_154[iVar1] == 4) && func_162(uParam2, iVar1))
			{
				iVar9 = uParam2->f_247[iVar1];
				iVar2 = func_391(uParam2->f_247[iVar1]);
				if (func_392(iVar2) && FLOCK::_0x19870C40C7EE15BE(iVar2, uParam1->f_77[iVar9]))
				{
					fVar16 = uParam1->f_23[iVar1];
					if (fVar16 != 99999f && fVar16 < uParam1->f_168)
					{
						fVar17 = func_538(uParam0, uParam2->f_247[iVar1], Global_38.f_5807);
						if (fVar17 == 5f)
						{
							if (fVar10 <= 0f || fVar16 < fVar10)
							{
								fVar10 = fVar16;
								iVar3 = iVar1;
							}
						}
						else if (fVar17 == 4f)
						{
							if (fVar11 <= 0f || fVar16 < fVar11)
							{
								fVar11 = fVar16;
								iVar4 = iVar1;
							}
						}
						else if (fVar17 == 3f)
						{
							if (fVar12 <= 0f || fVar16 < fVar12)
							{
								fVar12 = fVar16;
								iVar5 = iVar1;
							}
						}
						else if (fVar17 == 2f)
						{
							if (fVar13 <= 0f || fVar16 < fVar13)
							{
								fVar13 = fVar16;
								iVar6 = iVar1;
							}
						}
						else if (fVar17 == 1f)
						{
							if (fVar14 <= 0f || fVar16 < fVar14)
							{
								fVar14 = fVar16;
								iVar7 = iVar1;
							}
						}
						else if (fVar17 == 0.5f)
						{
							if (fVar15 <= 0f || fVar16 < fVar15)
							{
								fVar15 = fVar16;
								iVar8 = iVar1;
							}
						}
						else
						{
							DEBUG::_0xF0783374333FD8CE(392, 124, "FISHING: fish ", iVar1, " unexpected bait suitability ", fVar17);
							DEBUG::_0x83407B92D46F25C3(8, 124, "Unexpected bait suitability");
						}
					}
				}
			}
			iVar1++;
		}
		if (fVar10 > 0f)
		{
			iVar0 = iVar3;
		}
		else if (fVar11 > 0f)
		{
			iVar0 = iVar4;
		}
		else if (fVar12 > 0f)
		{
			iVar0 = iVar5;
		}
		else if (fVar13 > 0f)
		{
			iVar0 = iVar6;
		}
		else if (fVar14 > 0f)
		{
			iVar0 = iVar7;
		}
		else if (fVar15 > 0f)
		{
			iVar0 = iVar8;
		}
	}
	if (func_133(iVar0))
	{
		func_539(uParam1, uParam2, iVar0);
	}
}

bool func_451(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_535(uParam0, uParam1, 0) || func_540(uParam1, uParam2)) || func_311())
	{
		return true;
	}
	iVar0 = func_82(uParam1);
	if ((func_133(iVar0) && uParam1->f_23[iVar0] != 99999f) && uParam1->f_23[iVar0] > (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_452(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_541(uParam1, uParam2))
	{
		uParam1->f_163 = func_542(uParam1, uParam2);
		uParam1->f_166 = func_543(uParam1, uParam2);
		uParam1->f_167 = func_544(uParam1, uParam2);
		uParam1->f_164 = func_545(uParam1, uParam2);
		func_111(uParam1->f_166, uParam1->f_167);
		func_453(uParam0, 2, 1);
		if (uParam1->f_163 == 1)
		{
			func_445(uParam0, 2, 1);
		}
		func_546(uParam0, uParam1, uParam2);
		func_547(uParam0, uParam1);
		func_190(512, 0);
		uParam1->f_156++;
		func_98(&(uParam1->f_160));
		func_101(uParam1, 8192);
		func_101(uParam1, 16384);
	}
	if (func_340(512))
	{
		iVar0 = func_82(uParam1);
		if (!func_133(iVar0) || (func_56(&(uParam1->f_160)) && func_57(&(uParam1->f_160)) > uParam1->f_166))
		{
			func_241(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				func_242(uParam0, uParam1, uParam2, 0);
			}
			uParam1->f_167 = 0;
			func_445(uParam0, 2, 0);
			func_453(uParam0, 2, 0);
		}
	}
}

void func_453(var uParam0, int iParam1, int iParam2)
{
	if (func_248(uParam0->f_60[iParam1]))
	{
		if (iParam2 == 1)
		{
			if (func_548(uParam0->f_60[iParam1], 1))
			{
				func_435(uParam0->f_60[iParam1], 1, 1, 1);
			}
		}
		else if (!func_548(uParam0->f_60[iParam1], 1))
		{
			func_435(uParam0->f_60[iParam1], 0, 1, 1);
		}
	}
}

void func_454(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam1->f_3 = iParam2;
	DEBUG::_0xF0783374333FD8CE(680, 124, "FISHING: participant 0 consuming bait - eConsumeBait ", func_549(uParam1->f_3, 0), " eCurrentBaitEquipped ", func_225(Global_38.f_5807, 0));
	switch (uParam1->f_3)
	{
		case 1:
			if ((func_472(Global_38.f_5807) && uParam1->f_55 > 3) || (func_473(Global_38.f_5807) && uParam1->f_55 > 4))
			{
				if (!func_231(Global_38.f_5807))
				{
					func_550(Global_38.f_5807);
				}
				func_227(uParam0, uParam1, 1309979101 /* GXTEntry: "No Bait" */, 0, 0);
			}
			break;
		case 2:
			if (iParam3 == 1)
			{
				func_298(uParam0, 53, 1, -2, 1);
			}
			else
			{
				if (func_551(uParam1))
				{
					if (!func_34(uParam0, 16))
					{
						if (func_472(Global_38.f_5807) || func_473(Global_38.f_5807))
						{
							func_298(uParam0, 50, 1, -2, 1);
						}
						else
						{
							func_298(uParam0, 51, 1, -2, 1);
						}
					}
					if (!func_231(Global_38.f_5807))
					{
						func_550(Global_38.f_5807);
					}
					func_227(uParam0, uParam1, 1309979101 /* GXTEntry: "No Bait" */, 0, 0);
				}
				if (!func_34(uParam0, 16))
				{
					func_298(uParam0, 52, 1, -2, 1);
				}
			}
			break;
		case 3:
			if (func_472(Global_38.f_5807) || func_473(Global_38.f_5807))
			{
				if (!func_231(Global_38.f_5807))
				{
					func_550(Global_38.f_5807);
				}
				func_227(uParam0, uParam1, 1309979101 /* GXTEntry: "No Bait" */, 0, 0);
			}
			break;
	}
}

bool func_455(var uParam0, var uParam1)
{
	if (func_61(uParam1, 4096) || func_311())
	{
		return false;
	}
	func_300(uParam0, 1, 0, 1);
	if (func_437(uParam0->f_60[1], 1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 has pressed context to reset cast");
		func_35(uParam0, 16);
		return true;
	}
	return false;
}

bool func_456()
{
	if (Global_1903123.f_36 != Global_38.f_5807 && func_226(Global_1903123.f_36))
	{
		return true;
	}
	return false;
}

char* func_457(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "FISHING_PARTICIPANT_UNSAVED_BIT_HAS_JUST_HOOKED_FISH";
		case 2:
			return "FISHING_PARTICIPANT_UNSAVED_BIT_BOBBER_HIT_WATER_DURING_CAST";
		case 4:
			return "FISHING_PARTICIPANT_UNSAVED_BIT_FISH_DIED_DURING_UNHOOK";
		case 8:
			return "FISHING_PARTICIPANT_UNSAVED_BIT_FORCE_REEL_IN";
		case 16:
			return "FISHING_PARTICIPANT_UNSAVED_BIT_FORCE_LOSE_HOOKED_FISH";
		case 32:
			return "FISHING_PARTICIPANT_UNSAVED_BIT_FORCE_KEEP_HOOKED_FISH";
		case 64:
			return "FISHING_PARTICIPANT_UNSAVED_BIT_CAUGHT_NEW_FISH";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_458(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_82(uParam1);
	if ((((((func_133(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0])) && func_535(uParam0, uParam1, 0)) && func_56(&(uParam1->f_160))) && func_57(&(uParam1->f_160)) < uParam1->f_166) && uParam1->f_23[iVar0] != 99999f) && uParam1->f_23[iVar0] < (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_459(var uParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam3, " wasn't owned by thread so set as mission entity - FISHING_SET_PARTICIPANT_HAS_HOOKED_FISH");
	}
	TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
	func_154(uParam2, iParam3, 6);
	WATER::_0xF0FBF193F1F5C0EA(uParam2->f_123[iParam3]);
	func_98(&(uParam0->f_12));
	func_440(&(uParam0->f_82), 43, 2);
	func_440(&(uParam0->f_82), 45, 2);
	func_440(&(uParam0->f_82), 46, 2);
	func_440(&(uParam0->f_82), 47, 2);
	if (func_552(uParam2->f_247[iParam3]))
	{
		func_440(&(uParam0->f_82), 56, 50);
		func_440(&(uParam0->f_82), 57, 30);
	}
	else
	{
		func_58(&(uParam0->f_82.f_148[56 /*3*/]));
		func_58(&(uParam0->f_82.f_148[57 /*3*/]));
	}
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_155 = 0;
	uParam1->f_222 = 3f;
	uParam1->f_223 = 0;
	uParam1->f_224 = 0;
	uParam2->f_439[iParam3] = 1;
	fVar0 = (uParam2->f_278[iParam3] / uParam2->f_470);
	fVar1 = (0.5f * fVar0);
	fVar2 = (fVar1 / 2f);
	if (uParam2->f_402[iParam3] > 0f)
	{
		if (uParam2->f_402[iParam3] >= fVar2)
		{
			uParam1->f_202 = uParam2->f_402[iParam3];
		}
		else
		{
			uParam1->f_202 = fVar2;
		}
	}
	else
	{
		uParam1->f_202 = fVar1;
	}
	DEBUG::_0xF0783374333FD8CE(1677704, 124, "FISHING: fish ", iParam3, " fWeightPercentage ", fVar0, " fStartingResistance ", fVar1, " fMinimumResistance ", fVar2, " fReelInResistance ", uParam1->f_202);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iParam3], true);
	PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iParam3], 17, true);
	func_58(&(uParam1->f_219));
	func_241(512);
	TASK::_0x1F298C7BD30D1240(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam2->f_123[iParam3], false, true);
	TASK::_0x1A52076D26E09004(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3]);
	func_439(1);
	func_190(4, 1);
	func_119(uParam1, 0);
	func_23(uParam1);
	func_242(uParam0, uParam1, uParam2, 1);
}

bool func_460(var uParam0)
{
	if (Global_1903123.f_5 != 6)
	{
		return false;
	}
	if (func_56(&(uParam0->f_160)) && func_57(&(uParam0->f_160)) < uParam0->f_164 + 2000)
	{
		return true;
	}
	return false;
}

void func_461(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	float fVar1;

	if (!func_56(&(uParam0->f_12)))
	{
		uParam1->f_174 = 0;
		return;
	}
	iVar0 = func_408(uParam2, iParam3);
	fVar1 = (BUILTIN::TO_FLOAT(func_159(&(uParam0->f_12))) / IntToFloat(iVar0 * 1000));
	if (BUILTIN::ROUND((fVar1 * 200f)) >= uParam1->f_174)
	{
		uParam1->f_174 = BUILTIN::ROUND((fVar1 * 200f));
	}
	else if (!func_56(&(uParam1->f_212)) || func_159(&(uParam1->f_212)) > uParam0->f_55)
	{
		func_98(&(uParam1->f_212));
		if (uParam1->f_174 > 0)
		{
			uParam1->f_174 = (uParam1->f_174 - 1);
		}
	}
	func_237(uParam1->f_174, 0, 200);
}

void func_462(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((!func_86(uParam2, iParam3) || !func_278()) || func_280(uParam1, 0))
	{
		func_553(uParam0, uParam1, uParam2, iParam3);
	}
	else if ((func_139() || func_420()) || func_554())
	{
		func_555(uParam0, uParam1, uParam2);
	}
	else
	{
		func_553(uParam0, uParam1, uParam2, iParam3);
	}
	func_237(uParam1->f_173, 0, 200);
}

void func_463(var uParam0)
{
	if (uParam0->f_174 > 0 && uParam0->f_174 >= uParam0->f_173)
	{
		uParam0->f_172 = uParam0->f_174;
	}
	else
	{
		uParam0->f_172 = uParam0->f_173;
	}
	func_237(uParam0->f_172, 0, 200);
}

bool func_464(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam1->f_172 >= 200)
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hooked fish has escaped iLineSnapBar >= CONST_ALLOWABLE_LINE_SNAP_INCREMENTS");
		return true;
	}
	else if (!func_133(iParam3))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hooked fish has escaped iFish = CONST_NO_FISH_ASSOCIATED_WITH_PARTICIPANT");
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iParam3]))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hooked fish has escaped IS_ENTITY_DEAD=TRUE");
		return true;
	}
	else if (func_455(uParam0, uParam1))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hooked fish has escaped FISHING_HAS_PLAYER_PRESSED_CONTEXT_TO_RESET_CAST");
		return true;
	}
	else if (func_192(16))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 hooked fish has escaped FISHING_PARTICIPANT_UNSAVED_BIT_FORCE_LOSE_HOOKED_FISH");
		return true;
	}
	return false;
}

void func_465()
{
	struct<2> Var0;

	Var0 = { func_556(joaat("FISH_ESCAPED")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

char* func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return "FISHING_CODE_SIG_FLICK_BAIT";
		case 2:
			return "FISHING_CODE_SIG_AUTOREELING_FISH";
		case 4:
			return "FISHING_CODE_SIG_KEEP_DECISION_TIMEOUT";
		case 8:
			return "FISHING_CODE_SIG_UNHOOK_DECISION_LOOP_ENDED";
		case 16:
			return "FISHING_CODE_SIG_BOBBER_WATER_SPLASH";
		case 32:
			return "FISHING_CODE_SIG_CAN_MAKE_UNHOOK_DECISION";
		case 64:
			return "FISHING_CODE_SIG_PROCESS_KEPT_FISH";
		case 128:
			return "FISHING_CODE_SIG_PROCESS_RELEASED_FISH";
		case 256:
			return "FISHING_CODE_SIG_PROCESS_KEPT_FISH_CARRY";
		case 512:
			return "FISHING_CODE_SIG_RELEASED_FISH_IN_WATER";
		case 1024:
			return "FISHING_CODE_SIG_FISH_DIED_IN_UNHOOK";
		case 2048:
			return "FISHING_CODE_SIG_IN_CUSTOM_ANIM_SCENE";
		case 4096:
			return "FISHING_CODE_SIG_IS_BOAT_FISHING";
		case 8192:
			return "FISHING_CODE_SIG_CAN_WARP_FOR_KEEP";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_467(var uParam0, var uParam1, var uParam2)
{
	if (func_61(uParam1, 64) || func_61(uParam1, 32))
	{
		return;
	}
	func_319(uParam1, 32);
	func_557(uParam1, uParam2);
	func_476(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1903123.f_41++;
	Global_1903123.f_42++;
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - participant 0 iFishKeptThisSession ", Global_1903123.f_41);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: records - participant 0 iFishKeptThisGameBoot ", Global_1903123.f_42);
	func_115(uParam1);
	func_319(uParam1, 128);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 charged reputation hit for killing fish - Harriet");
	func_558(0, 6);
	func_190(32, 1);
}

int func_468(var uParam0)
{
	if (func_56(&(uParam0->f_219)) && func_57(&(uParam0->f_219)) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BLUEGILL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_BLUEGILL");
			}
			break;
		case 1:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_BULLHEAD_CATFISH");
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_CHAIN_PICKEREL");
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_CHANNEL_CATFISH");
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LAKE_STURGEON_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LAKE_STURGEON");
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LARGEMOUTH_BASS");
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LONGNOSE_GAR_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LONGNOSE_GAR");
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_MUSKIE_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_MUSKIE");
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_NORTHERN_PIKE_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_NORTHERN_PIKE");
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_PERCH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_PERCH");
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_REDFIN_PICKEREL");
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_ROCK_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_ROCK_BASS");
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_SMALLMOUTH_BASS");
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_SOCKEYE_SALMON");
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_STEELHEAD_TROUT");
			}
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_PROVISION_FOR_FISH unknown enum ", func_134(iParam0, 0));
			DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_PROVISION_FOR_FISH: unknown enum");
			break;
	}
	return iVar0;
}

bool func_470(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_230(bParam0, 0, 0, 0);
	iVar1 = func_559(bParam0, 0);
	DEBUG::_0xA308F935BDECCEC0(136, 124, "FISHING: inventory - FISHING_IS_ITEM_FULL_IN_SATCHEL iItemCount ", iVar0, " iMaxCount ", iVar1);
	return iVar0 >= iVar1;
}

void func_471(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 ptfx water drip already exists so can't create it");
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1903123.f_5.f_7))
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 ptfx water drip can't be created because HookedEntity doesn't exist");
		return;
	}
	uParam0->f_19 = 0f;
	func_98(&(uParam0->f_20));
	uParam0->f_18 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_mg_fishing_drips", Global_1903123.f_5.f_7, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_1903123.f_5.f_7, "SKEL_Tail5"), 1065353216 /* Float: 1f */, 0, 0, 0);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_18, "fade", uParam0->f_19, false);
	DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 ptfx water drip started");
}

bool func_472(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE"))
	{
		return true;
	}
	return false;
}

bool func_473(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_WORM") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH"))
	{
		return true;
	}
	return false;
}

bool func_474(int iParam0)
{
	if ((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 8)
	{
		return true;
	}
	return false;
}

char* func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_BLUEGILL_DESC";
		case 1:
			return "PROVISION_BULHDCATFSH_DESC";
		case 2:
			return "PROVISION_CHNPKRL_DESC";
		case 3:
			return "PROVISION_CHNCATFSH_DESC";
		case 4:
			return "PROVISION_LKSTURG_DESC";
		case 5:
			return "PROVISION_LRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_MUSKIE_DESC";
		case 8:
			return "PROVISION_NPIKE_DESC";
		case 9:
			return "PROVISION_PERCH_DESC";
		case 10:
			return "PROVISION_RDFNPCKREL_DESC";
		case 11:
			return "PROVISION_ROCKBASS_DESC";
		case 12:
			return "PROVISION_SMLMTHBASS_DESC";
		case 13:
			return "PROVISION_SCKEYESAL_DESC";
		case 14:
			return "PROVISION_FISH_STHDTROUT_DESC";
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_TEXT_DESCRIPTION_FOR_FISH_TYPE unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_TEXT_DESCRIPTION_FOR_FISH_TYPE: unknown enum");
	return "";
}

void func_476(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_560(uParam0, uParam1);
	iVar1 = func_82(uParam0);
	if (!func_133(iVar1))
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: xp gain - couldn't add xp because fish ", iVar1, " isn't valid");
		return;
	}
	func_562(func_561(uParam0, uParam1, iVar0, iVar1));
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: xp gain - ", func_563(func_561(uParam0, uParam1, iVar0, iVar1), 0));
}

bool func_477(var uParam0, int iParam1)
{
	if (uParam0->f_340[iParam1] == 1)
	{
		return false;
	}
	return true;
}

bool func_478(int iParam0, bool bParam1)
{
	if (bParam1 && !func_248(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 145, "IS_USE_CONTEXT_ENABLED - Invalid context! Returning false.");
		return false;
	}
	return !func_529(iParam0, 4);
}

bool func_479()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_211() != 0)
	{
		return true;
	}
	if (func_564())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_565() };
	if (func_566(Var0))
	{
		return false;
	}
	Var2 = { func_567() };
	if (func_566(Var2))
	{
		return false;
	}
	return true;
}

bool func_480(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900777.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900777.f_68;
		}
		if (func_564())
		{
			return true;
		}
		if (Global_1072032.f_3 && !Global_1572887.f_9)
		{
			if ((Global_1056487[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900777.f_67;
		}
		else
		{
			return Global_1900777.f_68;
		}
	}
	if (iParam0 == 0 && func_566(func_568(0)))
	{
		return true;
	}
	if ((Global_1940410 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900912)
		{
			return true;
		}
	}
	switch (func_569(func_568(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

char* func_481(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_482(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_570(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_484(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_485(int iParam0)
{
	if (!func_571(iParam0))
	{
		return false;
	}
	return func_572(iParam0);
}

struct<7> func_486(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_487(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_488(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_368(bParam4), sParam0, bParam3, iParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(174216, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Created collection '", *iParam1, "' with size ", *iParam2, " from predicate '", sParam0, "' with ", func_508(bParam3, 0));
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION - Failed to create collection from predicate '", sParam0, "'");
	return false;
}

bool func_489(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Collection ID is invalid! Make sure to call PLAYER_INVENTORY_CREATE_ITEM_COLLECTION first!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - Index is invalid.  Index: ", iParam1, " Size: ", iParam3);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_BY_COLLECTION_INDEX - failed to read data for index ", iParam1);
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

bool func_490(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_491(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_RELEASE_ITEM_COLLECTION - Failed to release collection!");
		return 0;
	}
	return 1;
}

int func_492(bool bParam0)
{
	struct<2> Var0;

	if (!func_369(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_493(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case -28107610:
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_LAYER_TYPE_FROM_NONE_LAYER] Failed none layer for hash: ", UNK_0x4379B6FA65D55295(bParam0));
	return 0;
}

int func_494(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	DEBUG::_0x9A6C65DDDBEC9C52(40, 208, "[METAPED_SAVE__OVERLAY_FIND_LAYER_BY_TYPE] Failed to find: ", func_573(iParam1, 0));
	return -1;
}

int func_495(bool bParam0)
{
	int iVar0;

	iVar0 = func_492(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		case 1115104855:
			return -2118203104;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 208, "[METAPED_CLOTHING_OVERLAY_GET_MAKEUP_LAYER_TYPE_FROM_IVENTORY_ITEM] Failed not get a layer type from: ", func_225(bParam0, 0));
	return 0;
}

var func_496(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(126614033);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_497(int iParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PUSH_AWARD_MODIFIER: Failed to push modifier ", func_574(bParam1, 0), ", array is full");
		return;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PUSH_AWARD_MODIFIER: Adding modifier ", func_574(bParam1, 0));
}

void func_498(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_575(uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 205, "ADD_AWARD_TRANSACTION_DATA - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_2012 < 20)
	{
		Global_1272425.f_2012++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_2012.f_1[iVar0 /*24*/] = { Global_1272425.f_2012.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1272425.f_2012.f_1[(Global_1272425.f_2012 - 1) /*24*/] = { Var1 };
	DEBUG::_0xA308F935BDECCEC0(40, 205, "ADD_AWARD_TRANSACTION_DATA - Added transaction data for: ", SCRIPTS::_NET_RPC_GUID_TO_STRING(uParam0));
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eAward:                         ", func_496(Var1.f_4, 0));
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_TRANSACTION_DATA -   eStatus:                        ", func_576(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7.f_13);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_TRANSACTION_DATA -   sHandlerData.piOverheadPlayer:  ", Var1.f_7.f_16);
}

struct<4> func_499(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_368(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1272425))
			{
				Global_1272425 = { func_375(joaat("CHARACTER"), func_577(), -1591664384, bParam0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&Global_1272425));
			}
			return Global_1272425;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_12)))
			{
				Global_1272425.f_12 = { func_375(joaat("CHARACTER"), func_577(), -1591664384, 0) };
				DEBUG::_0xA308F935BDECCEC0(40, 157, "GET_PLAYER_INVENTORY_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionInventoryGUID is not cached yet, setting to ", UNK_0xD2E4270E5D98EEE4(&(Global_1272425.f_12)));
			}
			return Global_1272425.f_12;
		}
	}
	return func_375(joaat("CHARACTER"), func_577(), -1591664384, bParam0);
}

char* func_500(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UPGRADE"):
			return "CI_ITEMGROUP_UPGRADE";
		case joaat("COACH"):
			return "CI_ITEMGROUP_COACH";
		case joaat("HORSE_EQUIPMENT"):
			return "CI_ITEMGROUP_HORSE_EQUIPMENT";
		case joaat("DOG"):
			return "CI_ITEMGROUP_DOG";
		case joaat("COUPON"):
			return "CI_ITEMGROUP_COUPON";
		case joaat("HORSE"):
			return "CI_ITEMGROUP_HORSE";
		case joaat("EMOTE"):
			return "CI_ITEMGROUP_EMOTE";
		case joaat("MONEY"):
			return "CI_ITEMGROUP_MONEY";
		case joaat("PROPERTY"):
			return "CI_ITEMGROUP_PROPERTY";
		case joaat("CURRENCY"):
			return "CI_ITEMGROUP_CURRENCY";
		case joaat("CLOTHING"):
			return "CI_ITEMGROUP_CLOTHING";
		case joaat("WEAPON_MOD"):
			return "CI_ITEMGROUP_WEAPON_MOD";
		case joaat("VEHICLE"):
			return "CI_ITEMGROUP_VEHICLE";
		case joaat("PROVISION"):
			return "CI_ITEMGROUP_PROVISION";
		case joaat("WEAPON"):
			return "CI_ITEMGROUP_WEAPON";
		case joaat("PRECIOUS_METAL"):
			return "CI_ITEMGROUP_PRECIOUS_METAL";
		case 0:
			return "CI_ITEMGROUP_INVALID";
		case joaat("FEE"):
			return "CI_ITEMGROUP_FEE";
		case joaat("ACTIVE_CARD"):
			return "CI_ITEMGROUP_ACTIVE_CARD";
		case joaat("AMMO"):
			return "CI_ITEMGROUP_AMMO";
		case 311306500:
			return "CI_ITEMGROUP_PURCHASABLE_AWARD";
		case joaat("WEAPON_DECORATION"):
			return "CI_ITEMGROUP_WEAPON_DECORATION";
		case joaat("KIT"):
			return "CI_ITEMGROUP_KIT";
		case joaat("ABILITY_CARD"):
			return "CI_ITEMGROUP_ABILITY_CARD";
		case 1194991665:
			return "CI_ITEMGROUP_COACHMOD";
		case joaat("GOLD"):
			return "CI_ITEMGROUP_GOLD";
		case joaat("COMPONENT"):
			return "CI_ITEMGROUP_COMPONENT";
		case 1417470098:
			return "CI_ITEMGROUP_VOUCHER";
		case joaat("MINIGAME"):
			return "CI_ITEMGROUP_MINIGAME";
		case joaat("ADVERT"):
			return "CI_ITEMGROUP_ADVERT";
		case joaat("DOCUMENT"):
			return "CI_ITEMGROUP_DOCUMENT";
		case joaat("CORE_ITEM"):
			return "CI_ITEMGROUP_CORE_ITEM";
		case joaat("CONSUMABLE"):
			return "CI_ITEMGROUP_CONSUMABLE";
		case joaat("PASSIVE_CARD"):
			return "CI_ITEMGROUP_PASSIVE_CARD";
		case joaat("CAMP"):
			return "CI_ITEMGROUP_CAMP";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

struct<4> func_501(bool bParam0)
{
	int iVar0;

	iVar0 = func_368(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_4)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_4 = { func_375(923904168, func_499(bParam0), -740156546, bParam0) };
		}
		return Global_1272425.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_16)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_WEAPON_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sMissionWeaponWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_16 = { func_375(923904168, func_499(bParam0), -740156546, 0) };
		}
		return Global_1272425.f_16;
	}
	return func_375(923904168, func_499(bParam0), -740156546, 0);
}

bool func_502(bool bParam0, bool bParam1)
{
	if (func_492(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_578();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_503(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_579(bParam0, *uParam1, iParam2, bParam3, 1, bParam4) > 0;
}

bool func_504(bool bParam0, var uParam1, bool bParam2)
{
	var uVar0;

	if (func_580(bParam0, &uVar0, uParam1, bParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_505(bool bParam0)
{
	int iVar0;

	iVar0 = func_368(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272425.f_8)))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 157, "GET_PLAYER_INVENTORY_EMOTE_WHEEL_GUID - g_mpCashInventoryLocalData.sGUIDCache.sEmoteWheelGUID is not cached yet, finding the root inventory GUID!");
			Global_1272425.f_8 = { func_375(271701509, func_499(bParam0), 12999093, 0) };
		}
		return Global_1272425.f_8;
	}
	return func_375(271701509, func_499(bParam0), 12999093, 0);
}

bool func_506(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	bVar1 = func_492(bParam0);
	if (bVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(bVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(bVar1, iVar2, &iVar0))
		{
			if (func_581(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_507(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_582(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

var func_508(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1767793931);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_509(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE") || iParam0 == joaat("UPGRADE_FSH_BAIT_WORM")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_510(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_511(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_CORN") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

int func_512(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
		case 239629152:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			}
			break;
	}
	return 0;
}

bool func_513(bool bParam0, bool bParam1)
{
	if (!func_369(bParam0, 0))
	{
		return func_583(func_518(bParam0), bParam1);
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_PROPERTY_TAG] Found tag ", func_584(bParam1, 0), " for item ", func_225(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

void func_514(bool bParam0, bool bParam1, var uParam2)
{
	*bParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*bParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*bParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*bParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*bParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*bParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*bParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*bParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*bParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*bParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*bParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*bParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*bParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_515(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - Item:      ", func_225(bParam0, 0));
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eSlot:     ", func_508(bParam1, 0));
	}
	if (bParam2 != 0 && bParam2 != -1591664384)
	{
		Var0.f_2 = bParam2;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eFitsSlot: ", func_508(bParam2, 0));
	}
	if (bParam3 != 0 && bParam3 != -1591664384)
	{
		Var0.f_3 = bParam3;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eHasSlot:  ", func_508(bParam3, 0));
	}
	if (bParam4 != 0)
	{
		Var0.f_4 = bParam4;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eCategory: ", func_585(bParam4, 0));
	}
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemTag:  ", UNK_0x4379B6FA65D55295(bParam5));
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_FILTER - eItemGroup:  ", func_500(iParam6, 0));
	}
	return Var0;
}

void func_516(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
		DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_ADD_ITEM_COLLECTION_FILTER_PARENT_GUID - sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1));
	}
}

bool func_517(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_368(bParam3), uParam0, sParam2);
	if (*iParam1 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Created collection '", *iParam1, "' with size ", *sParam2, " from filter");
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER - Failed to create collection from filter");
	return false;
}

bool func_518(bool bParam0)
{
	return bParam0;
}

bool func_519(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(bParam0, iParam1);
}

bool func_520(int iParam0)
{
	return func_529(iParam0, 2);
}

float func_521(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_522(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "SET_PED_HAT_VISIBLE: pedIndex is dead");
		return;
	}
	if (bParam1)
	{
		PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HATS"), 0, 1);
	}
	else
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_523(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 25, "HORSE_ADD_META_PED_OUTFIT_SADDLE - pedMount doesn't exist.");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 25, "HORSE_ADD_META_PED_OUTFIT_SADDLE - pedMount is dead or injured.");
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_524(char* sParam0, int iParam1)
{
	DEBUG::_0xA308F935BDECCEC0(648, 28, "HORSE_SET_GENDER - pedHorse: ", sParam0, " eGender = ", func_586(iParam1, 0));
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(sParam0, 41611, 1f);
	}
}

float func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5f;
		case 1:
			return 0.5f;
		case 2:
			return 0.5f;
		case 3:
			return 14f;
		case 4:
			return 14f;
		case 5:
			return 4f;
		case 6:
			return 14f;
		case 7:
			return 14f;
		case 8:
			return 14f;
		case 9:
			return 0.5f;
		case 10:
			return 0.5f;
		case 11:
			return 0.5f;
		case 12:
			return 4f;
		case 13:
			return 4f;
		case 14:
			return 4f;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_MINIMUM_REGULAR_FISH_WEIGHT unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_MINIMUM_REGULAR_FISH_WEIGHT: unknown enum");
	return 0f;
}

bool func_526()
{
	return (func_587(1) || func_587(4));
}

float func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2f;
		case 1:
			return 2f;
		case 2:
			return 2f;
		case 3:
			return 20f;
		case 4:
			return 20f;
		case 5:
			return 6f;
		case 6:
			return 20f;
		case 7:
			return 20f;
		case 8:
			return 20f;
		case 9:
			return 2f;
		case 10:
			return 2f;
		case 11:
			return 2f;
		case 12:
			return 6f;
		case 13:
			return 6f;
		case 14:
			return 6f;
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_MAXIMUM_REGULAR_FISH_WEIGHT unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_MAXIMUM_REGULAR_FISH_WEIGHT: unknown enum");
	return 0f;
}

float func_528(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_529(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1952230[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_530(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1952230[iParam0 /*23*/].f_4 = iParam1;
	Global_1952230[iParam0 /*23*/] = iParam4;
	Global_1952230[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1952230[iParam0 /*23*/].f_2 = iParam5;
	Global_1952230[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1952230[iParam0 /*23*/].f_9 = fParam9;
	Global_1952230[iParam0 /*23*/].f_10 = iParam10;
	Global_1952230[iParam0 /*23*/].f_11 = iParam11;
	Global_1952230[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1952230[iParam0 /*23*/].f_5 = iParam12;
	Global_1952230[iParam0 /*23*/].f_1 = 2;
	Global_1952230[iParam0 /*23*/].f_17 = -1;
	Global_1952230[iParam0 /*23*/].f_18 = iParam16;
	Global_1952230[iParam0 /*23*/].f_19 = iParam15;
	Global_1952230[iParam0 /*23*/].f_20 = bParam25;
	Global_1952230[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1952230[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1952230[iParam0 /*23*/].f_3 = iVar0;
	func_532(iParam0, 1);
	func_533(iParam0, 1);
	func_534(iParam0, 128);
	DEBUG::_0xA308F935BDECCEC0(680, 145, "USE_CONTEXT_CREATE_PROMPT ", sParam2, " mode ", func_588(iParam14, 0));
}

void func_531(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 - (Global_1952230[iParam0 /*23*/].f_1 && iParam1));
}

void func_532(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		if (Global_1952230[iParam0 /*23*/].f_5 == 5 && !func_529(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1952230[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_533(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1952230[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1952230[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_534(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1952230[iParam0 /*23*/].f_1 = (Global_1952230[iParam0 /*23*/].f_1 || iParam1);
}

bool func_535(var uParam0, var uParam1, int iParam2)
{
	if ((func_112(uParam0->f_82[41]) || func_112(uParam0->f_82[42])) || func_112(uParam0->f_82[35]))
	{
		return false;
	}
	if (iParam2 == 1)
	{
		if (uParam1->f_54 == 0)
		{
			if (Global_1903123.f_5.f_4 > 0.9f)
			{
				return false;
			}
		}
		else if ((!func_139() && func_56(&(uParam0->f_15))) && func_57(&(uParam0->f_15)) > 2000)
		{
			return false;
		}
	}
	if ((((((Global_1903123.f_5 != 6 || func_61(uParam1, 4096)) || !func_56(&(uParam1->f_203))) || func_171(&(uParam1->f_203)) <= IntToFloat(uParam1->f_165)) || func_589()) || !func_590(uParam1)) || (ENTITY::DOES_ENTITY_EXIST(func_150()) && func_412(func_151())))
	{
		return false;
	}
	return true;
}

float func_536(var uParam0, int iParam1)
{
	return func_591(uParam0, iParam1);
}

bool func_537(var uParam0, int iParam1)
{
	return (func_590(uParam0) && uParam0->f_15 > func_400(func_397(iParam1)));
}

float func_538(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (!func_226(iParam2))
	{
		return 0f;
	}
	fVar0 = 0f;
	iVar1 = func_592(iParam1);
	bVar2 = COMPENDIUM::COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM(iVar1, iParam2);
	switch (bVar2)
	{
		case joaat("OUTSTANDING"):
			fVar0 = 4f;
			break;
		case joaat("EXCELLENT"):
			fVar0 = 3f;
			break;
		case joaat("GOOD"):
			fVar0 = 2f;
			break;
		case joaat("NORMAL"):
			fVar0 = 1f;
			break;
		case joaat("BAD"):
			fVar0 = 0.5f;
			break;
		case 0:
			fVar0 = 0f;
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_BAIT_SUITABILITY_FOR_SPECIES unknown suitability enum ", func_593(bVar2, 0));
			DEBUG::_0x83407B92D46F25C3(40, 124, "FISHING_GET_BAIT_SUITABILITY_FOR_SPECIES: unknown suitability enum", func_593(bVar2, 0));
			break;
	}
	if (fVar0 > 0f && uParam0->f_48 != -1)
	{
		if (func_232(Global_38.f_5807) || func_233(Global_38.f_5807))
		{
			if (((uParam0->f_48 == 0 && func_509(Global_38.f_5807)) || (uParam0->f_48 == 1 && func_510(Global_38.f_5807))) || (uParam0->f_48 == 2 && func_511(Global_38.f_5807)))
			{
				fVar0 = func_594(fVar0);
			}
		}
	}
	return fVar0;
}

void func_539(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::_0x88AD6CC10D8D35B2(uParam1->f_123[iParam2]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, true);
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: fish ", iParam2, " wasn't owned by thread so set as mission entity - FISHING_SET_FISH_AS_LURED Fish_Prevent_Tasking ", DECORATOR::DECOR_GET_BOOL(uParam1->f_123[iParam2], "Fish_Prevent_Tasking"));
		return;
	}
	func_49(uParam0, uParam1, iParam2);
	DEBUG::_0xF0783374333FD8CE(6792, 124, "FISHING: participant 0 lured fish ", iParam2, " type ", func_134(Global_1903123.f_37, 0), " weight ", Global_1903123.f_38);
	func_154(uParam1, iParam2, 5);
	uParam0->f_156 = 0;
	uParam0->f_163 = 0;
	func_266(uParam1, iParam2);
	DECORATOR::DECOR_SET_BOOL(uParam1->f_123[iParam2], "Fish_Prevent_Tasking", true);
}

bool func_540(var uParam0, var uParam1)
{
	if ((func_595(uParam0, uParam1) && func_56(&(uParam0->f_160))) && func_57(&(uParam0->f_160)) > uParam0->f_166)
	{
		DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 did not try to hook fish");
		return true;
	}
	if (func_340(1))
	{
		return true;
	}
	return false;
}

bool func_541(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_82(uParam0);
	if ((func_133(iVar0) && func_66(uParam1->f_247[iVar0])) && uParam0->f_156 < uParam1->f_800[uParam1->f_247[iVar0] /*10*/])
	{
		if (!func_56(&(uParam0->f_160)) || func_159(&(uParam0->f_160)) >= uParam0->f_164)
		{
			return true;
		}
	}
	return false;
}

int func_542(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_82(uParam0);
	if ((func_133(iVar0) && func_66(uParam1->f_247[iVar0])) && uParam1->f_800[uParam1->f_247[iVar0] /*10*/].f_1[uParam0->f_156] == 1)
	{
		return 1;
	}
	return 0;
}

int func_543(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_82(uParam0);
	if (!func_133(iVar0) || uParam0->f_163 == 0)
	{
		return uParam1->f_955;
	}
	iVar1 = uParam1->f_956;
	switch (uParam1->f_309[iVar0])
	{
		case 0:
			iVar1 = uParam1->f_956;
			break;
		case 1:
			iVar1 = uParam1->f_957;
			break;
		case 2:
			iVar1 = uParam1->f_958;
			break;
		case 3:
			iVar1 = uParam1->f_959;
			break;
		case 4:
			iVar1 = uParam1->f_960;
			break;
	}
	if (uParam0->f_54 == 1)
	{
		iVar1 = (iVar1 + uParam1->f_961);
	}
	return iVar1;
}

int func_544(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_163 == 0)
	{
		return 1;
	}
	iVar0 = func_82(uParam0);
	fVar1 = (func_596(uParam1, iVar0) * 100f);
	return (150 + BUILTIN::ROUND(fVar1));
}

int func_545(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam0->f_166;
	if (uParam0->f_163 == 0)
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_951, uParam1->f_952));
	}
	else
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_953, uParam1->f_954));
	}
	return iVar0;
}

void func_546(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	iVar0 = func_82(uParam1);
	if (!func_133(iVar0))
	{
		return;
	}
	if (uParam1->f_163 == 1)
	{
		sVar1 = "LARGE_BITE";
		sVar2 = "LARGE_BITE_ROD";
	}
	else
	{
		sVar1 = "SMALL_BITE";
		sVar2 = "SMALL_BITE_ROD";
	}
	iVar3 = func_597(uParam1);
	if (iVar3 > -1)
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_57[iVar3], sVar1, func_147(), *uParam0, false, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_57[iVar3], "FishSize", uParam2->f_278[iVar0]);
	}
	iVar3 = func_598(uParam1);
	if (iVar3 > -1)
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_62[iVar3], sVar2, PLAYER::PLAYER_PED_ID(), *uParam0, false, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_62[iVar3], "FishSize", uParam2->f_278[iVar0]);
	}
}

void func_547(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	if ((uParam1->f_54 == 0 && ENTITY::DOES_ENTITY_EXIST(func_147())) && uParam1->f_12 > -0.05f)
	{
		iVar0 = func_82(uParam1);
		if (func_133(iVar0))
		{
			vVar1 = { func_148() };
			vVar4 = { vVar1 };
			vVar4.f_2 = (vVar4.z - 1f);
			vVar7 = { func_448(vVar4 - vVar1) };
			if (uParam1->f_163 == 1)
			{
				fVar10 = uParam0->f_50;
			}
			else
			{
				fVar10 = uParam0->f_51;
			}
			vVar11 = { vVar7 * Vector(fVar10, fVar10, fVar10) };
			ENTITY::APPLY_FORCE_TO_ENTITY(func_147(), 3, vVar11, 0f, 0f, 0f, 0, false, true, true, false, true);
		}
	}
}

bool func_548(int iParam0, bool bParam1)
{
	if (bParam1 && !func_248(iParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 145, "IS_USED_CONTEXT_DISABLED - Invalid context!");
		return true;
	}
	return func_529(iParam0, 4);
}

char* func_549(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_CONSUME_BAIT_NONE";
		case 1:
			return "FISHING_CONSUME_BAIT_MISSED_BITE";
		case 2:
			return "FISHING_CONSUME_BAIT_FISH_ESCAPED";
		case 3:
			return "FISHING_CONSUME_BAIT_FISH_CAUGHT";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_550(bool bParam0)
{
	if (func_231(bParam0))
	{
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: inventory - not removing ", func_225(bParam0, 0), " as it is an infinite bait item");
		return;
	}
	if (func_599(bParam0, 1, 0, -142743235))
	{
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: inventory - remove ", func_225(bParam0, 0), " succeeded");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: inventory - remove ", func_225(bParam0, 0), " failed due to REMOVE_PLAYER_SATCHEL_ITEM");
	}
}

bool func_551(var uParam0)
{
	int iVar0;

	if (func_192(16))
	{
		return false;
	}
	if (func_472(Global_38.f_5807) || func_473(Global_38.f_5807))
	{
		return true;
	}
	if (func_232(Global_38.f_5807))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (iVar0 <= uParam0->f_175)
		{
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 fish should escape with bait, iReelingInBadly ", uParam0->f_175, " iRandom ", iVar0);
			return true;
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: participant 0 fish shouldn't escape with bait, iReelingInBadly ", uParam0->f_175, " iRandom ", iVar0);
			return false;
		}
	}
	return false;
}

bool func_552(int iParam0)
{
	if ((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_553(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (uParam1->f_173 > 0)
	{
		if (!func_56(&(uParam1->f_209)) || func_159(&(uParam1->f_209)) > uParam0->f_55)
		{
			func_98(&(uParam1->f_209));
			if (func_86(uParam2, iParam3))
			{
				iVar0++;
			}
			else
			{
				iVar0 += 2;
			}
			uParam1->f_173 = (uParam1->f_173 - iVar0);
		}
	}
}

bool func_554()
{
	return Global_1903123.f_5.f_2 > (IntToFloat(func_600()) - 0.1f);
}

void func_555(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0->f_54;
	if (func_288(uParam1) && (!func_56(&(uParam1->f_206)) || func_159(&(uParam1->f_206)) > iVar0))
	{
		func_98(&(uParam1->f_206));
		iVar1 = func_82(uParam1);
		if (func_133(iVar1))
		{
			iVar2 = 1;
			if (func_554())
			{
				func_298(uParam0, 40, 1, -2, 1);
			}
			if (func_139())
			{
				if (func_552(uParam2->f_247[iVar1]))
				{
					iVar2 += 2;
				}
				else
				{
					iVar2++;
				}
			}
			if (uParam1->f_176 == 0 && uParam1->f_173 > 75)
			{
				uParam1->f_176 = 1;
				uParam1->f_175++;
				DEBUG::_0xF0783374333FD8CE(8, 124, "FISHING: participant 0 iReelingInBadly ", uParam1->f_175);
			}
			iVar2 = (iVar2 + uParam1->f_175);
			uParam1->f_173 = (uParam1->f_173 + iVar2);
		}
	}
}

struct<2> func_556(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_557(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<2> Var5;
	var uVar17;
	struct<15> Var21;

	iVar0 = func_82(uParam0);
	if (!func_133(iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(136, 124, "FISHING: inventory - couldn't add provision because fish ", iVar0, " isn't valid");
		return;
	}
	iVar1 = func_468(uParam0);
	bVar2 = func_469(uParam1->f_247[iVar0], iVar1);
	if (uParam1->f_309[iVar0] == 4)
	{
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: inventory - didn't add ", func_225(bVar2, 0), " because fish size is large");
		return;
	}
	else if (func_470(bVar2))
	{
		DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: inventory - didn't add ", func_225(bVar2, 0), " because satchel is full");
		return;
	}
	if (!func_220(0) || func_221())
	{
		bVar3 = func_601(uParam1->f_247[iVar0]);
		bVar4 = func_602(iVar1);
		Var5.f_1 = 10;
		func_603(&Var5, bVar4);
		if (func_604(bVar3, &Var5, &uVar17, 0, 0))
		{
			Var21.f_3.f_1 = 10;
			Var21.f_1 = uParam1->f_278[iVar0];
			func_605(&uVar17, Var21);
			DEBUG::_0xF0783374333FD8CE(680, 124, "FISHING: Loot request succeeded for fish ", func_134(uParam1->f_247[iVar0], 0), " with loot table ", HUD::_GET_LABEL_TEXT_BY_HASH(bVar3));
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(680, 124, "FISHING: Loot request failed for for fish ", func_134(uParam1->f_247[iVar0], 0), " with loot table ", HUD::_GET_LABEL_TEXT_BY_HASH(bVar3));
		}
		return;
	}
	func_606(bVar2, uParam1->f_278[iVar0]);
}

void func_558(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_607(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - exiting, you didn't provide a valid type");
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - Invalid Type provided. Use a valid type");
		return;
	}
	if (func_608(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - set to ignore this frame. exiting");
		return;
	}
	if (!func_609(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - __PERSONA_REPUTATION__GET__HAS_PLAYER_INTERACTED_WITH_TYPE:");
		return;
	}
	iVar0 = iParam0;
	iVar1 = func_610(iParam1);
	DEBUG::_0x1B08D1EB9D8C4931(168, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - eReason:", func_611(iParam1, 0), " iReason: ", iVar1);
	if (iVar1 == 0 || iParam1 == -1)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - exiting, you didn't provide a valid reason or the reason doesn't have a value");
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - Invalid reason provided or reason has no value. Use a valid reason");
		return;
	}
	iVar2 = (Global_1139844.f_5701[iVar0] + iVar1);
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - iNewScore:", iVar2);
	if (Global_1139844.f_5701[iVar0] <= (Global_1901988.f_812.f_1 + Global_1901988.f_812.f_3))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - We're already at minimum, we can't go down any farther. Setting to minimum");
		iVar2 = (Global_1901988.f_812.f_1 + Global_1901988.f_812.f_3);
	}
	if (Global_1139844.f_5701[iVar0] >= (Global_1901988.f_812.f_2 + Global_1901988.f_812.f_11))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - We're already at maximum, we can't go up any farther. Setting to maximum");
		iVar2 = (Global_1901988.f_812.f_2 + Global_1901988.f_812.f_11);
	}
	if (func_612(iParam0, iVar2))
	{
		iVar3 = func_613(iVar2);
		iVar4 = func_614(iVar3);
		DEBUG::_0xA308F935BDECCEC0(168, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - We've crossed the threshold for tier:", func_615(iVar3, 0), " setting score to:", iVar4);
		iVar2 = iVar4;
	}
	if (func_616(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - __PERSONA_REPUTATION__IS_DECREASE_TIER_LIMIT_REACHED:");
		return;
	}
	func_617(iParam0, iVar2);
	DEBUG::_0xA308F935BDECCEC0(136, 84, "PERSONA_REPUTATION__UPDATE_REPUTATION - setting cached value from:", Global_1139844.f_5701[iVar0], " to:", iVar2);
	Global_1139844.f_5701[iVar0] = iVar2;
}

int func_559(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_374(bParam0, 0, 0) };
	return func_618(bParam0, &Var0, 0, bParam1);
}

int func_560(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_82(uParam0);
	if (!func_133(iVar0))
	{
		return 15;
	}
	return uParam1->f_247[iVar0];
}

int func_561(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_468(uParam0);
	if (iVar0 == 1 || uParam1->f_340[iParam3] == 1)
	{
		return 12;
	}
	else if (func_552(iParam2))
	{
		return 13;
	}
	return 12;
}

int func_562(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_619())
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL__MP__GAIN_PRIMARY_ATTRIBUTE_EXPERIENCE] - Attempted to grant XP Award: ", func_563(iParam0, 0), " but the Override System is enabled. Bailing... ");
		return 0;
	}
	if (!NETWORK::_0xDD73C9838CE7181D())
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL__MP__GAIN_PRIMARY_ATTRIBUTE_EXPERIENCE - Failed to grant XP Award: ", func_563(iParam0, 0), ".  Intro is not yet complete. Bailing...");
		return 0;
	}
	if (func_620())
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL__MP__GAIN_PRIMARY_ATTRIBUTE_EXPERIENCE - Failed to grant XP Award: ", func_563(iParam0, 0), ". Player is an animal.");
		return 0;
	}
	iVar0 = func_621(iParam0);
	iVar1 = func_622(iVar0, 2);
	if (iVar1 >= 5)
	{
		DEBUG::_0xF0783374333FD8CE(168, 84, "RPG_GLOBAL__MP__GAIN_PRIMARY_ATTRIBUTE_EXPERIENCE] - Attribute: ", func_623(iVar0, 0), " is already max level. Bailing... ");
		return 0;
	}
	DEBUG::_0xF0783374333FD8CE(680, 84, "RPG_GLOBAL__MP__GAIN_PRIMARY_ATTRIBUTE_EXPERIENCE - Attempting to grant XP Award: ", func_563(iParam0, 0), " to Attribute: ", func_623(iVar0, 0));
	if (!func_223(func_624(iParam0), 0, 255, 0, 0))
	{
		DEBUG::_0x6D2A5155B260E879(168, 84, "RPG_GLOBAL__MP__GAIN_PRIMARY_ATTRIBUTE_EXPERIENCE - Attempting to grant XP Award: ", func_563(iParam0, 0), " has FAILED... Fix this immediately... ");
		return 0;
	}
	return 1;
}

char* func_563(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RPG_GLOBAL_AWARD_NULL";
		case 1:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_JUMP";
		case 2:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_ROW";
		case 3:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_MELEE_KILL";
		case 4:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_MELEE_KNOCK_OUT";
		case 5:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_THROWING_KILL";
		case 6:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_BOW_KILL";
		case 7:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_BOW_HEADSHOT";
		case 8:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_FREE_AIM_BOW_KILL";
		case 9:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_FREE_AIM_BOW_KILL_HEADSHOT";
		case 10:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_THROWING_HIT";
		case 11:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_BOW_HIT";
		case 12:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_FISHING_1";
		case 13:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_FISHING_2";
		case 14:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_FISHING_3";
		case 15:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_STEALTH_KILL";
		case 16:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_STEALTH_KO";
		case 17:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_CLEAN_KILL";
		case 18:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_SP_ONLY_GENERIC_HELP_STRANGER";
		case 19:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_SP_ONLY_GINSENG";
		case 20:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_SP_ONLY_CHAL_FIRST";
		case 21:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_SP_ONLY_CHAL_SECOND";
		case 22:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_SP_ONLY_CHAL_THIRD";
		case 23:
			return "RPG_GLOBAL_AWARD_HEALTH_XP_SP_ONLY_CHAL_FOURTH";
		case 24:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_CLOSE_CALL";
		case 25:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_CLOSE_CALL_EXPLOSION";
		case 26:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_ESCAPE_LAW";
		case 27:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_RUN";
		case 28:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_SWIM";
		case 29:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_SP_ONLY_GENERIC_HELP_STRANGER";
		case 30:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_SP_ONLY_PIRATE_RUM";
		case 31:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_SP_ONLY_CHAL_FIRST";
		case 32:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_SP_ONLY_CHAL_SECOND";
		case 33:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_SP_ONLY_CHAL_THIRD";
		case 34:
			return "RPG_GLOBAL_AWARD_STAMINA_XP_SP_ONLY_CHAL_FOURTH";
		case 35:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_DISTANCE_HEADSHOT_25";
		case 36:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_DISTANCE_HEADSHOT_50";
		case 37:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_FREE_AIM_KILL";
		case 38:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_FREE_AIM_HEADSHOT";
		case 39:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_CRAFT";
		case 40:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_COOK";
		case 41:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SKINNING_1";
		case 42:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SKINNING_2";
		case 43:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SKINNING_3";
		case 44:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_TITHING";
		case 45:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_CHORE";
		case 46:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_KNIFE_THROWING";
		case 47:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_TARGET_PRACTICE";
		case 48:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_COLLECTABLE";
		case 49:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_GENERIC_HELP_STRANGER";
		case 50:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_VALERIAN_ROOT";
		case 51:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_CHAL_FIRST";
		case 52:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_CHAL_SECOND";
		case 53:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_CHAL_THIRD";
		case 54:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_SP_ONLY_CHAL_FOURTH";
		case 55:
			return "RPG_GLOBAL_AWARD_DEADEYE_XP_MP_ONLY_PLAYER_KILL";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_564()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_566(Global_1051214) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_565()
{
	return Global_1051214;
}

bool func_566(struct<2> Param0)
{
	if (!func_625(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_626(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_567()
{
	if (Global_1196676.f_129 <= 0)
	{
		return func_568(0);
	}
	if (Global_1196676.f_130 < 0 || Global_1196676.f_131 == 0)
	{
		return func_568(0);
	}
	return Global_1196676[Global_1196676.f_130 /*4*/].f_1;
}

struct<2> func_568(int iParam0)
{
	return Global_1900777.f_1[iParam0 /*2*/];
}

int func_569(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_570(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_627(iParam3, &vVar0, &Var3, &uVar6);
	if (func_628(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_571(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_572(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3647[iVar1], iVar2);
}

char* func_573(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137717153:
			return "MPC_OVERLAY_LAYER_END";
		case -2118203104:
			return "MPC_OVERLAY_LAYER_FACIAL_HAIR";
		case -2056583192:
			return "MPC_OVERLAY_LAYER_FOUNDATION";
		case -1811760631:
			return "MPC_OVERLAY_LAYER_HEAD_HAIR";
		case -1180698265:
			return "MPC_OVERLAY_LAYER_COMPLEXION";
		case -1177453988:
			return "MPC_OVERLAY_LAYER_ROOT";
		case -875805376:
			return "MPC_OVERLAY_LAYER_EYESHADOW";
		case -768760704:
			return "MPC_OVERLAY_LAYER_LIPSTICK";
		case -559080197:
			return "MPC_OVERLAY_LAYER_FACE_PAINT";
		case -487028314:
			return "MPC_OVERLAY_LAYER_COMPLEXION_2";
		case -340627321:
			return "MPC_OVERLAY_LAYER_EYELINER";
		case 0:
			return "MPC_OVERLAY_LAYER_INVALID";
		case 12857284:
			return "MPC_OVERLAY_LAYER_SKIN_MOTTLING";
		case 241235545:
			return "MPC_OVERLAY_LAYER_FRECKLES";
		case 299749022:
			return "MPC_OVERLAY_LAYER_AGEING";
		case 1015239729:
			return "MPC_OVERLAY_LAYER_BLUSHER";
		case 1089431066:
			return "MPC_OVERLAY_LAYER_EYEBROWS";
		case 1285634184:
			return "MPC_OVERLAY_LAYER_GRIME";
		case 1301555144:
			return "MPC_OVERLAY_LAYER_SPOTS";
		case 1827902148:
			return "MPC_OVERLAY_LAYER_MOLES";
		case 1858448324:
			return "MPC_OVERLAY_LAYER_SCAR";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

var func_574(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-1140065811);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_575(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_576(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "AWARD_STATUS_NONE";
		case 1:
			return "AWARD_STATUS_PENDING";
		case 2:
			return "AWARD_STATUS_SUCCEEDED";
		case 3:
			return "AWARD_STATUS_FAILED";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

struct<4> func_577()
{
	struct<4> Var0;

	return Var0;
}

bool func_578()
{
	return (func_629(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_630(func_375(joaat("WARDROBE"), func_499(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_579(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	if (!bParam7 && func_387(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - ", func_225(bParam0, 0), " doesn't have a default pathset, using supplied slot only");
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		DEBUG::_0x1B08D1EB9D8C4931(43688, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - eInventoryItem: ", func_225(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(&Param1), " eSlot: ", func_508(bParam5, 0), " bPlayerOnly: ", bParam6);
		Var1 = { func_375(bParam0, Param1, bParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Unable to find GUID for item ", func_225(bParam0, 0));
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_368(bParam6), &Var1, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found ", iVar0, " of item ", func_225(bParam0, 0));
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_368(bParam6), bParam0, bParam8);
		DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_ITEM_COUNT - Found total ", iVar0, " of item ", func_225(bParam0, 0));
	}
	return iVar0;
}

bool func_580(bool bParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_368(0);
	*iParam1 = { func_375(bParam0, func_501(0), bParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xF0783374333FD8CE(2728, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] Invalid INVENTORY_ITEM_GUID for ", func_225(bParam0, 0), " eSlot: ", func_508(bParam3, 0), " iPlayerInventoryID: ", iVar0);
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, iParam1, uParam2, 22, 1))
	{
		DEBUG::_0xF0783374333FD8CE(40, 139, "[SHOP_GET_INVENTORY_WEAPON_DATA] We couldn't grab the data for ", func_225(bParam0, 0));
		return false;
	}
	return true;
}

bool func_581(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			DEBUG::_0x4DC69742196F818A(8, 158, "[ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_WITH_SCRIPT_VALIDATION] SLOTID_WEAPON_LONGARM_WRAP_TINT blocked on weapon item");
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

bool func_582(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_368(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA - Successfully got item data for item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ItemId:      ", func_225(iParam1->f_4, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  GUID:        ", UNK_0xD2E4270E5D98EEE4(iParam1));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  ParentGUID:  ", UNK_0xD2E4270E5D98EEE4(&(iParam1->f_5)));
	DEBUG::_0x1B08D1EB9D8C4931(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  SlotId:      ", func_508(iParam1->f_9, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Equipped:    ", iParam1->f_10);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Quantity:    ", iParam1->f_11);
	DEBUG::_0x1B08D1EB9D8C4931(8, 157, "PLAYER_INVENTORY_GET_ITEM_DATA -  Children:    ", iParam1->f_12);
	return true;
}

int func_583(bool bParam0, bool bParam1)
{
	if (!func_519(bParam0, 2))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(bParam0, bParam1, 1120943070))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[BUNDLE_HAS_PROPERTY_TAG] Found tag ", func_584(bParam1, 0), " for bundle ", func_631(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

var func_584(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(343635439);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

var func_585(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1982857120);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

char* func_586(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PG_EITHER";
		case 1:
			return "PG_MALE";
		case 2:
			return "PG_FEMALE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_587(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_362(func_361());
	if (func_632(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_632(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

char* func_588(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "UCM_PRESS";
		case 1:
			return "UCM_TIMED_PRESS";
		case 2:
			return "UCM_RELEASE";
		case 3:
			return "UCM_HOLD";
		case 4:
			return "UCM_METERED";
		case 5:
			return "UCM_METER_STANDARD_TIME";
		case 6:
			return "UCM_AUTO_FILL";
		case 7:
			return "UCM_AUTO_FILL_WITH_DECAY";
		case 8:
			return "UCM_MASH";
		case 9:
			return "UCM_MASH_AUTO_FILL";
		case 10:
			return "UCM_MASH_RESISTANCE";
		case 11:
			return "UCM_MASH_RESISTANCE_CAN_FAIL";
		case 12:
			return "UCM_MASH_RESISTANCE_DYNAMIC";
		case 13:
			return "UCM_MASH_RESISTANCE_DYNAMIC_CAN_FAIL";
		case 14:
			return "UCM_MASH_INDEFINITELY";
		case 15:
			return "UCM_ROTATE";
		case 16:
			return "UCM_TARGET_METER";
		case 17:
			return "UCM_NONE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_589()
{
	vector3 vVar0;

	if (Global_1903123.f_5.f_2 <= 3f)
	{
		return true;
	}
	vVar0 = { func_151() };
	if (!func_38(vVar0) && func_292(Global_34, vVar0) < 3f)
	{
		return true;
	}
	return false;
}

bool func_590(var uParam0)
{
	return (uParam0->f_14 != -99999f && uParam0->f_14 < 0.03f);
}

float func_591(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = func_538(uParam0, iParam1, Global_38.f_5807);
	if (fVar1 > 0f)
	{
		fVar0 = (5f * fVar1);
	}
	if (fVar0 > 0f)
	{
		iVar2 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		fVar0 = (fVar0 * func_633(iVar2));
	}
	return fVar0;
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("AT_FBLUEGIL");
		case 1:
			return joaat("AT_FBULLHEADCATFISH");
		case 2:
			return joaat("AT_FCHAINPICKEREL");
		case 3:
			return joaat("AT_FCHANNELCATFISH");
		case 4:
			return joaat("AT_FLAKESTURGEON");
		case 5:
			return joaat("AT_FLARGEMOUTHBASS");
		case 6:
			return joaat("AT_FLONGNOSEGAR");
		case 7:
			return joaat("AT_FMUSKIE");
		case 8:
			return joaat("AT_FNORTHERNPIKE");
		case 9:
			return joaat("AT_FPERCH");
		case 10:
			return joaat("AT_FREDFINPICKEREL");
		case 11:
			return joaat("AT_FROCKBASS");
		case 12:
			return joaat("AT_FSMALLMOUTHBASS");
		case 13:
			return joaat("AT_FSALMONSOCKEYE");
		case 14:
			return joaat("AT_FRAINBOWTROUT");
		default:
			break;
	}
	DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_STAT_FROM_FISH_TYPE unknown enum ", func_134(iParam0, 0));
	DEBUG::_0x83407B92D46F25C3(40, 124, "FISHING_GET_STAT_FROM_FISH_TYPE: unknown enum", func_134(iParam0, 0));
	return 0;
}

var func_593(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("EXCELLENT"):
			return UNK_0x6D61F5AE2F9BCC97(-525081530);
		case joaat("GOOD"):
			return UNK_0x6D61F5AE2F9BCC97(1817616171);
		case joaat("OUTSTANDING"):
			return UNK_0x6D61F5AE2F9BCC97(-356727633);
		case joaat("BAD"):
			return UNK_0x6D61F5AE2F9BCC97(723694680);
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(261850150);
		case joaat("NORMAL"):
			return UNK_0x6D61F5AE2F9BCC97(-1931940260);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

float func_594(float fParam0)
{
	if (fParam0 == 4f)
	{
		fParam0 = 5f;
	}
	else if (fParam0 == 3f)
	{
		fParam0 = 4f;
	}
	else if (fParam0 == 2f)
	{
		fParam0 = 3f;
	}
	else if (fParam0 == 1f)
	{
		fParam0 = 2f;
	}
	else if (fParam0 == 0.5f)
	{
		fParam0 = 1f;
	}
	return fParam0;
}

bool func_595(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_82(uParam0);
	if ((func_133(iVar0) && func_66(uParam1->f_247[iVar0])) && uParam0->f_156 >= uParam1->f_800[uParam1->f_247[iVar0] /*10*/])
	{
		return true;
	}
	return false;
}

float func_596(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_402(uParam0->f_247[iParam1], 0);
	fVar1 = func_403(uParam0->f_247[iParam1], 0);
	fVar2 = (fVar1 - fVar0);
	fVar3 = (uParam0->f_278[iParam1] - fVar0);
	fVar4 = func_193((fVar3 / fVar2), 0f, 1f);
	return fVar4;
}

int func_597(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_0x84848E1C0FC67DBB(uParam0->f_57[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_598(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_0x84848E1C0FC67DBB(uParam0->f_62[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_599(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	DEBUG::_0xF0783374333FD8CE(648, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Attempting to remove: ", iParam1, " of ", func_225(bParam0, 0));
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Attempting to remove an invalid item from the player's inventory!");
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_634(bParam0))
		{
			DEBUG::_0xA308F935BDECCEC0(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Updating REMOVE_REASON_DEFAULT to REMOVE_REASON_USED for ", func_225(bParam0, 0));
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_385(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Player doesn't have enough ammo");
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_635(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_222(bParam0, 1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Player doesn't have item: ", func_225(bParam0, 0), " in satchel!");
		return false;
	}
	Var5 = { func_636(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_230(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_230(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_599(bParam0, func_230(bParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
		else
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Unhandled Stat Decrement!");
		}
	}
	if (func_370(bParam0) == joaat("WEAPON"))
	{
		if (!func_637(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_638(bParam0, iParam1, iParam3, bParam2, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_PLAYER_SATCHEL_ITEM - Failed to remove item: ", func_225(bParam0, 0));
		return false;
	}
	else
	{
		Var7 = { func_374(bParam0, 0, 0) };
		if (func_220(0) && Var7.f_4 == 1084182731)
		{
			func_639(1, 0, 0);
		}
		DEBUG::_0xF0783374333FD8CE(40, 157, "[REMOVE_PLAYER_SATCHEL_ITEM] Removed item: ", func_225(bParam0, 0));
	}
	if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940296.f_21 = 0;
	}
	if (!func_220(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_635(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

int func_600()
{
	return BUILTIN::ROUND(Global_1903123.f_5.f_1);
}

int func_601(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(40, 124, "FISHING: FISHING_GET_LOOT_TABLE_FOR_FISH unknown enum ", func_134(iParam0, 0));
			DEBUG::_0x83407B92D46F25C3(8, 124, "FISHING_GET_LOOT_TABLE_FOR_FISH: unknown enum");
			return 0;
	}
	DEBUG::_0xF0783374333FD8CE(124, "FISHING: FISHING_GET_LOOT_TABLE_FOR_FISH returning ", &uVar0, HUD::_GET_LABEL_TEXT_BY_HASH(RDR_LOCAL_LOAD_S), " for ", func_134(iParam0, 0));
	return RDR_LOCAL_LOAD_S;
}

int func_602(int iParam0)
{
	if (iParam0 == 1)
	{
		return joaat("FISHING_RESULT_RUINED");
	}
	return joaat("FISHING_RESULT_NORMAL");
}

void func_603(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == bParam1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(2216, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") already exists, ignoring");
			return;
		}
		switch (bParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(567464, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") is exclusive with existing conditional ", UNK_0x4379B6FA65D55295(uParam0->f_1[iVar1]), " (", uParam0->f_1[iVar1], "), replacing existing entry");
			uParam0->f_1[iVar1] = bParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(34984, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Adding conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ") failed as max capacity (", 10, ") has been reached.");
		return;
	}
	DEBUG::_0x4DC69742196F818A(2216, 157, "PUSH_AWARD_LOOT_CONDITIONAL: Adding conditional ", UNK_0x4379B6FA65D55295(bParam1), " (", bParam1, ")");
	uParam0->f_1[*uParam0] = bParam1;
	*uParam0++;
}

bool func_604(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (bParam0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REQUEST_AWARD_LOOT - Invalid loot table supplied, ignoring!");
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_LOOT - CashInventory Session is NOT ready, aborting");
		UNK_0x355E72323AEE83CC(205, 8);
		return false;
	}
	func_640(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 84, "PERSONA_REQUEST_AWARD_LOOT - Failed to request loot award ", func_641(bParam0, 0));
		return false;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_642(uParam2, bParam0, Var1);
	return true;
}

void func_605(var uParam0, struct<15> Param1)
{
	int iVar0;

	if (!func_575(uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 205, "UPDATE_AWARD_LOOT_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_2539)
	{
		if (func_643(&(Global_1272425.f_2539.f_1[iVar0 /*22*/]), uParam0))
		{
			if (Global_1272425.f_2539.f_1[iVar0 /*22*/].f_6 == 1)
			{
				Global_1272425.f_2539.f_1[iVar0 /*22*/].f_7 = { Param1 };
				DEBUG::_0xA308F935BDECCEC0(40, 205, "UPDATE_AWARD_LOOT_TRANSACTION_HANDLER_DATA - Updated transaction data for transaction: ", SCRIPTS::_NET_RPC_GUID_TO_STRING(uParam0));
				DEBUG::_0x4DC69742196F818A(2696, 205, "UPDATE_AWARD_LOOT_TRANSACTION_HANDLER_DATA -   eLootTable:                     ", Global_1272425.f_2539.f_1[iVar0 /*22*/].f_4, " (", func_641(Global_1272425.f_2539.f_1[iVar0 /*22*/].f_4, 0), ")");
				DEBUG::_0x4DC69742196F818A(8, 205, "UPDATE_AWARD_LOOT_TRANSACTION_HANDLER_DATA -   sHandlerData.bSuppressFeedback: ", Param1);
				DEBUG::_0x4DC69742196F818A(24, 205, "UPDATE_AWARD_LOOT_TRANSACTION_HANDLER_DATA -   sHandlerData.fFishWeight:       ", Param1.f_1);
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(168, 157, "UPDATE_AWARD_LOOT_TRANSACTION_HANDLER_DATA - Transaction ", SCRIPTS::_NET_RPC_GUID_TO_STRING(uParam0), " was not pending, ignoring handler data update!");
			}
			return;
		}
		iVar0++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_AWARD_LOOT_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
}

void func_606(bool bParam0, float fParam1)
{
	bool bVar0;

	bVar0 = func_644(bParam0);
	if (func_220(0) && !func_221())
	{
		if (func_645(bParam0, 1, bVar0, 0, 0, 752097756, fParam1, 0, 0, 0))
		{
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: inventory - add ", func_225(bParam0, 0), " succeeded, bAddSilently ", bVar0);
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(168, 124, "FISHING: inventory - add ", func_225(bParam0, 0), " failed due to ADD_PLAYER_SATCHEL_ITEM, bAddSilently ", bVar0);
		}
	}
	else
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 124, "FISHING: inventory - cannot add ", func_225(bParam0, 0), " due to CAN_CHANGE_INVENTORY, bAddSilently ", bVar0);
	}
}

bool func_607(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_608(int iParam0)
{
	int iVar0;

	if (!func_607(iParam0))
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_REPUTATION__GET_IGNORE_REPUTATION_THIS_FRAME: FALSE: Invalid reputation type");
		return false;
	}
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1139844.f_5701.f_10[iParam0] == iVar0 || Global_1139844.f_5701.f_10[iParam0] == (iVar0 - 1))
	{
		DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_REPUTATION__GET_IGNORE_REPUTATION_THIS_FRAME: TRUE ", iVar0);
		return true;
	}
	DEBUG::_0x4DC69742196F818A(8, 84, "PERSONA_REPUTATION__GET_IGNORE_REPUTATION_THIS_FRAME: FALSE ", iVar0);
	return false;
}

bool func_609(int iParam0)
{
	int iVar0;

	if (!func_607(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__GET__HAS_PLAYER_INTERACTED_WITH_TYPE - exiting, you didn't provide a valid type");
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "__PERSONA_REPUTATION__GET__HAS_PLAYER_INTERACTED_WITH_TYPE - Invalid Type provided. Use a valid type");
		return false;
	}
	iVar0 = iParam0;
	if (!func_127(Global_1139844.f_5701.f_6[iVar0], 4))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__GET__HAS_PLAYER_INTERACTED_WITH_TYPE - return true, this flag isn't set");
		return true;
	}
	if (Global_1139844.f_5701.f_4[iVar0] != 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__GET__HAS_PLAYER_INTERACTED_WITH_TYPE - posix is not zero, player has interacted");
		return true;
	}
	switch (iParam0)
	{
		case 0:
			if (func_222(273608212, 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__GET__HAS_PLAYER_INTERACTED_WITH_TYPE - player has purchased sample kit, returning true");
				return true;
			}
			break;
		default:
			DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__GET__HAS_PLAYER_INTERACTED_WITH_TYPE - no special interacted condition set for this type, player hasn't interacted");
			break;
	}
	return false;
}

int func_610(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 6:
			return Global_1901988.f_812.f_12;
		case 7:
			return Global_1901988.f_812.f_13;
		case 8:
			return Global_1901988.f_812.f_14;
		case 9:
			return Global_1901988.f_812.f_15;
		case 10:
			return Global_1901988.f_812.f_16;
		case 11:
			return Global_1901988.f_812.f_17;
		case 12:
			return Global_1901988.f_812.f_18;
		case 0:
			return Global_1901988.f_812.f_19;
		case 1:
			return Global_1901988.f_812.f_20;
		case 2:
			return Global_1901988.f_812.f_21;
		case 3:
			return Global_1901988.f_812.f_22;
		case 4:
			return Global_1901988.f_812.f_23;
		case 5:
			return Global_1901988.f_812.f_24;
		default:
			break;
	}
	return 0;
}

char* func_611(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERSONA_REPUTATION_EVENT__NULL";
		case 0:
			return "PERSONA_REPUTATION_EVENT__DRAIN_MINOR";
		case 1:
			return "PERSONA_REPUTATION_EVENT__DRAIN_MODERATE";
		case 2:
			return "PERSONA_REPUTATION_EVENT__DRAIN_MAJOR";
		case 3:
			return "PERSONA_REPUTATION_EVENT__GAIN_MINOR";
		case 4:
			return "PERSONA_REPUTATION_EVENT__GAIN_MODERATE";
		case 5:
			return "PERSONA_REPUTATION_EVENT__GAIN_MAJOR";
		case 6:
			return "PERSONA_REPUTATION_EVENT__KILL_ANIMAL_FISH";
		case 7:
			return "PERSONA_REPUTATION_EVENT__KILL_ANIMAL_STANDARD";
		case 8:
			return "PERSONA_REPUTATION_EVENT__KILL_ANIMAL_SEDATED";
		case 9:
			return "PERSONA_REPUTATION_EVENT__KILL_ANIMAL_SEDATED_CRITTER";
		case 10:
			return "PERSONA_REPUTATION_EVENT__KILL_ANIMAL_PET";
		case 11:
			return "PERSONA_REPUTATION_EVENT__KILL_ANIMAL_HARRIET";
		case 12:
			return "PERSONA_REPUTATION_EVENT__KILL_ANIMAL_LEGEND";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_612(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_607(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__IS_SCORE_DECREASE_BEYOND_CURRENT_TIER_THRESHOLD - exiting, you didn't provide a valid type");
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "__PERSONA_REPUTATION__IS_SCORE_DECREASE_BEYOND_CURRENT_TIER_THRESHOLD - Invalid Type provided. Use a valid type");
		return false;
	}
	iVar0 = iParam0;
	if (!func_127(Global_1139844.f_5701.f_6[iVar0], 2))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__IS_SCORE_DECREASE_BEYOND_CURRENT_TIER_THRESHOLD - exiting, this flag isn't set");
		return false;
	}
	iVar1 = func_646(iParam0);
	iVar2 = iVar1;
	iVar3 = func_613(iParam1);
	iVar4 = iVar3;
	DEBUG::_0x1B08D1EB9D8C4931(680, 84, "__PERSONA_REPUTATION__IS_SCORE_DECREASE_BEYOND_CURRENT_TIER_THRESHOLD - eCurrentTier: ", func_615(iVar1, 0), " eNewTier: ", func_615(iVar3, 0));
	if (iVar4 < iVar2)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__IS_SCORE_DECREASE_BEYOND_CURRENT_TIER_THRESHOLD - we're moving beyond current tier ");
		return true;
	}
	return false;
}

int func_613(int iParam0)
{
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "PERSONA_REPUTATION__GET_REPUTATION_TIER_BY_SCORE: iScore: ", iParam0);
	if (iParam0 <= Global_1901988.f_812.f_3)
	{
		return 0;
	}
	if (iParam0 <= Global_1901988.f_812.f_4)
	{
		if (Global_1901988.f_812.f_4 > 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam0 <= Global_1901988.f_812.f_5)
	{
		if (Global_1901988.f_812.f_5 > 0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (iParam0 <= Global_1901988.f_812.f_6)
	{
		if (Global_1901988.f_812.f_6 > 0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (iParam0 <= Global_1901988.f_812.f_7)
	{
		if (Global_1901988.f_812.f_7 > 0)
		{
			return 3;
		}
		else
		{
			return 4;
		}
	}
	if (iParam0 <= Global_1901988.f_812.f_8)
	{
		if (Global_1901988.f_812.f_8 > 0)
		{
			return 4;
		}
		else
		{
			return 5;
		}
	}
	if (iParam0 <= Global_1901988.f_812.f_9)
	{
		if (Global_1901988.f_812.f_9 > 0)
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	if (iParam0 <= Global_1901988.f_812.f_10)
	{
		if (Global_1901988.f_812.f_10 > 0)
		{
			return 6;
		}
		else
		{
			return 7;
		}
	}
	if (iParam0 <= Global_1901988.f_812.f_11)
	{
		if (Global_1901988.f_812.f_11 > 0)
		{
			return 7;
		}
		else
		{
			return 8;
		}
	}
	return 8;
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901988.f_812.f_3;
		case 1:
			return Global_1901988.f_812.f_4;
		case 2:
			return Global_1901988.f_812.f_5;
		case 3:
			return Global_1901988.f_812.f_6;
		case 4:
			return Global_1901988.f_812.f_7;
		case 5:
			return Global_1901988.f_812.f_8;
		case 6:
			return Global_1901988.f_812.f_9;
		case 7:
			return Global_1901988.f_812.f_10;
		case 8:
			return Global_1901988.f_812.f_11;
		default:
			break;
	}
	return 0;
}

char* func_615(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERSONA_REPUTATION_TIER_INVALD";
		case 0:
			return "PERSONA_REPUTATION_TIER_MIN";
		case 1:
			return "PERSONA_REPUTATION_TIER_1";
		case 2:
			return "PERSONA_REPUTATION_TIER_2";
		case 3:
			return "PERSONA_REPUTATION_TIER_3";
		case 4:
			return "PERSONA_REPUTATION_TIER_4";
		case 5:
			return "PERSONA_REPUTATION_TIER_5";
		case 6:
			return "PERSONA_REPUTATION_TIER_6";
		case 7:
			return "PERSONA_REPUTATION_TIER_7";
		case 8:
			return "PERSONA_REPUTATION_TIER_MAX";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_616(int iParam0)
{
	int iVar0;

	if (!func_607(iParam0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__PERSONA_REPUTATION__IS_DECREASE_TIER_LIMIT_REACHED - exiting, you didn't provide a valid type");
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "__PERSONA_REPUTATION__IS_DECREASE_TIER_LIMIT_REACHED - Invalid Type provided. Use a valid type");
		return false;
	}
	iVar0 = iParam0;
	if (!func_127(Global_1139844.f_5701.f_6[iVar0], 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__PERSONA_REPUTATION__IS_DECREASE_TIER_LIMIT_REACHED - this type isn't limited");
		return false;
	}
	if (func_127(Global_1139844.f_5701.f_8[iVar0], 1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__PERSONA_REPUTATION__IS_DECREASE_TIER_LIMIT_REACHED - Our limit has reached, need to perform the interaction again to clear this bit");
		return true;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_607(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - exiting, you didn't provide a valid type");
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - Invalid Type provided. Use a valid type");
		return;
	}
	iVar0 = iParam0;
	if (!func_127(Global_1139844.f_5701.f_6[iVar0], 1))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - exiting, flag isn't set for this type");
		return;
	}
	if (func_616(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - exiting, we've reached the limit - need to clear the bit when interacting");
		return;
	}
	iVar1 = func_613(iParam1);
	iVar2 = iVar1;
	DEBUG::_0xA308F935BDECCEC0(136, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - exiting last interaction tier: ", Global_1139844.f_5701.f_2[iVar0], " iNewTier: ", iVar2);
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - PERSONA_REPUTATION_FLAG__LIMIT_REPUTATION_LOSS_WHEN_DECREASING_TIER: ", func_127(Global_1139844.f_5701.f_6[iVar0], 2));
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - __REPUTATION__GET_TIER( eNewTier ): ", func_614(iVar1));
	DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - iNewScore: ", iParam1);
	if (Global_1139844.f_5701.f_2[iVar0] > iVar2)
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - g_mpPersona.sLocal.sReputation_Data.iLastInteractionTier[iType] > iNewTier ");
		if ((func_127(Global_1139844.f_5701.f_6[iVar0], 2) && (iParam1 - 1) <= func_614(iVar1)) && iParam1 <= 0)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - Our limit has reached - start");
			if (!func_127(Global_1139844.f_5701.f_8[iVar0], 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - PERSONA_REPUTATION_FLAG__LIMIT_REPUTATION_LOSS_WHEN_DECREASING_TIER Our limit has reached, set the bit");
				func_128(&(Global_1139844.f_5701.f_8[iVar0]), 1);
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - Our limit has reached - end");
			return;
		}
		else if (iParam1 > 0 && (iParam1 - 1) <= func_614(iVar1))
		{
			DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - Our limit has reached - start - iNewScore > 0");
			if (!func_127(Global_1139844.f_5701.f_8[iVar0], 1))
			{
				DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - Our limit has reached, set the bit");
				func_128(&(Global_1139844.f_5701.f_8[iVar0]), 1);
				return;
			}
			DEBUG::_0xA308F935BDECCEC0(8, 84, "__PERSONA_REPUTATION__HANDLE_DECREASE_LIMIT - Our limit has reached - iNewScore > 0");
		}
	}
}

int func_618(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - Attempting to check for an invalid item in the player's inventory!");
		if (func_519(func_518(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_370(bParam0) == joaat("FEE"))
	{
		return -1;
	}
	DEBUG::_0x1B08D1EB9D8C4931(567976, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - eInventoryItem: ", func_225(bParam0, 0), " sParentGUID: ", UNK_0xD2E4270E5D98EEE4(iParam1), " eSlot: ", func_508(iParam1->f_4, 0), " bCurrentSlotOnly: ", bParam2, " bPlayerOnly: ", bParam3);
	if (!bParam2 && func_387(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_GET_ITEM_MAX_COUNT - ", func_225(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, iParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_368(bParam3), bParam0);
}

bool func_619()
{
	return (func_647(0) && func_647(1));
}

bool func_620()
{
	return (Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953612.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_621(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	DEBUG::_0x6D2A5155B260E879(168, 84, "[RPG_GLOBAL_GET_ATTRIBUTE_FROM_ATTRIBUTE_XP_AWARD] Attribute XP award: ", func_563(iParam0, 0), " is not tied to any valid PED Attribute. Bug to Default Design Online.");
	return 0;
}

int func_622(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_648(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1957252.f_1431.f_50[iParam0];
		case 1:
			return Global_1957252.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	DEBUG::_0x6D2A5155B260E879(40, 84, "[RPG_GLOBAL_GET_CACHED_PLAYER_ATTRIBUTE_LEVEL] Couldn't retrieve Cached Attribute Level data for Attribute: ", func_623(iParam0, 0));
	return 1;
}

char* func_623(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "PA_HEALTH";
		case 1:
			return "PA_STAMINA";
		case 2:
			return "PA_SPECIALABILITY";
		case 3:
			return "PA_COURAGE";
		case 4:
			return "PA_AGILITY";
		case 5:
			return "PA_SPEED";
		case 6:
			return "PA_ACCELERATION";
		case 7:
			return "PA_BONDING";
		case 8:
			return "SA_HUNGER";
		case 9:
			return "SA_FATIGUED";
		case 10:
			return "SA_INEBRIATED";
		case 11:
			return "SA_POISONED";
		case 12:
			return "SA_BODYHEAT";
		case 13:
			return "SA_BODYWEIGHT";
		case 14:
			return "SA_OVERFED";
		case 15:
			return "SA_SICKNESS";
		case 16:
			return "SA_DIRTINESS";
		case 17:
			return "SA_DIRTINESSHAT";
		case 18:
			return "MTR_STRENGTH";
		case 19:
			return "MTR_GRIT";
		case 20:
			return "MTR_INSTINCT";
		case 21:
			return "PA_UNRULINESS";
		case 22:
			return "SA_DIRTINESSSKIN";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_624(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return false;
}

bool func_625(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1072032.f_640.f_601;
		case 3:
			return Global_1072032.f_640.f_2103;
		case 4:
			return Global_1072032.f_640.f_12605;
		case 5:
			return Global_1072032.f_640.f_12907;
		case 6:
			return Global_1072032.f_640.f_15909;
		case 7:
			return Global_1072032.f_640.f_16511;
		case 8:
			return Global_1072032.f_640.f_18913;
		default:
			break;
	}
	return -1;
}

void func_627(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_628(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_629(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_649(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_368(bParam1), bParam0, bParam3);
}

int func_630(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_650(&uParam0, bParam4, bParam5, iParam6);
}

var func_631(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(1896562390);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

bool func_632(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_633(int iParam0)
{
	float fVar0;

	fVar0 = 1f;
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("SHOWER"):
			fVar0 = (fVar0 * 1.25f);
			break;
		case joaat("SANDSTORM"):
		case joaat("THUNDER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("SNOWCLEARING"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			fVar0 = (fVar0 * 0.5f);
			break;
	}
	return fVar0;
}

bool func_634(bool bParam0)
{
	return func_370(bParam0) == joaat("CONSUMABLE");
}

void func_635(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Invalid item!");
		return;
	}
	else if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: We silently adding this to player - Handheld Catalog.");
		return;
	}
	else if (iParam1 == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Quantity of change was 0, ignoring!");
		return;
	}
	if (!func_651() || bParam6)
	{
		func_652(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_653(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been gotten.");
	}
	else if (bParam3 || bParam4)
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been sold or given.");
		StringCopy(&cVar2, func_653(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_654(bParam0, 2097152))
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been read.");
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(8, 158, "ADD_QUEUED_ITEM_DISPLAY: Item has been used.");
		bVar0 = true;
	}
	iVar6 = func_370(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((((((((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER")) && bParam0 != joaat("AMMO_HATCHET_HUNTER")) && bParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && bParam0 != joaat("AMMO_POISONBOTTLE")) && bParam0 != joaat("AMMO_MOONSHINEJUG_MP")) && !func_513(bParam0, -1982291600)) && !func_513(bParam0, 137764179))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_492(bParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_655(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
		DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find UI Data for: ", func_225(bParam0, 0), " | Using _PLACEHOLDER texture");
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "ADD_QUEUED_ITEM_DISPLAY: Failed to find a valid texture for item ", func_225(bParam0, 0));
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_513(bParam0, 474910316))
	{
		sVar17 = func_656(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_513(bParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_657(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	bVar18 = func_383(bParam0, 0);
	if ((func_658(iVar12) && func_513(bParam0, -306684263)) && bVar18 != 0)
	{
		bVar18 = func_659(bParam0);
	}
	else if (func_370(bParam0) == joaat("CLOTHING"))
	{
		bVar19 = func_660(bParam0);
		if (func_369(bVar19, 0))
		{
			bVar18 = func_383(bVar19, 0);
		}
		DEBUG::_0x9A6C65DDDBEC9C52(8, 158, "[ADD_QUEUED_ITEM_DISPLAY] - Failed to override clothing item display name with style item display name!");
	}
	if (func_661(bParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_662(bParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_384(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, bVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -1839668642 && bParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && bParam0 != 1326838792) && bParam0 != -230310728) || ((iVar12 == 231148558 && bParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && bParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && bParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && bParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_663(bParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_664(bParam0, &cVar22))
		{
			sVar21 = func_229(func_665(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	DEBUG::_0xF0783374333FD8CE(174760, 158, "ADD_QUEUED_ITEM_DISPLAY: Adding - ", func_225(bParam0, 0), " with color ", func_666(iVar13, 0), " sound ", sVar14, " set ", sVar15);
	func_667(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_636(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "GET_ITEMS_GROUP_STAT_HASH: attempting to process an invalid item!");
		return Var0;
	}
	if (func_513(bParam0, -305066475))
	{
		if (func_211() == -1)
		{
			if (func_513(bParam0, -537818634))
			{
				return func_556(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_556(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_513(bParam0, -537818634))
	{
		return func_556(joaat("MEDICINE_ITEMS"));
	}
	if (func_513(bParam0, 2084895747))
	{
		return func_556(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_637(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Tried to remove an invalid weapon: ", func_225(bParam0, 0));
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(166056, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - ", func_225(bParam0, 0), ", iAmountToRemove = ", iParam1, ", bCarriedOnly = ", bParam2, ", removeReason = ", func_668(iParam3, 0));
	Var0 = { func_515(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_516(&Var0, func_501(0));
	}
	if (!func_517(&Var0, &iVar14, &iVar15, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Failed to create item collection!");
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_489(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_669(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_491(iVar14);
	DEBUG::_0xF0783374333FD8CE(648, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Removed ", iVar36, " of weapon ", func_225(bParam0, 0));
	if (iVar36 < iParam1)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "REMOVE_WEAPON_FROM_PLAYER_INVENTORY - Requested to remove ", iParam1, " of weapon ", func_225(bParam0, 0), " but there were only ", iVar15);
	}
	return true;
}

bool func_638(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove an invalid item from an inventory!");
		return false;
	}
	if (iParam1 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(2696, 157, "REMOVE_ITEM_FROM_PLAYER_INVENTORY - Attempting to remove ", iParam1, " of ", func_225(bParam0, 0), ", must be a non-zero positive amount");
		return false;
	}
	iVar0 = func_387(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_670(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_374(bParam0, bParam4, 0) };
	Var6 = { func_375(bParam0, Var1, Var1.f_4, bParam4) };
	return func_669(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_639(int iParam0, bool bParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "SATCHEL SET INVENTORY CHANGED called");
	UNK_0x355E72323AEE83CC(157, 6);
	Global_1940463.f_5 = iParam0;
	Global_1940463.f_37 = iParam2;
	if (bParam1 || (func_671() && iParam2 == 0))
	{
		func_672(1);
		func_673(1);
	}
}

void func_640(var uParam0)
{
	func_603(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_674() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_603(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_603(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

var func_641(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0x6D61F5AE2F9BCC97(-126735818);
		default:
			break;
	}
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
	return UNK_0x6D61F5AE2F9BCC97(bParam0);
}

void func_642(var uParam0, bool bParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_575(uParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_2539 < 20)
	{
		Global_1272425.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_2539.f_1[iVar0 /*22*/] = { Global_1272425.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = bParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1272425.f_2539.f_1[(Global_1272425.f_2539 - 1) /*22*/] = { Var1 };
	DEBUG::_0xA308F935BDECCEC0(40, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA - Added transaction data for: ", SCRIPTS::_NET_RPC_GUID_TO_STRING(uParam0));
	DEBUG::_0x4DC69742196F818A(2696, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eLootTable:                     ", Var1.f_4, " (", func_641(Var1.f_4, 0), ")");
	DEBUG::_0x4DC69742196F818A(40, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   eStatus:                        ", func_675(Var1.f_6, 0));
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.bSuppressFeedback: ", Var1.f_7);
	DEBUG::_0x4DC69742196F818A(8, 205, "ADD_AWARD_LOOT_TRANSACTION_DATA -   sHandlerData.iNumConditionals:  ", Var1.f_7.f_3);
}

bool func_643(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_644(int iParam0)
{
	if (((((((((((((((((((((((((((((iParam0 == joaat("PROVISION_FISH_BLUEGILL_POOR") || iParam0 == joaat("PROVISION_FISH_BLUEGILL")) || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON_POOR")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR_POOR")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE_POOR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE_POOR")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE")) || iParam0 == joaat("PROVISION_FISH_PERCH_POOR")) || iParam0 == joaat("PROVISION_FISH_PERCH")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT"))
	{
		return 0;
	}
	return 1;
}

bool func_645(bool bParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	DEBUG::_0x1B08D1EB9D8C4931(2216, 157, "ADD_PLAYER_SATCHEL_ITEM: Func Start: Item: ", func_225(bParam0, 0), " Add Amount: ", sParam1, " Add Silently: ", bParam2);
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Attempting to add an invalid item to the player's inventory: ", UNK_0x4379B6FA65D55295(bParam0));
		return false;
	}
	if (!func_676(bParam0, sParam1, bParam2, iParam5))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "ADD_PLAYER_SATCHEL_ITEM: __ADD_SATCHEL_ITEM_EXCEPTION_CHECKS: False");
		return false;
	}
	if (!func_677(bParam0, &iVar0, sParam1))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 157, "ADD_PLAYER_SATCHEL_ITEM: __ADD_SATCHEL_ITEM_ADJUST_COUNT: False");
		return false;
	}
	func_678(bParam0, bParam2);
	bVar2 = false;
	if (func_370(bParam0) == joaat("CLOTHING"))
	{
		if (!func_513(bParam0, 866047851) && !func_513(bParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_654(bParam0, 8388608) && !func_485(27))
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "@@@ ADD_PLAYER_SATCHEL_ITEM: Received a mailable item, need to unlock the Post Office!");
		func_679(27);
	}
	func_680(bParam0);
	if (!bVar3)
	{
		if (func_513(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			DEBUG::_0xA308F935BDECCEC0(40, 147, "ADD_PLAYER_SATCHEL_ITEM: Trying to add thrown weapon- ", HUD::_GET_LABEL_TEXT_BY_HASH(func_383(bParam0, 0)));
			bVar1 = func_682(func_681(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_211() == -1)
				{
					func_683(bVar1);
				}
				if (func_220(0) && func_684(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_685(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_686(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_370(bParam0) == joaat("WEAPON"))
		{
			if (!func_687(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_370(bParam0) == joaat("AMMO") && func_649(bParam0))
		{
			if (!func_688(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_513(bParam0, -103750053))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - claw");
			func_690(func_689(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_690(func_691(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_513(bParam0, -121341956) && !func_513(bParam0, 606799272))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - valuable");
				func_692(536, 0);
			}
			if (func_513(bParam0, -2017733358) || func_513(bParam0, -1369131378))
			{
			}
		}
		else if (func_513(bParam0, -136654233))
		{
			if (func_513(bParam0, -1021472396))
			{
				DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - canned fruit");
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - canned food");
			}
		}
		else if (func_513(bParam0, -1466706512) && func_513(bParam0, 1147021565))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - used consumable");
			func_692(519, 0);
		}
		else if (func_513(bParam0, 1147021565) && func_513(bParam0, -524514947))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - snacks");
		}
		else if (func_513(bParam0, 554195525))
		{
			DEBUG::_0x4DC69742196F818A(8, 157, "ADD_PLAYER_SATCHEL_ITEM - candy");
		}
		else if (func_513(bParam0, 589988438))
		{
			if (func_693())
			{
				DEBUG::_0xA308F935BDECCEC0(8, 147, "POSTER LOGIC IF CHECK IS PASSING");
				func_694(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_513(bParam0, 787083290) && func_513(bParam0, 949916894))
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, "CI_TAG_ITEM_LETTER_INVITATION: eItemToAdd = ", func_225(bParam0, 0));
			func_695(bParam0);
		}
		else if (func_513(bParam0, -1718133314))
		{
			func_696(bParam0);
		}
		else if (func_513(bParam0, -1738650224))
		{
			func_697(bParam0);
		}
		else if (func_513(bParam0, -1112814642) && func_513(bParam0, 949916894))
		{
			func_698(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940296.f_21 = 0;
		}
		else if (func_513(bParam0, 1841149704))
		{
			DEBUG::_0xF0783374333FD8CE(40, 215, "CI_TAG_ITEM_TREASURE_HUNTER_MAP: eItemToAdd = ", func_225(bParam0, 0));
			func_699();
		}
		else if (func_513(bParam0, -1979000645))
		{
		}
		else if (func_513(bParam0, 606799272))
		{
		}
		else if (func_513(bParam0, -1112814642) && func_513(bParam0, -1697809989))
		{
		}
		else if (func_513(bParam0, -2017733358) || func_513(bParam0, -1369131378))
		{
		}
		else if (func_513(bParam0, -1921346699))
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 158, "ADD_PLAYER_SATCHEL_ITEM - Cannot add MONEY items in MP, aborting!");
			return false;
		}
		else if (func_513(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_222(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_645(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_222(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_645(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_222(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_645(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_222(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_645(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_222(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_645(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_222(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_645(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_513(bParam0, -839724752) && func_654(bParam0, 4))
		{
		}
		else if (func_513(bParam0, 1399091007))
		{
			func_700(bParam0, &bVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				bVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_701(272, func_383(joaat("CONSUMABLE_AGED_PIRATE_RUM"), 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_701(270, func_383(joaat("CONSUMABLE_GINSENG_ELIXIER"), 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_701(271, func_383(joaat("CONSUMABLE_VALERIAN_ROOT"), 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_702(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_702(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_702(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_702(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_702(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940463.f_11711 + 60000))
				{
					func_702(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940463.f_11711 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_692(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_692(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_485(1))
				{
					func_692(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_692(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_211() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_692(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(8, 139, "ADD_PLAYER_SATCHEL_ITEM - Can't get a negative amount of satchel items!");
			return false;
		}
		bVar5 = bParam0;
		func_703(&bVar5);
		DEBUG::_0xF0783374333FD8CE(680, 139, "ADD_PLAYER_SATCHEL_ITEM - eTempItemToAdd = ", func_225(bVar5, 0), " eItemToAdd = ", func_225(bParam0, 0));
		if (!func_686(bVar5, iVar0, iParam5))
		{
			DEBUG::_0xF0783374333FD8CE(8, 139, "ADD_PLAYER_SATCHEL_ITEM - Failed to add item to players inventory, returning false.");
			return false;
		}
		else if (!func_220(0))
		{
			return true;
		}
		if (func_370(bParam0) == joaat("CLOTHING"))
		{
			func_704(bParam0);
		}
	}
	else if (bVar2 != 0)
	{
		if (func_220(0) && !func_221())
		{
			DEBUG::_0xA308F935BDECCEC0(8, 147, "Using loot table inside ADD_PLAYER_SATCHEL_ITEM!");
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_33, 0, 0, bVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_645(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				DEBUG::_0xA308F935BDECCEC0(40, 147, "Item: ", HUD::_GET_LABEL_TEXT_BY_HASH(func_383(Var6.f_1[iVar29], 0)));
				DEBUG::_0xA308F935BDECCEC0(8, 147, "Amount: ", Var6.f_12[iVar29]);
				iVar29++;
			}
		}
		else
		{
			func_705(bVar2, 0);
		}
	}
	Var30 = { func_636(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_706(bParam0);
	DEBUG::_0xF0783374333FD8CE(40, 158, "ADD_PLAYER_SATCHEL_ITEM: bAddSilently - ", MISC::_0xF216F74101968DB0(bParam2));
	if (fParam6 > 0f)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "item has weight");
		if (func_513(bParam0, -839724752))
		{
			func_707(bParam0, fParam6);
		}
		else
		{
			DEBUG::_0x83407B92D46F25C3(8, 157, "ADD_PLAYER_SATCHEL_ITEM - item is not fish so should not have weight");
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_635(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return true;
}

int func_646(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_607(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "PERSONA_REPUTATION__GET_LOCAL_REPUTATION_TIER - exiting, you didn't provide a valid type");
		DEBUG::_0xD9911C7B5F8CD69C(8, 84, "PERSONA_REPUTATION__GET_LOCAL_REPUTATION_TIER - Invalid Type provided. Use a valid type");
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = func_613(Global_1139844.f_5701[iVar0]);
	DEBUG::_0x1B08D1EB9D8C4931(40, 84, "PERSONA_REPUTATION__GET_LOCAL_REPUTATION_TIER - eType: ", func_708(iParam0, 0));
	return iVar1;
}

bool func_647(int iParam0)
{
	return func_709(&(Global_1957252.f_1565), iParam0, 1);
}

int func_648(int iParam0)
{
	return func_710(func_647(iParam0));
}

bool func_649(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_650(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_711(iParam0, bParam1, &Var0, bParam2, iParam3))
	{
		DEBUG::_0x4DC69742196F818A(680, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found ", func_225(Var0.f_4, 0), " equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return Var0.f_4;
	}
	DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_GET_ITEM_EQUIPPED_IN_SLOT_BY_REF - Found nothing equipped on item ", UNK_0xD2E4270E5D98EEE4(iParam0));
	return 0;
}

bool func_651()
{
	return !Global_1913655;
}

void func_652(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913655.f_3)
	{
		if ((((Global_1913655.f_4[iVar0 /*6*/] == bParam0 && Global_1913655.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913655.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913655.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913655.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913655.f_4[iVar0 /*6*/].f_1 = (Global_1913655.f_4[iVar0 /*6*/].f_1 + iParam1);
			DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_225(bParam0, 0), " to existing entry ", iVar0);
			return;
		}
		iVar0++;
	}
	if (Global_1913655.f_3 < 19)
	{
		DEBUG::_0xF0783374333FD8CE(2696, 158, "ADD_ITEM_TO_DELAYED_QUEUE: Adding - ", iParam1, "x ", func_225(bParam0, 0), " to new entry ", Global_1913655.f_3);
		Global_1913655.f_4[Global_1913655.f_3 /*6*/] = bParam0;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_1 = iParam1;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_2 = bParam2;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_3 = bParam3;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_4 = bParam4;
		Global_1913655.f_4[Global_1913655.f_3 /*6*/].f_5 = bParam5;
		Global_1913655.f_3++;
	}
	else
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 162, "ADD_ITEM_TO_DELAYED_QUEUE - too many items have been added to queue = ", Global_1913655.f_3, "; MAX_NUM_QUEUED_ITEMS: ", 20);
		UNK_0x355E72323AEE83CC(162, 6);
	}
}

char* func_653(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_654(bool bParam0, int iParam1)
{
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "CHECK_ITEM_DATA_ITEM_FLAG - Attempting to check the flag of an invalid item.");
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

bool func_655(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eItem = ", func_225(bParam0, 0));
	DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - eTextureType = ", func_712(iParam2, 0));
	DEBUG::_0x1B08D1EB9D8C4931(8, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - iTextureDictionary = ", iParam3);
	DEBUG::_0x1B08D1EB9D8C4931(8, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA - iTextureHash = ", iParam4);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Item Name: ", UNK_0x4379B6FA65D55295(Var3));
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Item Desc: ", UNK_0x4379B6FA65D55295(Var3.f_1));
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @489; //curOff = 160
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with type: ", func_712(Var3.f_2[iVar0 /*3*/].f_2, 0));
					Jump @489; //curOff = 268
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					Jump @489; //curOff = 313
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
					Jump @489; //curOff = 356
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
				}
				else
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Texture: ", Var3.f_2[iVar0 /*3*/]);
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA:    Type: ", func_712(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to fillout UI data for item ", func_225(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA: Unable to find texture of type ", func_712(iParam2, 0), " for item ", func_225(bParam0, 0));
	return false;
}

char* func_656(bool bParam0)
{
	if (func_513(bParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_513(bParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_513(bParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_513(bParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_513(bParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_513(bParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_513(bParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_513(bParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_513(bParam0, -352095726) || func_513(bParam0, -2014783736)) || func_513(bParam0, -545064757)) || func_513(bParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_657(bool bParam0)
{
	if (func_513(bParam0, -189374246))
	{
		if (((func_713(bParam0, -1305775593) || func_713(bParam0, 1384151091)) || func_713(bParam0, 2075388272)) || func_713(bParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_513(bParam0, -753854379) || func_513(bParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_658(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_659(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_369(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_660(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_714(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_715(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_716(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &bVar14) && func_717(bVar14))
			{
				func_718(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_718(iVar11);
	}
	return false;
}

bool func_661(bool bParam0, bool bParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (bParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, -949239683))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_INTERACTION_TAG] Found tag ", func_584(bParam1, 0), " for item ", func_225(bParam0, 0), ", returning TRUE");
		return true;
	}
	return false;
}

int func_662(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_369(bParam0, 0) && !func_519(func_518(bParam0), 2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Attempting to get the cost of an invalid item.");
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(680, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Unable to find cost ", func_719(iParam1, 0), " for item ", func_225(bParam0, 0));
		}
		return 0;
	}
	if (!bParam3)
	{
		DEBUG::_0x4DC69742196F818A(168, 158, "GET_ITEM_ACQUIRE_COST_OUTPUT_QUANTITY - Found requested identifier of ", func_719(iParam1, 0), " with output quantity ", Var0.f_1);
	}
	*iParam2 = Var0.f_1;
	return 1;
}

bool func_663(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_720(bParam0, iParam1);
	if (bVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_TAG_DISPLAY_HASH - Attempting to get the display name of an invalid item.");
		return false;
	}
	return bVar0;
}

bool func_664(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_369(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_228(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_721(bParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(680, 162, "[GET_COUPON_FULL_NAME] Item: ", func_225(bParam0, 0), " is not a coupon or voucher. Setting name to ", sParam1);
		return false;
	}
	StringCopy(&cVar1, func_722(bParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 162, "[GET_COUPON_FULL_NAME] No AltName specified, setting name to ", sParam1);
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 162, "[GET_COUPON_FULL_NAME] Combined name exceeds character limit, settingname to ", sParam1);
		return false;
	}
	*sParam1 = { cVar1 };
	DEBUG::_0xA308F935BDECCEC0(40, 162, "[GET_COUPON_FULL_NAME] Returning ", sParam1);
	return true;
}

char* func_665(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_666(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WANTED_BG_ACTIVE"):
			return "WANTED_BG_ACTIVE";
		case joaat("COLOR_ORANGEDARK"):
			return "COLOR_ORANGEDARK";
		case joaat("COLOR_NEUTRAL"):
			return "COLOR_NEUTRAL";
		case joaat("COLOR_WANTED_LOCKDOWN"):
			return "COLOR_WANTED_LOCKDOWN";
		case joaat("COLOR_GREY"):
			return "COLOR_GREY";
		case joaat("ABILITY_CARD_COMBAT_TIER_4"):
			return "ABILITY_CARD_COMBAT_TIER_4";
		case joaat("COLOR_YELLOWDARK"):
			return "COLOR_YELLOWDARK";
		case joaat("COLOR_OFF_BLACK"):
			return "COLOR_OFF_BLACK";
		case joaat("COLOR_BLACK"):
			return "COLOR_BLACK";
		case joaat("COLOR_NET_PLAYER20"):
			return "COLOR_NET_PLAYER20";
		case joaat("COLOR_YELLOW"):
			return "COLOR_YELLOW";
		case joaat("ABILITY_CARD_COMBAT_TIER_3"):
			return "ABILITY_CARD_COMBAT_TIER_3";
		case joaat("COLOR_NET_PLAYER24"):
			return "COLOR_NET_PLAYER24";
		case joaat("COLOR_MP_OBJECTIVE_FRIENDLY"):
			return "COLOR_MP_OBJECTIVE_FRIENDLY";
		case joaat("COLOR_HONOR_10"):
			return "COLOR_HONOR_10";
		case joaat("COLOR_NET_PLAYER4"):
			return "COLOR_NET_PLAYER4";
		case joaat("COLOR_NET_PLAYER21"):
			return "COLOR_NET_PLAYER21";
		case joaat("COLOR_MP_OBJECTIVE_NEUTRAL"):
			return "COLOR_MP_OBJECTIVE_NEUTRAL";
		case joaat("COLOR_COPPER"):
			return "COLOR_COPPER";
		case joaat("COLOR_NET_PLAYER25"):
			return "COLOR_NET_PLAYER25";
		case joaat("ABILITY_CARD_DEFENSE_TIER_4"):
			return "ABILITY_CARD_DEFENSE_TIER_4";
		case joaat("COLOR_BLUELIGHT"):
			return "COLOR_BLUELIGHT";
		case joaat("COLOR_HONOR_14"):
			return "COLOR_HONOR_14";
		case joaat("COLOR_REDLIGHT"):
			return "COLOR_REDLIGHT";
		case joaat("COLOR_GREENDARK"):
			return "COLOR_GREENDARK";
		case joaat("ABILITY_CARD_DEFENSE_TIER_3"):
			return "ABILITY_CARD_DEFENSE_TIER_3";
		case joaat("COLOR_NET_PLAYER2"):
			return "COLOR_NET_PLAYER2";
		case joaat("COLOR_POSSE_ALLY"):
			return "COLOR_POSSE_ALLY";
		case joaat("COLOR_HONOR_15"):
			return "COLOR_HONOR_15";
		case joaat("COLOR_BRONZE"):
			return "COLOR_BRONZE";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_1"):
			return "ABILITY_CARD_DEAD_EYE_TIER_1";
		case joaat("ABILITY_CARD_TIER_3"):
			return "ABILITY_CARD_TIER_3";
		case joaat("COLOR_RPG_SPECIAL_1"):
			return "COLOR_RPG_SPECIAL_1";
		case joaat("COLOR_HONOR_12"):
			return "COLOR_HONOR_12";
		case joaat("COLOR_BLUEDARK"):
			return "COLOR_BLUEDARK";
		case joaat("COLOR_VIP"):
			return "COLOR_VIP";
		case joaat("COLOR_NET_PLAYER5"):
			return "COLOR_NET_PLAYER5";
		case joaat("COLOR_NET_PLAYER19"):
			return "COLOR_NET_PLAYER19";
		case joaat("COLOR_GOLD"):
			return "COLOR_GOLD";
		case joaat("COLOR_ATTENTION"):
			return "COLOR_ATTENTION";
		case joaat("COLOR_MP_SERIES"):
			return "COLOR_MP_SERIES";
		case joaat("COLOR_NET_PLAYER28"):
			return "COLOR_NET_PLAYER28";
		case joaat("COLOR_WINNING_PLAYER"):
			return "COLOR_WINNING_PLAYER";
		case joaat("COLOR_HONOR_13"):
			return "COLOR_HONOR_13";
		case joaat("COLOR_NET_PLAYER18"):
			return "COLOR_NET_PLAYER18";
		case joaat("COLOR_NOTORIETY_HIGH"):
			return "COLOR_NOTORIETY_HIGH";
		case joaat("COLOR_NET_PLAYER30"):
			return "COLOR_NET_PLAYER30";
		case joaat("COLOR_CATALOG_BLACK_INK"):
			return "COLOR_CATALOG_BLACK_INK";
		case joaat("WANTED_BG_NON_ACTIVE"):
			return "WANTED_BG_NON_ACTIVE";
		case joaat("COLOR_NET_PLAYER8"):
			return "COLOR_NET_PLAYER8";
		case joaat("COLOR_FREEMODE_EVENT"):
			return "COLOR_FREEMODE_EVENT";
		case joaat("COLOR_NET_PLAYER3"):
			return "COLOR_NET_PLAYER3";
		case joaat("COLOR_NET_PLAYER17"):
			return "COLOR_NET_PLAYER17";
		case joaat("COLOR_RPG_SPECIAL_3"):
			return "COLOR_RPG_SPECIAL_3";
		case joaat("COLOR_PLATINUM"):
			return "COLOR_PLATINUM";
		case joaat("ABILITY_CARD_DEFENSE_TIER_1"):
			return "ABILITY_CARD_DEFENSE_TIER_1";
		case joaat("COLOR_GREYLIGHT"):
			return "COLOR_GREYLIGHT";
		case joaat("COLOR_NET_PLAYER32"):
			return "COLOR_NET_PLAYER32";
		case joaat("COLOR_NET_PLAYER22"):
			return "COLOR_NET_PLAYER22";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_3"):
			return "ABILITY_CARD_DEAD_EYE_TIER_3";
		case joaat("ABILITY_CARD_RECOVERY_TIER_1"):
			return "ABILITY_CARD_RECOVERY_TIER_1";
		case joaat("COLOR_GREENLIGHT"):
			return "COLOR_GREENLIGHT";
		case joaat("COLOR_NET_PLAYER16"):
			return "COLOR_NET_PLAYER16";
		case joaat("COLOR_IRON"):
			return "COLOR_IRON";
		case joaat("COLOR_NET_PLAYER26"):
			return "COLOR_NET_PLAYER26";
		case joaat("COLOR_ENEMY"):
			return "COLOR_ENEMY";
		case 0:
			return "BLIP_COLOUR_INVALID";
		case joaat("COLOR_RPG_SPECIAL_2"):
			return "COLOR_RPG_SPECIAL_2";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_4"):
			return "ABILITY_CARD_DEAD_EYE_TIER_4";
		case joaat("COLOR_NOTORIETY_LOW"):
			return "COLOR_NOTORIETY_LOW";
		case joaat("COLOR_OBJECTIVE"):
			return "COLOR_OBJECTIVE";
		case joaat("COLOR_PURE_WHITE"):
			return "COLOR_PURE_WHITE";
		case joaat("COLOR_NET_PLAYER31"):
			return "COLOR_NET_PLAYER31";
		case joaat("COLOR_HONOR_0"):
			return "COLOR_HONOR_0";
		case joaat("COLOR_NET_PLAYER6"):
			return "COLOR_NET_PLAYER6";
		case joaat("COLOR_NET_PLAYER23"):
			return "COLOR_NET_PLAYER23";
		case joaat("COLOR_ORANGELIGHT"):
			return "COLOR_ORANGELIGHT";
		case joaat("COLOR_NET_PLAYER27"):
			return "COLOR_NET_PLAYER27";
		case joaat("ABILITY_CARD_DEFENSE_TIER_2"):
			return "ABILITY_CARD_DEFENSE_TIER_2";
		case joaat("COLOR_ORANGE"):
			return "COLOR_ORANGE";
		case joaat("COLOR_PURPLE"):
			return "COLOR_PURPLE";
		case joaat("COLOR_REDDARK"):
			return "COLOR_REDDARK";
		case joaat("COLOR_NET_PLAYER9"):
			return "COLOR_NET_PLAYER9";
		case joaat("COLOR_YELLOWLIGHT"):
			return "COLOR_YELLOWLIGHT";
		case joaat("COLOR_STAR"):
			return "COLOR_STAR";
		case joaat("COLOR_BLUE"):
			return "COLOR_BLUE";
		case joaat("COLOR_NET_PLAYER15"):
			return "COLOR_NET_PLAYER15";
		case joaat("COLOR_GREYMID"):
			return "COLOR_GREYMID";
		case joaat("COLOR_POSSE_NEUTRAL"):
			return "COLOR_POSSE_NEUTRAL";
		case joaat("WANTED_STAR_NON_ACTIVE"):
			return "WANTED_STAR_NON_ACTIVE";
		case joaat("ABILITY_CARD_TIER_1"):
			return "ABILITY_CARD_TIER_1";
		case joaat("COLOR_HONOR_8"):
			return "COLOR_HONOR_8";
		case joaat("ABILITY_CARD_DEAD_EYE_TIER_2"):
			return "ABILITY_CARD_DEAD_EYE_TIER_2";
		case joaat("COLOR_HONOR_2"):
			return "COLOR_HONOR_2";
		case joaat("ABILITY_CARD_RECOVERY_TIER_4"):
			return "ABILITY_CARD_RECOVERY_TIER_4";
		case joaat("COLOR_GREEN"):
			return "COLOR_GREEN";
		case joaat("COLOR_NET_PLAYER14"):
			return "COLOR_NET_PLAYER14";
		case joaat("COLOR_FRIENDLY"):
			return "COLOR_FRIENDLY";
		case joaat("COLOR_ENEMY_UNALERTED"):
			return "COLOR_ENEMY_UNALERTED";
		case joaat("ABILITY_CARD_COMBAT_TIER_2"):
			return "ABILITY_CARD_COMBAT_TIER_2";
		case joaat("COLOR_RED"):
			return "COLOR_RED";
		case joaat("COLOR_NET_PLAYER29"):
			return "COLOR_NET_PLAYER29";
		case joaat("COLOR_NET_PLAYER7"):
			return "COLOR_NET_PLAYER7";
		case joaat("COLOR_MP_ADVERSARY"):
			return "COLOR_MP_ADVERSARY";
		case joaat("COLOR_HONOR_7"):
			return "COLOR_HONOR_7";
		case joaat("COLOR_HONOR_1"):
			return "COLOR_HONOR_1";
		case joaat("COLOR_LOCAL_PLAYER"):
			return "COLOR_LOCAL_PLAYER";
		case joaat("COLOR_HONOR_4"):
			return "COLOR_HONOR_4";
		case joaat("ABILITY_CARD_COMBAT_TIER_1"):
			return "ABILITY_CARD_COMBAT_TIER_1";
		case joaat("COLOR_WHITE"):
			return "BLIP_COLOUR_WHITE";
		case joaat("ABILITY_CARD_RECOVERY_TIER_2"):
			return "ABILITY_CARD_RECOVERY_TIER_2";
		case joaat("ABILITY_CARD_TIER_2"):
			return "ABILITY_CARD_TIER_2";
		case joaat("COLOR_SILVER"):
			return "COLOR_SILVER";
		case joaat("COLOR_NET_PLAYER13"):
			return "COLOR_NET_PLAYER13";
		case joaat("COLOR_NOTORIETY_MEDIUM"):
			return "COLOR_NOTORIETY_MEDIUM";
		case joaat("COLOR_RADAR_MISSION"):
			return "COLOR_RADAR_MISSION";
		case joaat("WANTED_STAR_BG"):
			return "WANTED_STAR_BG";
		case joaat("COLOR_CO_OP_PLAYER"):
			return "COLOR_CO_OP_PLAYER";
		case joaat("ABILITY_CARD_TIER_4"):
			return "ABILITY_CARD_TIER_4";
		case joaat("COLOR_MP_OBJECTIVE"):
			return "COLOR_MP_OBJECTIVE";
		case joaat("ABILITY_CARD_RECOVERY_TIER_3"):
			return "ABILITY_CARD_RECOVERY_TIER_3";
		case joaat("WANTED_STAR_ACTIVE"):
			return "WANTED_STAR_ACTIVE";
		case joaat("COLOR_HONOR_3"):
			return "COLOR_HONOR_3";
		case joaat("COLOR_TOKENS"):
			return "COLOR_TOKENS";
		case joaat("COLOR_PINK"):
			return "COLOR_PINK";
		case joaat("COLOR_GREYDARK"):
			return "COLOR_GREYDARK";
		case joaat("COLOR_NET_PLAYER12"):
			return "COLOR_NET_PLAYER12";
		case joaat("COLOR_HONOR_9"):
			return "COLOR_HONOR_9";
		case joaat("COLOR_LOW_PRIORITY"):
			return "COLOR_LOW_PRIORITY";
		case joaat("COLOR_YELLOWVERYLIGHT"):
			return "COLOR_YELLOWVERYLIGHT";
		case joaat("COLOR_CASH_GOLD"):
			return "COLOR_CASH_GOLD";
		case joaat("COLOR_HONOR_6"):
			return "COLOR_HONOR_6";
		case joaat("COLOR_NET_PLAYER11"):
			return "COLOR_NET_PLAYER11";
		case joaat("ABILITY_CARD_TIER_5"):
			return "ABILITY_CARD_TIER_5";
		case joaat("COLOR_NET_PLAYER1"):
			return "COLOR_NET_PLAYER1";
		case joaat("COLOR_NET_PLAYER10"):
			return "COLOR_NET_PLAYER10";
		case joaat("COLOR_HONOR_11"):
			return "COLOR_HONOR_11";
		case joaat("COLOR_POSSE_ENEMY"):
			return "COLOR_POSSE_ENEMY";
		case joaat("COLOR_MP_OBJECTIVE_ENEMY"):
			return "COLOR_MP_OBJECTIVE_ENEMY";
		case joaat("COLOR_HONOR_5"):
			return "COLOR_HONOR_5";
		case joaat("COLOR_YELLOWSTRONG"):
			return "COLOR_YELLOWSTRONG";
		case joaat("ABILITY_CARD_TIER_6"):
			return "ABILITY_CARD_TIER_6";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

var func_667(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_723(sParam0, sParam1, iParam2);
	return uVar20;
}

char* func_668(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1672595415:
			return "REMOVE_REASON_GIFTED_INCORRECTLY";
		case -1603050778:
			return "REMOVE_REASON_DEBUG";
		case -1387038764:
			return "REMOVE_REASON_GIVEN";
		case -355084151:
			return "REMOVE_REASON_ITEM_DOES_NOT_EXIST";
		case -327174699:
			return "REMOVE_REASON_DROPPED";
		case -142743235:
			return "REMOVE_REASON_DEFAULT";
		case 419721522:
			return "REMOVE_REASON_DUPLICATE";
		case 433442725:
			return "REMOVE_REASON_SET_AMOUNT";
		case 462742458:
			return "REMOVE_REASON_LOADOUT";
		case 548388329:
			return "REMOVE_REASON_DELETE_CHARACTER";
		case 562618531:
			return "REMOVE_REASON_USED";
		case 717109566:
			return "REMOVE_REASON_COALESCE";
		case 1246663900:
			return "REMOVE_REASON_CLIENT_PURGED";
		case 1368201902:
			return "REMOVE_REASON_INSUFFICIENT_INVENTORY";
		case 1730125485:
			return "REMOVE_REASON_USE_FAILED";
		case 1992602754:
			return "REMOVE_REASON_SOLD";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_669(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam1));
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (func_724(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", func_225(bParam0, 0), " is an intrinsic item, aborting!");
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_507(*iParam1, &Var0, bParam6, 0, -1))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to get item data");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2184, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - ", iParam3, " is greater than current quantity of ", Var0.f_11, ", capping quantity");
		iParam3 = Var0.f_11;
	}
	if (!func_220(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Item is already expired and does not need to be removed, ignoring");
		}
		else if (func_211() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			DEBUG::_0xF0783374333FD8CE(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Sending a Use transaction for ", iParam3, "x item ", func_225(bParam0, 0), " in ", func_508(uParam2->f_4, 0));
			iVar14 = func_725(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -142743235;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_726(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Removing ", iParam3, "x item ", func_225(bParam0, 0), " in ", func_508(uParam2->f_4, 0), " with reason ", func_668(iParam4, 0));
	if (!INVENTORY::_0x3E4E811480B3AE79(func_368(bParam6), iParam1, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_GUID - Failed to remove inventory item!");
		UNK_0x355E72323AEE83CC(157, 6);
		return false;
	}
	return true;
}

int func_670(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_724(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_225(bParam0, 0), " is an intrinsic item, aborting!");
		return 0;
	}
	if (iParam1 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Amount to remove <= 0: ", iParam1);
		return 0;
	}
	iVar0 = func_387(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - ", func_225(bParam0, 0), " does not have a default pathset, aborting!");
		return 0;
	}
	if (!func_220(bParam4))
	{
		if (iVar0 == 0)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - No pathset specified, bailing!");
			return 0;
		}
		if (!func_727(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Unable to fillout removal placement data, bailing!");
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_728(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_725(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMPATH - Use transaction failed, aborting!");
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var82.f_7 = -142743235;
			Var82.f_16 = -1;
			Var82 = bParam3;
			Var82.f_7 = iParam2;
			func_726(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(10888, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Removing ", iParam1, "x item ", func_225(bParam0, 0), " with reason ", func_668(iParam2, 0));
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_368(bParam4), bParam0, iParam1, iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 157, "PLAYER_INVENTORY_REMOVE_ITEM_WITH_ITEMID - Failed to remove: ", iParam1, " of inventory item: ", func_225(bParam0, 0));
		UNK_0x355E72323AEE83CC(157, 6);
		return 0;
	}
	return 1;
}

bool func_671()
{
	if ((Global_1940463.f_11709 != (Global_1940463.f_41.f_203 - 1) || func_730(func_729(0), Global_1940463.f_11701, 0, 1, 1) > 0) || Global_1940463.f_11709 == 15)
	{
		return true;
	}
	func_731(0);
	if (Global_1940463.f_7)
	{
		return true;
	}
	return false;
}

void func_672(int iParam0)
{
	Global_1940463.f_11 = iParam0;
}

void func_673(int iParam0)
{
	Global_1940463.f_10 = iParam0;
}

int func_674()
{
	return Global_1953612.f_1;
}

char* func_675(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "LOOT_STATUS_NONE";
		case 1:
			return "LOOT_STATUS_PENDING";
		case 2:
			return "LOOT_STATUS_SUCCEEDED";
		case 3:
			return "LOOT_STATUS_FAILED";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_676(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_211() == -1)
	{
		DEBUG::_0xF0783374333FD8CE(2216, 157, "__ADD_SATCHEL_ITEM_EXCEPTION_CHECKS: ADDING ", HUD::_GET_LABEL_TEXT_BY_HASH(func_383(bParam0, 0)), "; DOES_PLAYER_HAVE_ITEM_IN_SATCHEL = ", func_222(bParam0, 1), ", CHECK_ITEM_DATA_ITEM_FLAG = ", func_654(bParam0, 1048576));
		if (func_732(bParam0) && func_733(bParam0))
		{
			DEBUG::_0xF0783374333FD8CE(8, 157, "__ADD_SATCHEL_ITEM_EXCEPTION_CHECKS: Can't add this item as it has a purchase limit...");
			func_734(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_677(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_735(bParam0, iParam1);
	Var0 = { func_374(bParam0, 0, 1) };
	iVar5 = func_618(bParam0, &Var0, 0, 0);
	iVar6 = func_629(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "__ADD_SATCHEL_ITEM_ADJUST_COUNT - tutorial should run now....");
		if (func_513(bParam0, -2051813666))
		{
			func_692(674, 1);
		}
		else if (func_211() == -1)
		{
			func_692(673, 0);
		}
	}
	if (func_736(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
			DEBUG::_0xA308F935BDECCEC0(136, 157, "__ADD_SATCHEL_ITEM_ADJUST_COUNT: Adjusted count from ", iParam2, " to ", *iParam1);
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 157, "__ADD_SATCHEL_ITEM_ADJUST_COUNT: iCurrentItemCnt = ", iVar6, " iItemsMaxCount = ", iVar5);
			return false;
		}
	}
	return true;
}

void func_678(bool bParam0, bool bParam1)
{
	DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT");
	if (bParam1)
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT: bAddSilently");
		return;
	}
	if (!func_737())
	{
		DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT: NOT SHOULD_QUICK_INSPECT_TRIGGER()");
		return;
	}
	switch (func_738(bParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			DEBUG::_0xF0783374333FD8CE(8, 157, "TRIGGER_QUICK_INSPECT: TRUE");
			Global_1940296.f_70.f_5 = 1;
			Global_1940296.f_70.f_6 = 0;
			Global_1940296.f_70.f_1 = bParam0;
			break;
	}
}

void func_679(int iParam0)
{
	if (!func_571(iParam0))
	{
		return;
	}
	func_739(iParam0);
	func_740(iParam0);
}

void func_680(bool bParam0)
{
	if (func_513(bParam0, -1522723129))
	{
		func_223(-848633709, 0, 255, 0, 0);
	}
	else if (func_513(bParam0, -283942357))
	{
		func_223(-981153234, 0, 255, 0, 0);
	}
	else if (func_513(bParam0, 683680997))
	{
		func_223(-756350192, 0, 255, 0, 0);
	}
	else if (func_513(bParam0, 1307628809))
	{
		func_223(603094518, 0, 255, 0, 0);
	}
}

bool func_681(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			bVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			bVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			DEBUG::_0xF0783374333FD8CE(40, 157, "GET_THROWN_WEAPON_FROM_AMMO - could not find weapon for ammo: ", func_225(bParam0, 0));
			break;
	}
	if (func_369(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_741(bVar0) || func_742(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_682(bool bParam0, bool bParam1)
{
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_WEAPON_TYPE_FROM_SATCHEL_ITEM - Invalid item.");
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_WEAPON_TYPE_FROM_SATCHEL_ITEM - Invalid weapon item!");
	}
	return false;
}

void func_683(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		DEBUG::_0x83407B92D46F25C3(168, 150, "UNLOCK_WEAPON_FOR_USE: Trying to call UNLOCK_SET_UNLOCKED on ", func_225(bParam0, 0), " but this only works in SP.  You should be using awards when in MP.  This won't work in release builds!");
		return;
	}
	if (!func_490(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(168, 150, "UNLOCK_WEAPON_FOR_USE: Weapon ", func_225(bParam0, 0), " is invalid and can not be unlocked.");
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(8, 150, "UNLOCK_WEAPON_FOR_USE: Weapon had an invalid unlock ID. Failed to unlock.");
		return;
	}
	DEBUG::_0xA308F935BDECCEC0(2216, 150, "Unlocking weapon ", func_225(bParam0, 0), "(", bParam0, " for use.");
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_684(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - Tried to add an invalid weapon: ", func_225(bParam0, 0));
		return false;
	}
	DEBUG::_0xF0783374333FD8CE(34984, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - ", func_225(bParam0, 0), ", iAmmoAmount = ", iParam1, ", bForceInHand = ", bParam2, ", bForceInHolster = ", bParam3);
	DEBUG::_0xF0783374333FD8CE(43176, 157, "  attachPoint = ", func_743(iParam4, 0), ", bAllowMultipleCopies = ", bParam5, ", eAddReason = ", func_744(iParam6, 0), ", bIgnoreUnlocks = ", bParam7);
	if (WEAPON::_IS_WEAPON_MELEE(bParam0) && iParam1 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "[ADD_WEAPON_AMMO_TO_PLAYER_INVENTORY] - Tried to add ammo to a melee weapon: ", func_225(bParam0, 0));
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_374(bParam0, 0, 1) };
		if (func_503(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_504(bParam0, &Var5, Var0.f_4))
			{
				DEBUG::_0xF0783374333FD8CE(680, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] We have removed 'worn' ", func_225(bParam0, 0), " from ", func_508(Var0.f_4, 0));
				Var27 = { func_375(bParam0, Var0, Var0.f_4, 0) };
				func_669(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_220(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			DEBUG::_0xD9911C7B5F8CD69C(42, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Failed to add ", func_225(bParam0, 0), "!");
			return false;
		}
		func_685(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_745(bParam0, iParam1);
		DEBUG::_0xF0783374333FD8CE(168, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - GIVE_WEAPON_TO_PED for ", UNK_0x4379B6FA65D55295(bParam0), " succeeded");
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		DEBUG::_0xD9911C7B5F8CD69C(168, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Player does not already have weapon ", func_225(bParam0, 0), " to equip, cannot directly add items in MP!");
		return false;
	}
	if (iParam1 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] Cannot directly add ammo in MP, ", iParam1, "x ammo parameter will be ignored!");
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	DEBUG::_0xF0783374333FD8CE(40, 157, "[ADD_WEAPON_TO_PLAYER_INVENTORY] - GIVE_WEAPON_TO_PED used on existing ", func_225(bParam0, 0));
	return true;
}

bool func_685(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_649(bParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Tried to add invalid ammo: ", func_225(bParam0, 0));
		return false;
	}
	if (!func_220(0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Cannot add ammo directly in MP. Use awards instead!");
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	DEBUG::_0xF0783374333FD8CE(648, 157, "[ADD_AMMO_TO_PLAYER_INVENTORY] - Ammo add for ", iParam1, "x ", func_225(bParam0, 0));
	return true;
}

int func_686(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "ADD_ITEM_TO_PLAYER_INVENTORY - Attempting to remove an invalid item from an inventory!");
		return 0;
	}
	if (iParam1 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(2696, 157, "ADD_ITEM_TO_PLAYER_INVENTORY - Attempting to add ", iParam1, " of ", func_225(bParam0, 0), ", must be a non-zero positive amount");
		return 0;
	}
	iVar0 = func_387(bParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_746(bParam0, iParam1, iParam2);
	}
	Var1 = { func_374(bParam0, 0, 1) };
	Var6 = { func_375(bParam0, Var1, Var1.f_4, 0) };
	return func_747(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_687(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_682(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_211() == -1)
		{
			func_683(bVar0);
			if (iParam1 == 1248274121)
			{
				func_748(bVar0);
			}
		}
		if (!func_736(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_734(bParam0, 1, 0, bParam2, iParam1);
			DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Trying to give weapon to player: ", func_749(bVar0));
			iVar6 = func_750(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_684(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_684(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_684(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_751())
				{
					DEBUG::_0xF0783374333FD8CE(8, 157, "[ADD_PLAYER_SATCHEL_ITEM] john's knife not added because player not john");
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
					DEBUG::_0xF0783374333FD8CE(40, 157, "[ADD_PLAYER_SATCHEL_ITEM] but SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED so ignoring it - ", UNK_0x4379B6FA65D55295(bVar0));
				}
				else if (!func_752(bVar0))
				{
					func_684(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_684(bVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_753(Global_33, 2, 0, 1);
				if ((((func_490(bVar7) && !Global_26681) && bVar7 != bVar0) && !func_222(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_33, bVar7);
					DEBUG::_0xF0783374333FD8CE(40, 157, "[ADD_PLAYER_SATCHEL_ITEM] sending weapon to inventory, as we already have a 1-handed gun in pistol_r - ", UNK_0x4379B6FA65D55295(bVar7));
				}
				if (func_490(bVar7) && func_222(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_684(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
					DEBUG::_0xF0783374333FD8CE(8, 157, "[ADD_PLAYER_SATCHEL_ITEM] Equipping pistol to the left hand, as we have an offhand holster available!");
				}
				else
				{
					if (!func_684(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
					{
						return false;
					}
					DEBUG::_0xF0783374333FD8CE(8, 157, "[ADD_PLAYER_SATCHEL_ITEM] Equipping pistol to the right hand, as our right slot is available!");
				}
			}
			else if (!func_684(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
		else
		{
			DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Player already has the maximum amount of weapon: ", func_749(bVar0));
		}
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Trying to give an unhandled weapon to the player: ", func_749(bVar0));
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_692(515, 1);
	}
	return true;
}

int func_688(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_649(bParam0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 157, "ADD_PLAYER_SATCHEL_ITEM: Trying to give an unhandled ammo to the player: ", func_225(bParam0, 0));
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_490(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_33, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	DEBUG::_0xA308F935BDECCEC0(34952, 147, "MAX_AMMO ", iVar2, " Current Ammo ", iVar3, " Needed Ammo ", iVar5, " New Ammo ", iVar6);
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_701(func_754(bParam0), func_383(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		DEBUG::_0xF0783374333FD8CE(559240, 215, "PLAYER HAS MAX AMMO SO POST THE TUTORIAL HELP MESSAGE | MAX_AMMO ", iVar2, " | Current Ammo ", iVar3, " | Needed Ammo ", iVar5, " | New Ammo ", iVar6, " | iAmmoCount ", iVar0);
	}
	DEBUG::_0xA308F935BDECCEC0(136, 157, "Giving player ", iVar0, " ammo");
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_220(0))
	{
		if (func_685(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			DEBUG::_0xF0783374333FD8CE(2216, 0, "[AMMO Recieved],[", UNK_0x4379B6FA65D55295(bVar4), "],", iVar0, "[ADD_PLAYER_SATCHEL_ITEM]");
			return 1;
		}
	}
	else
	{
		return func_686(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_689(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_690(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_691(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_692(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_755(iParam0, &iVar0, &iVar1);
	if (!func_756(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_757(iVar0, iVar1);
	DEBUG::_0xA308F935BDECCEC0(10376, 105, "TUTORIAL_MARK_RUN() - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_758(iParam0));
	UNK_0x355E72323AEE83CC(105, 7);
}

bool func_693()
{
	return false;
}

int func_694(bool bParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_211() == 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "GIVE_PLAYER_REWARD - This command is deprecated for MP, should probably use PERSONA_REQUEST_AWARD_LOOT directly instead!");
		func_705(bParam0, 0);
		return 0;
	}
	iVar0 = func_759(bParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_760(iVar0, sParam4, iParam5, 0);
	}
	func_761(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_695(bool bParam0)
{
}

void func_696(bool bParam0)
{
}

void func_697(bool bParam0)
{
}

void func_698(bool bParam0)
{
}

void func_699()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		DEBUG::_0xF0783374333FD8CE(8, 215, "PROCESS_ADD_ITEM_TREASURE_MAP: THIS SHOULD ONLY TRIGGER ONCE WHEN PLAYER GETS FIRST MAP DURING FIRST CHALLENGE...");
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_700(bool bParam0, bool bParam1)
{
	var uVar0;

	func_514(bParam0, bParam1, &uVar0);
}

void func_701(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_755(iParam0, &iVar0, &iVar1);
	if (!func_756(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_762(iParam0, 1024))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_MARK_RUN_WITH_SUBSTR_HASH - Selected tutorial doesn't support substrings!");
		return;
	}
	func_757(iVar0, iVar1);
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	DEBUG::_0x4DC69742196F818A(2184, 105, "TUTORIAL_MARK_RUN_WITH_SUBSTR_HASH - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run.");
}

void func_702(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_755(iParam0, &iVar0, &iVar1);
	if (!func_756(iParam0, iVar0, iVar1, bParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_MARK_RUN_WITH_NUMBER - Selected tutorial can't display now.");
		return;
	}
	if (!func_762(iParam0, 1024))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_MARK_RUN_WITH_NUMBER - Selected tutorial doesn't support substrings or a number!");
		return;
	}
	func_757(iVar0, iVar1);
	Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904703.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
	DEBUG::_0xF0783374333FD8CE(10376, 105, "TUTORIAL_MARK_RUN_WITH_NUMBER - Tutorial with Set: ", iVar0, " & Flag", iVar1, " marked to run. ", func_758(iParam0));
}

void func_703(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_704(bool bParam0)
{
	if (func_211() != -1)
	{
		return;
	}
}

bool func_705(bool bParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == bParam0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 84, "PERSONA_REQUEST_AWARD_LOOT - invalid loot table.  Bailing.");
		UNK_0x355E72323AEE83CC(84, 6);
		return false;
	}
	Var4.f_1 = 10;
	func_603(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_604(bParam0, &Var4, &uVar0, iParam1, 0);
}

void func_706(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_707(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_763(Global_1903123.f_37);
	func_667(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_764(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

char* func_708(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "PERSONA_REPUTATION_TYPE__INVALID";
		case 0:
			return "PERSONA_REPUTATION_TYPE__HARRIET";
		case 1:
			return "PERSONA_REPUTATION_TYPE__TOTAL_NUM";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_709(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_710(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_711(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - Parent Guid is invalid: ", UNK_0xD2E4270E5D98EEE4(iParam0));
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_368(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, iParam0, bParam1, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - nothing is equipped for slot ", func_508(bParam1, 0));
		return false;
	}
	if (!func_582(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - failed to get equipment data for slot ", func_508(bParam1, 0));
		return false;
	}
	DEBUG::_0x1B08D1EB9D8C4931(10920, 157, "PLAYER_INVENTORY_GET_ITEM_DATA_EQUIPPED_IN_SLOT_BY_REF - ", func_225(iParam2->f_4, 0), " (", UNK_0xD2E4270E5D98EEE4(iParam2), ") is equipped in slot ", func_508(bParam1, 0));
	return true;
}

char* func_712(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("GRID_OF_4_LAYOUT_0"):
			return "CI_TEXTURE_TYPE_GRID_OF_4_LAYOUT_0";
		case -1879054288:
			return "CI_TEXTURE_TYPE_ITEMCARD";
		case -1421146771:
			return "CI_TEXTURE_TYPE_MULTIWHEEL_WEAPON";
		case -884752088:
			return "CI_TEXTURE_TYPE_GRID_OF_4_LAYOUT_1";
		case joaat("FULLPAGE_LAYOUT_5"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_5";
		case joaat("FULLPAGE_LAYOUT_4"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_4";
		case 0:
			return "CI_TEXTURE_TYPE_INVALID";
		case joaat("ADVERT_FULLPAGE"):
			return "CI_TEXTURE_TYPE_FULLPAGE_AD_LAYOUT";
		case joaat("FULLPAGE_LAYOUT_1"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_1";
		case joaat("GRID_OF_3_LAYOUT_1"):
			return "CI_TEXTURE_TYPE_GRID_OF_3_LAYOUT_1";
		case joaat("GRID_OF_9_LAYOUT_0"):
			return "CI_TEXTURE_TYPE_GRID_OF_9_LAYOUT_0";
		case 164843734:
			return "CI_TEXTURE_TYPE_LIST_LAYOUT";
		case 329991612:
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_0";
		case joaat("GRID_OF_3_LAYOUT_0"):
			return "CI_TEXTURE_TYPE_GRID_OF_3_LAYOUT_0";
		case joaat("FULLPAGE_LAYOUT_6"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_6";
		case joaat("AMMO_TYPES"):
			return "CI_TEXTURE_TYPE_AMMO_TYPES";
		case joaat("INVENTORY"):
			return "CI_TEXTURE_TYPE_INVENTORY";
		case joaat("FULLPAGE_LAYOUT_3"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_3";
		case joaat("FULLPAGE_LAYOUT_2"):
			return "CI_TEXTURE_TYPE_FULLPAGE_LAYOUT_2";
		case 1703137204:
			return "CI_TEXTURE_TYPE_GRID_OF_9_LAYOUT_1";
		case 2028695203:
			return "CI_TEXTURE_TYPE_ITEMTYPE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_713(bool bParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, bParam1, 1224357681))
	{
		DEBUG::_0x4DC69742196F818A(2728, 158, "[ITEM_HAS_FOLDER_TAG] Found tag ", func_584(bParam1, 0), " for item ", func_225(bParam0, 0), ", returning TRUE");
		return 1;
	}
	return 0;
}

int func_714(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_369(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_715(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_716(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, char* sParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, sParam12);
	if (*iParam10 >= 0)
	{
		DEBUG::_0xA308F935BDECCEC0(2184, 157, "CREATE_ITEMDATABASE_COLLECTION - Created collection '", *iParam10, "' with size ", *iParam11, " comparison type: ", sParam12);
		UNK_0x355E72323AEE83CC(157, 8);
		return true;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CREATE_ITEMDATABASE_COLLECTION - Failed to create collection");
	return false;
}

bool func_717(bool bParam0)
{
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "IS_ITEM_A_CLOTHING_STYLE: attempting to process an invalid item!");
	}
	if (func_513(bParam0, -393037696))
	{
		DEBUG::_0x4DC69742196F818A(8, 158, "IS_ITEM_A_CLOTHING_STYLE");
		return true;
	}
	return false;
}

int func_718(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "RELEASE_ITEMDATABASE_COLLECTION - Failed to release collection!");
		return 0;
	}
	return 1;
}

char* func_719(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141192156:
			return "COST_CRAFTING_ROLE_TOKEN";
		case -1843707398:
			return "COST_COUPON_3";
		case -1571233163:
			return "COST_COUPON_4";
		case -1551258934:
			return "COST_ABILITY_CARD_RANK_VOUCHER";
		case -1354270243:
			return "COST_ABILITY_CARD_RANK_COUPON_2";
		case -1251985981:
			return "COST_ABILITY_CARD_RANK_COUPON";
		case -1197011183:
			return "COST_COUPON_5";
		case -1103707655:
			return "COST_VOUCHER_3";
		case -915411861:
			return "COST_SHOP_DEFAULT";
		case -893266537:
			return "COST_CRAFTING_GUNSMITH";
		case -834227589:
			return "COST_CRAFTING_4";
		case -768110908:
			return "COST_CRAFTING_FENCE";
		case -570078785:
			return "COST_GOLD";
		case -489628648:
			return "COST_CRAFTING_EFFICIENT";
		case -257768755:
			return "COST_CRAFTING_FIRE";
		case -214678071:
			return "COST_CRAFTING_KNIFE";
		case 0:
			return "COST_INVALID";
		case 59806960:
			return "COST_FEE";
		case 75922725:
			return "COST_COUPON";
		case 132268625:
			return "COST_CRAFTING_MP_EFFICIENT";
		case 205718222:
			return "COST_VOUCHER";
		case joaat("COST_CRAFTING_GRILL"):
			return "COST_CRAFTING_GRILL";
		case 358994769:
			return "COST_CRAFTING_TRAPPER_PROMO";
		case 369710026:
			return "COST_CRAFTING_TRAPPER";
		case 502256076:
			return "COST_CRAFTING_3";
		case 600942249:
			return "COST_CRAFTING";
		case 747826962:
			return "COST_CRAFTING_2";
		case 761605153:
			return "COST_CRAFTING_PEARSON";
		case 866168015:
			return "COST_VOUCHER_2";
		case 975507354:
			return "COST_ABILITY_CARD_RANK_COUPON_3";
		case 997808187:
			return "COST_FREE";
		case 1070046552:
			return "COST_COUPON_2";
		case 1472825031:
			return "COST_CRAFTING_MP";
		case 1946634759:
			return "COST_CRAFTING_PAMPHLET";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_720(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	bool bVar41;
	int iVar42;
	int iVar43;

	bVar41 = false;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				bVar41 = Var0[iVar43 /*2*/];
				DEBUG::_0x4DC69742196F818A(10920, 158, "[INVENTORY_ITEM__HAS_TAG_OF_TYPE] Found tag type ", func_765(iParam1, 0), " for item ", func_225(bParam0, 0), ", returning tag : ", func_584(bVar41, 0));
				return bVar41;
			}
			iVar43++;
		}
	}
	return false;
}

bool func_721(bool bParam0)
{
	if (func_492(bParam0) == -126813555 || func_492(bParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_722(bool bParam0)
{
	int iVar0;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "GET_ITEM_ALT_NAME - Attempting to get the name of an invalid item.");
		return "";
	}
	iVar0 = func_659(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "GET_ITEM_ALT_NAME - No AltName specified for ", func_225(bParam0, 0));
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_723(char* sParam0, char* sParam1, int iParam2)
{
	DEBUG::_0xF0783374333FD8CE(680, 212, "Set MOB_APP_DISPLAY_TRANSACTION_FEED_UPDATE sFeedText =  ", sParam0, " and sTextureDict =  ", sParam1);
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_724(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_725(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	DEBUG::_0xA308F935BDECCEC0(168, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - ", func_766(iParam0, 0), ", immediate = ", bParam2);
	UNK_0x355E72323AEE83CC(157, 7);
	if (iParam0 == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Called with invalid action type!");
		return -1;
	}
	if (!func_767(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_769(func_768(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_770(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_FIRE_AND_FORGET_ITEM_TRANSACTION - Transaction attempt failed! Immediate = ", bParam2);
	return -1;
}

void func_726(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_20)
	{
		if (Global_1272425.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
				DEBUG::_0xA308F935BDECCEC0(8, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Updated transaction data for transaction: ", iParam0);
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   eStatus:                        ", func_771(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
				DEBUG::_0x4DC69742196F818A(8, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   sHandlerData.bSuppressFeedback: ", Param1);
				DEBUG::_0x4DC69742196F818A(40, 205, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA -   sHandlerData.tlFeedbackMessage: ", &(Param1.f_12));
			}
			else
			{
				DEBUG::_0x4DC69742196F818A(136, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Transaction ", iParam0, " was not pending, ignoring handler data update!");
			}
			return;
		}
		iVar0++;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_HANDLER_DATA - Attempted to update an invalid transaction ID");
}

bool func_727(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(648, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Invalid quantity of ", iParam4, " supplied for ", func_225(bParam2, 0));
		return false;
	}
	else if (*uParam0 != 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - sOutPlacementInfo array is not the correct size, needs to be MAX_ITEMPATH_PLACEMENTS");
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_387(bParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			DEBUG::_0xD9911C7B5F8CD69C(40, 158, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - No pathset supplied and no default pathset is available for ", func_225(bParam2, 0));
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement info");
		return false;
	}
	if (!func_772(uParam0, iParam1, iParam4, bParam5))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Failed to fill out placement data, returning FALSE");
		return false;
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "PLAYER_INVENTORY_GET_REMOVE_ITEM_PLACEMENTS - Returning ", *iParam1, " placements for ", func_225(bParam2, 0));
	return true;
}

struct<17> func_728(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_375(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_729(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_730(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_230(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_773(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_774(bParam1, bParam4));
	}
	return iVar0;
}

void func_731(bool bParam0)
{
	if (!func_369(Global_1940463.f_11701, 0))
	{
		DEBUG::_0xF0783374333FD8CE(40, 20, "CHECK_CURRENT_ITEM_FOR_LIST_VIEW: g_satchelData.eCurrItem is invalid, bMissionDropItem - ", MISC::_0xF216F74101968DB0(bParam0));
		Global_1940463.f_7 = bParam0;
	}
	else if ((((func_738(Global_1940463.f_11701, 1224357681) != 0 && Global_1940463.f_11700 != 0) && Global_1940463.f_11700 != -2074770370) && !Global_1915867.f_20638) && !Global_1915867.f_22504.f_1)
	{
		Global_1940463.f_7 = 1;
	}
	else
	{
		Global_1940463.f_7 = 0;
	}
}

bool func_732(bool bParam0)
{
	return func_370(bParam0) == joaat("WEAPON");
}

bool func_733(bool bParam0)
{
	var uVar0;

	if (func_211() != -1)
	{
		return false;
	}
	if (func_654(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_736(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_222(bParam0, 1);
}

void func_734(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_370(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_682(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_742(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_230(bParam0, 0, 0, 0) == 0))
		{
			if (func_211() == -1)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "HANDLE_WEAPON_PICKUP_UNLOCK: Unlock the weapon");
				func_683(bVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				DEBUG::_0xF0783374333FD8CE(8, 157, "HANDLE_WEAPON_PICKUP_UNLOCK: Add with a sound");
				func_635(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_735(bool bParam0, int iParam1)
{
	if (func_513(bParam0, 58855631))
	{
		func_662(bParam0, -915411861, iParam1, 1);
		DEBUG::_0xF0783374333FD8CE(8, 157, "__ADD_SATCHEL_ITEM_CONVERT_ADD_AMOUNT_TO_USES adding uses = ", *iParam1);
	}
}

bool func_736(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_775(&bParam0);
	if (!func_369(bParam0, 0) && !func_519(func_518(bParam0), 2))
	{
		DEBUG::_0x4DC69742196F818A(8, 157, "[PLAYER_INVENTORY_IS_ITEM_MAXED] Item is invalid - Failing!");
		return false;
	}
	if (!bParam3 && func_387(bParam0, joaat("DEFAULT")) == 0)
	{
		DEBUG::_0x4DC69742196F818A(168, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - ", func_225(bParam0, 0), " doesn't have a default pathset, using sSlotInfo");
		bParam3 = true;
	}
	if (func_732(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		Var0 = { func_501(0) };
		Var4.f_9 = -1591664384;
		if (!func_503(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_504(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_502(bParam0, 1))
		{
			if (!func_503(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_504(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		DEBUG::_0x4DC69742196F818A(40, 157, "PLAYER_INVENTORY_IS_ITEM_MAXED - No free slots for ", func_225(bParam0, 0));
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_618(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_579(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, bParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_737()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_776(Global_33, 1369124074)) && !func_776(Global_33, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

int func_738(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "Failed to fillout item data for item ", func_225(bParam0, 0));
	}
	return 0;
}

void func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_38.f_3647[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_38.f_3647[iVar1] = uVar3;
}

void func_740(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Extra Honor Levels");
			break;
		case 7:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Invite Companions");
			break;
		case 8:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Purchase Property");
			break;
		case 9:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Skinning");
			break;
		case 11:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unLock: Pick Up Hat");
			func_777(1);
			break;
		case 14:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Looting");
			break;
		case 15:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Efficiency");
			break;
		case 16:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Body Heat");
			break;
		case 17:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Health Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_778(1);
			break;
		case 18:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Stamina Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_778(2);
			break;
		case 19:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Deadeye Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_778(3);
			break;
		case 20:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Health Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Stamina Meter");
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: RPG Stats");
			break;
		case 10:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Pick Herb");
			break;
		case 12:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Change Outfits");
			break;
		case 13:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Fast Travel");
			break;
		case 31:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Whistle");
			break;
		case 32:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Command Follow");
			func_779(1);
			break;
		case 33:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Command Stay");
			func_780(1);
			break;
		case 34:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Command Flee");
			func_781(1);
			break;
		case 35:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Inventory");
			break;
		case 36:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Item Wheel");
			func_782(0);
			break;
		case 37:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse ILO Feed");
			func_783(0);
			break;
		case 38:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse ILO Brush");
			func_784(0);
			break;
		case 39:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Core");
			break;
		case 40:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Efficiency");
			break;
		case 41:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Saddle Transfer");
			break;
		case 42:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Bonding With New Horses");
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_785(iParam0));
			break;
		case 2:
			if (func_786() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_787("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_692(677, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_785(iParam0));
			break;
		case 3:
			if (func_786() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_787("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_692(678, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_785(iParam0));
			break;
		case 4:
			if (func_786() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_787("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_692(679, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_785(iParam0));
			break;
		case 5:
			if (func_786() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_787("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_692(680, 0);
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: ", func_785(iParam0));
			break;
		case 23:
			DEBUG::_0xF0783374333FD8CE(40, 0, "Doing unlock: FEATURE_DUAL_WIELD...UNLOCK_SP_WEAPON_DUALWIELD was previously - ", MISC::_0xF216F74101968DB0(UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"))));
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_LONG_ARM_BONUS_AMMO");
			if (func_211() == -1)
			{
				if (!func_222(1013902307, 1))
				{
					func_686(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_LONG_ARM_REINFORCED_BONUS_AMMO");
			if (func_211() == -1)
			{
				if (!func_222(1013902307, 1))
				{
					func_686(1013902307, 1, 752097756);
				}
				if (!func_222(142640135, 1))
				{
					func_686(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_SHORT_ARM_BONUS_AMMO");
			if (func_211() == -1)
			{
				if (!func_222(786809402, 1))
				{
					func_686(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			DEBUG::_0xF0783374333FD8CE(8, 0, "FEATURE_SHORT_ARM_REINFORCED_BONUS_AMMO");
			if (func_211() == -1)
			{
				if (!func_222(786809402, 1))
				{
					func_686(786809402, 1, 752097756);
				}
				if (!func_222(-518019409, 1))
				{
					func_686(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Disabled Mount Prompt");
			break;
		case 24:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Crafting");
			break;
		case 25:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Gang Tithing");
			break;
		case 26:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Gang Tithe Return Animals to Pearson");
			break;
		case 27:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Post Office availability");
			break;
		case 28:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Barber Shop availability");
			break;
		case 29:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Horse Shop availability");
			break;
		case 43:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Rhodes Deputy");
			break;
		case 44:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: In Endless Summer");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940410.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), true);
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Eagle Eye");
			break;
		case 51:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Gang 1 complete");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Native American Dialogue Receptive");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Native American Dialogue Trusted");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: Compendium");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			DEBUG::_0xF0783374333FD8CE(8, 0, "Doing unlock: peds will now react to sick arthur");
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_741(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 150, "IS_WEAPON_UNLOCKED_FOR_PURCHASE: No unlock assigned for weapon ", func_225(bParam0, 0), ".");
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_PURCHASE: Weapon is unlocked: ", func_225(bParam0, 0));
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_PURCHASE: Weapon is locked: ", func_225(bParam0, 0));
	return false;
}

bool func_742(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		DEBUG::_0xA308F935BDECCEC0(168, 150, "IS_WEAPON_UNLOCKED_FOR_USE: No unlock assigned for weapon ", func_225(bParam0, 0), ".");
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_USE: Weapon is unlocked: ", func_225(bParam0, 0));
		return true;
	}
	DEBUG::_0x1B08D1EB9D8C4931(40, 150, "IS_WEAPON_UNLOCKED_FOR_USE: Weapon is locked: ", func_225(bParam0, 0));
	return false;
}

char* func_743(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "WEAPON_ATTACH_POINT_HAND_PRIMARY";
		case 1:
			return "WEAPON_ATTACH_POINT_HAND_SECONDARY";
		case 2:
			return "WEAPON_ATTACH_POINT_PISTOL_R";
		case 3:
			return "WEAPON_ATTACH_POINT_PISTOL_L";
		case 4:
			return "WEAPON_ATTACH_POINT_KNIFE";
		case 5:
			return "WEAPON_ATTACH_POINT_LASSO";
		case 6:
			return "WEAPON_ATTACH_POINT_THROWER";
		case 7:
			return "WEAPON_ATTACH_POINT_BOW";
		case 8:
			return "WEAPON_ATTACH_POINT_BOW_ALTERNATE";
		case 9:
			return "WEAPON_ATTACH_POINT_RIFLE";
		case 10:
			return "WEAPON_ATTACH_POINT_RIFLE_ALTERNATE";
		case 11:
			return "WEAPON_ATTACH_POINT_LANTERN";
		case 12:
			return "WEAPON_ATTACH_POINT_TEMP_LANTERN";
		case 13:
			return "WEAPON_ATTACH_POINT_MELEE";
		case 14:
			return "WEAPON_ATTACH_POINT_HIP";
		case 15:
			return "WEAPON_ATTACH_POINT_BOOT";
		case 16:
			return "WEAPON_ATTACH_POINT_BACK";
		case 17:
			return "WEAPON_ATTACH_POINT_FRONT";
		case 18:
			return "WEAPON_ATTACH_POINT_SHOULDERSLING";
		case 19:
			return "WEAPON_ATTACH_POINT_LEFTBREAST";
		case 20:
			return "WEAPON_ATTACH_POINT_RIGHTBREAST";
		case 21:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT";
		case 22:
			return "WEAPON_ATTACH_POINT_RIGHTARMPIT";
		case 23:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_RIFLE";
		case 24:
			return "WEAPON_ATTACH_POINT_SATCHEL";
		case 25:
			return "WEAPON_ATTACH_POINT_LEFTARMPIT_BOW";
		case 26:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_EXTRA";
		case 27:
			return "WEAPON_ATTACH_POINT_LEFT_HAND_EXTRA";
		case 28:
			return "WEAPON_ATTACH_POINT_RIGHT_HAND_AUX";
		case 29:
			return "MAX_WEAPON_ATTACH_POINTS";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_744(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1965281643:
			return "ADD_REASON_INCENTIVE";
		case -1924444172:
			return "ADD_REASON_SYNCING";
		case -1216041698:
			return "ADD_REASON_AWARDS";
		case -983395630:
			return "ADD_REASON_NOTIFICATION";
		case -902540058:
			return "ADD_REASON_LOADOUT";
		case -897553835:
			return "ADD_REASON_LOOTED";
		case -746211728:
			return "ADD_REASON_USE_FAILED";
		case -669481339:
			return "ADD_REASON_GET_INVENTORY";
		case -490406031:
			return "ADD_REASON_CREATE_CHARACTER";
		case -334626412:
			return "ADD_REASON_MP_MISSION";
		case 444010018:
			return "ADD_REASON_PICKUP";
		case 752097756:
			return "ADD_REASON_DEFAULT";
		case 1157919518:
			return "ADD_REASON_SET_AMOUNT";
		case 1248274121:
			return "ADD_REASON_PURCHASED";
		case 1445013766:
			return "ADD_REASON_LOAD_SAVEGAME";
		case 1543882317:
			return "ADD_REASON_DEBUG";
		case 2073812199:
			return "ADD_REASON_MELEE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

void func_745(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_788(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
		DEBUG::_0xF0783374333FD8CE(168, 157, "[REFILL_CLIP_FOR_WEAPON] - refilled clip for ", UNK_0x4379B6FA65D55295(bParam0), " with this many bullets - ", iVar2);
	}
}

int func_746(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Inventory item is invalid!");
		return 0;
	}
	iVar0 = func_387(bParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Default item path is invalid!");
		return 0;
	}
	Var1 = { func_374(bParam0, 0, 0) };
	if (func_736(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Cannot add ", iParam1, "x of item ", func_225(bParam0, 0), " as it would exceed max quantity, aborting!");
		return 0;
	}
	if (!func_220(0))
	{
		DEBUG::_0x83407B92D46F25C3(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Cannot directly add  ", iParam1, "x item ", func_225(bParam0, 0), " in MP, use awards instead!");
		UNK_0x355E72323AEE83CC(157, 1);
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Adding ", iParam1, "x item ", func_225(bParam0, 0), " to ", func_508(Var1.f_4, 0), " with reason ", func_744(iParam2, 0));
	if (!INVENTORY::_0xCB5D11F9508A928D(func_368(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Failed to add inventory item!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_ITEMID - Successfully added to inventory");
	return 1;
}

int func_747(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_369(bParam0, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM - Inventory item is invalid!");
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam2))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM - Parent guid is invalid!");
		return 0;
	}
	if (func_736(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(2696, 157, "PLAYER_INVENTORY_ADD_ITEM - Cannot add ", iParam3, "x of item ", func_225(bParam0, 0), " as it would exceed max quantity, aborting!");
		return 0;
	}
	if (!func_220(0))
	{
		DEBUG::_0x83407B92D46F25C3(2696, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Cannot directly add  ", iParam3, "x item ", func_225(bParam0, 0), " in MP, use awards instead!");
		UNK_0x355E72323AEE83CC(157, 1);
		return 0;
	}
	DEBUG::_0x4DC69742196F818A(174728, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Adding ", iParam3, "x item ", func_225(bParam0, 0), " to ", func_508(iParam2->f_4, 0), " with reason ", func_744(iParam4, 0));
	if (!INVENTORY::_0xCB5D11F9508A928D(func_368(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Failed to add inventory item!");
		return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(8, 157, "PLAYER_INVENTORY_ADD_ITEM_WITH_GUID - Successfully added to inventory");
	return 1;
}

void func_748(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "REGISTER_NEW_PLAYER_WEAPON - invalid weapon type!");
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940410.f_6)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "REGISTER_NEW_PLAYER_WEAPON - invalid player reference!");
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(bParam0))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "REGISTER_NEW_PLAYER_WEAPON - Tried to set a bow - Not Registering");
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DEBUG::_0xF0783374333FD8CE(168, 0, "REGISTER_NEW_PLAYER_WEAPON - Flagging ", func_789(bParam0), " as temporarily new for the player!");
	DECORATOR::DECOR_SET_INT(Global_33, sVar0, bParam0);
	iVar2 = func_361();
	func_790(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

char* func_749(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "WT_INVALID";
		case joaat("WEAPON_UNARMED"):
			return "WT_UNARMED";
		case joaat("GROUP_PISTOL"):
			return "WT_PISTOL";
		case joaat("GROUP_REVOLVER"):
			return "WT_REVOLVER";
		case joaat("GROUP_RIFLE"):
			return "WT_RIFLE";
		case joaat("GROUP_REPEATER"):
			return "WT_ASSAULTRIFLE";
		case joaat("GROUP_SHOTGUN"):
			return "WT_SHOTGUN";
		case joaat("GROUP_SNIPER"):
			return "WT_SNIPERRIFLE";
		default:
			return WEAPON::_GET_WEAPON_NAME(bParam0);
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get name of an unknown weapon ", bParam0);
	return "WT_INVALID";
}

int func_750(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_791(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
		DEBUG::_0xF0783374333FD8CE(648, 157, "GET_AMMO_TO_ADD_FOR_WEAPON: going to give the bow this amount of ammo - ", iVar0, " for the weapon ", func_749(bParam0));
	}
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
		DEBUG::_0xF0783374333FD8CE(648, 157, "GET_AMMO_TO_ADD_FOR_WEAPON: going to give the gun this amount of ammo - ", iVar0, " for the weapon ", func_749(bParam0));
	}
	return iVar0;
}

bool func_751()
{
	return false;
}

bool func_752(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_753(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_754(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_485(49))
			{
				if (!func_485(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_485(50))
			{
				if (!func_485(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_755(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_756(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Couldn't get a valid set for this tutorial! Please get Evan L");
		UNK_0x355E72323AEE83CC(105, 4);
		return false;
	}
	if (func_792(iParam1, iParam2))
	{
		if (!bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(168, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Tutorial: ", func_758(iParam0), " has already run, and is not being forced.");
			return false;
		}
	}
	if (!func_793(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - NOT CAN_TUTORIAL_PLAY_IN_MODE ", func_794(iParam0, 0));
		return false;
	}
	if (func_795(iParam0))
	{
		DEBUG::_0xA308F935BDECCEC0(40, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Timed tutorial is delayed or finished ", func_794(iParam0, 0));
		return false;
	}
	if ((Global_1900777.f_67 && !func_762(iParam0, 1)) || func_796(32768))
	{
		if (!func_762(iParam0, 262144) || !Global_1904703.f_8785)
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorial: ", iParam0, " can't run on mission.");
			return false;
		}
		else
		{
			DEBUG::_0xA308F935BDECCEC0(136, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can set pending due to exception flag. Tutorial: ", iParam0, " can run on mission.");
		}
	}
	if (!func_797())
	{
		DEBUG::_0xA308F935BDECCEC0(8, 105, "TUTORIAL_CAN_GO_PENDING_CHECKS - Can't set tutorial pending. Tutorials are disabled");
		return false;
	}
	return true;
}

void func_757(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904703[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904703[iParam0] = uVar0;
	DEBUG::_0x4DC69742196F818A(8, 105, "SET_TUTORIAL_PENDING_WITH_SET_AND_FLAG called");
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlagSet = ", iParam0);
	DEBUG::_0x4DC69742196F818A(8, 105, "iFlag    = ", iParam1);
}

char* func_758(int iParam0)
{
	return HUD::_GET_LABEL_TEXT_BY_HASH(Global_1904703.f_33[iParam0 /*9*/]);
}

int func_759(bool bParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_211() == 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 84, "GET_PLAYER_REWARD - This command is deprecated for MP, use PERSONA_REQUEST_AWARD instead!");
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_222(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_33, 1, 1, bParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = Var1.f_1[iVar24];
			if (func_369(bVar25, 0) && func_513(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_760(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			DEBUG::_0xA308F935BDECCEC0(8, 84, "_PUSH_MONEY_EARN_UI_MESSAGE - Using delayed queue for cash event with amount ", iParam0);
			func_798(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_667(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_761(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 0, "_SP_EARN_MONEY: iTotalCents <= 0");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(168, 0, "[SP-MONEY] Total: $", func_799(iParam0), ".");
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_800() || func_801())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_667(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		DEBUG::_0xF0783374333FD8CE(168, 0, "[SP-MONEY] Gang Savings: $", func_799(iVar0), ".");
		iParam0 = (iParam0 - iVar0);
		DEBUG::_0xF0783374333FD8CE(2216, 0, "[SP-MONEY] Remainder: $", func_799(iParam0), ". Split between ", iParam3, ", with player getting ", iVar1);
		if (iVar0 > 0)
		{
		}
		func_667(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		DEBUG::_0xF0783374333FD8CE(40, 0, "[SP-MONEY] Player: $", func_799(iVar1));
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_690(func_556(joaat("CAREER_CASH")), iVar1);
		DEBUG::_0xF0783374333FD8CE(43688, 0, "[inventory_playerbalance] Event: [EARN], Current Cash: [", UNK_0xAB3EA66D3B2C264A(), "], Value: [$", func_799(iVar1), "] Category:[", UNK_0x8F77B33B6A34D8BA(), "]");
	}
	UNK_0x355E72323AEE83CC(-1, 6);
}

bool func_762(int iParam0, int iParam1)
{
	return (Global_1904703.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

char* func_763(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get name of an unknown fishtype ", iParam0);
	return "FISHTYPE_UNKNOWN";
}

int func_764(bool bParam0)
{
	var uVar0;

	if (!func_802(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(168, 158, "GET_SATCHEL_ITEM_TEXTURE: Failed to find UI Data for: ", func_225(bParam0, 0), " | Using _PLACEHOLDER texture");
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

char* func_765(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1859264326:
			return "CI_TAG_TYPE_REMEDY_GROUP";
		case -1636519629:
			return "CI_TAG_TYPE_CRAFTING_ARCHETYPE";
		case -949239683:
			return "CI_TAG_TYPE_INTERACTION";
		case -790745445:
			return "CI_TAG_TYPE_DLC";
		case -442898163:
			return "CI_TAG_TYPE_COLOR";
		case -153848696:
			return "CI_TAG_TYPE_SHOP_OFFER";
		case 0:
			return "CI_TAG_TYPE_INVALID";
		case 1081526811:
			return "CI_TAG_TYPE_PATTERN";
		case 1120943070:
			return "CI_TAG_TYPE_ITEM_PROPERTY";
		case 1224357681:
			return "CI_TAG_TYPE_FOLDER";
		case 1697966752:
			return "CI_TAG_TYPE_CRAFTING_GROUP";
		case 2129182224:
			return "CI_TAG_TYPE_MATERIAL";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

char* func_766(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1939575505:
			return "CI_ACTION_CLAIM_LOOT";
		case joaat("BATCH"):
			return "CI_ACTION_BATCH";
		case joaat("SPEND"):
			return "CI_ACTION_SPEND";
		case joaat("SELL"):
			return "CI_ACTION_SELL";
		case joaat("UPDATE"):
			return "CI_ACTION_UPDATE";
		case -659726804:
			return "CI_ACTION_CLAIM_SPLIT_AWARD";
		case -460111564:
			return "CI_ACTION_UPDATE_CHARACTER";
		case 0:
			return "CI_ACTION_INVALID";
		case 541670136:
			return "CI_ACTION_BUY_AWARD";
		case 644809794:
			return "CI_ACTION_CLAIM_AWARD";
		case 1168099063:
			return "CI_ACTION_MOVEITEMS";
		case joaat("USE"):
			return "CI_ACTION_USE";
		case 2113164098:
			return "CI_ACTION_BUY_BUNDLE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_767(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, iParam1);
	DEBUG::_0xA308F935BDECCEC0(2728, 157, "CASHINVENTORY_VALIDATE_TRANSACTION_ITEM - ", func_766(iParam0, 0), " -> ", func_225(iParam1->f_8, 0), " has iFailedValidationFlags = ", sVar0);
	if (iParam0 == joaat("USE"))
	{
		if ((func_803(iParam1->f_8, iParam0, sVar0, 2048) || func_803(iParam1->f_8, iParam0, sVar0, 32768)) || func_803(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_803(iParam1->f_8, iParam0, sVar0, 4) || func_803(iParam1->f_8, iParam0, sVar0, 256)) || func_803(iParam1->f_8, iParam0, sVar0, 65536)) || func_803(iParam1->f_8, iParam0, sVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_803(iParam1->f_8, iParam0, sVar0, 1) || func_803(iParam1->f_8, iParam0, sVar0, 8)) || func_803(iParam1->f_8, iParam0, sVar0, 65536)) || func_803(iParam1->f_8, iParam0, sVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_803(iParam1->f_8, iParam0, sVar0, 1) || func_803(iParam1->f_8, iParam0, sVar0, 16)) || func_803(iParam1->f_8, iParam0, sVar0, 2)) || func_803(iParam1->f_8, iParam0, sVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_803(iParam1->f_8, iParam0, sVar0, 8) || func_803(iParam1->f_8, iParam0, sVar0, 4096)) || func_803(iParam1->f_8, iParam0, sVar0, 256)) || func_803(iParam1->f_8, iParam0, sVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_768(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_769(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Successfully added ", func_225(iParam2->f_8, 0), " to Transaction ", iParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
			func_804(iParam1, 1, 0, 0);
			return iParam1;
		}
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to check out basket!");
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_TRANSACTION_ADD_ITEM - Failed to add item to basket!");
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
		{
			NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
		}
	}
	func_804(iParam1, 2, 0, 0);
	return -1;
}

int func_770(bool bParam0, char* sParam1, int iParam2)
{
	if (bParam0)
	{
		DEBUG::_0xA308F935BDECCEC0(166056, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Successfully added ", func_225(iParam2->f_8, 0), " to Transaction ", sParam1, ", Qty:", iParam2->f_9, ", GUID:", UNK_0xD2E4270E5D98EEE4(iParam2));
		func_804(sParam1, 1, 0, 0);
		return sParam1;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 157, "CASHINVENTORY_HANDLE_FIRE_AND_FORGET_ITEM - Transaction attempt failed!");
	return -1;
}

char* func_771(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSACTION_STATUS_NONE";
		case 1:
			return "TRANSACTION_STATUS_PENDING";
		case 2:
			return "TRANSACTION_STATUS_FAILED";
		case 3:
			return "TRANSACTION_STATUS_SUCCESSFULL";
		case 4:
			return "TRANSACTION_STATUS_CANCELED";
		case 5:
			return "TRANSACTION_STATUS_QUEUED";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_772(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 158, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - sOutPlacementInfo array is not the correct size, needs to be MAX_ITEMPATH_PLACEMENTS");
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @367; //curOff = 49
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @358; //curOff = 67
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @358; //curOff = 85
		}
		else if (func_805(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
				DEBUG::_0x4DC69742196F818A(2696, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_508((uParam0[*iParam1 /*6*/])->f_4, 0), ", 0 Remaining");
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
				DEBUG::_0x4DC69742196F818A(35464, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Found quantity ", (uParam0[*iParam1 /*6*/])->f_5, " in ", func_508((uParam0[*iParam1 /*6*/])->f_4, 0), ", ", iParam2, " Remaining");
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_577() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		DEBUG::_0x9A6C65DDDBEC9C52(136, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Was unable to find placements for requested count of ", iParam2, "x and bValidateQuantity = TRUE, returning FALSE!");
		*iParam1 = 0;
		return false;
	}
	DEBUG::_0x4DC69742196F818A(2184, 157, "PLAYER_INVENTORY_FILLOUT_ITEM_PLACEMENTS - Returning ", *iParam1, " placements with ", iParam2, "x remaining");
	return true;
}

int func_773(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_806(bParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904139.f_113[iVar1 /*96*/].f_1 == bParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_807(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), bParam1);
		}
	}
	return 0;
}

int func_774(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_808())
	{
		return func_579(bParam0, func_499(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_775(bool bParam0)
{
	if (!func_369(*bParam0, 0))
	{
		return 0;
	}
	if (!func_809(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			DEBUG::_0x83407B92D46F25C3(8, 158, "[GET_ITEM_WITHIN_ITEM_PACKAGING] Packaged item not found.");
			return 0;
	}
	DEBUG::_0xA308F935BDECCEC0(40, 158, "[GET_ITEM_WITHIN_ITEM_PACKAGING] Found packaged item: ", func_225(*bParam0, 0));
	return 1;
}

bool func_776(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_777(bool bParam0)
{
	DEBUG::_0xF0783374333FD8CE(40, 0, "PLAYER_TOGGLE_PICK_UP_HATS - bEnable = ", MISC::_0xF216F74101968DB0(bParam0));
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_TOGGLE_PICK_UP_HATS - Player doesn't exist!");
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_778(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1957252.f_5.f_7))
	{
		DEBUG::_0xA308F935BDECCEC0(8, 84, "RPG_GLOBAL_UI_ADD_PANEL - calling when ui has not been init");
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1957252.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1957252.f_5.f_7, iParam0);
		if (iVar0 == Global_1957252.f_5.f_14[iParam0 /*102*/])
		{
			DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL_UI_ADD_PANEL - entry already exist at index ", func_810(iParam0, 0));
			return;
		}
	}
	DEBUG::_0xA308F935BDECCEC0(40, 84, "RPG_GLOBAL_UI_ADD_PANEL - adding ", func_810(iParam0, 0));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1957252.f_5.f_7, iParam0, "pause_info_panel_list", Global_1957252.f_5.f_14[iParam0 /*102*/]);
}

void func_779(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_ENABLE_HORSE_COMMAND_FOLLOW - Player ped doesn't exist!");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
}

void func_780(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_ENABLE_HORSE_COMMAND_STAY - Player ped doesn't exist!");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
}

void func_781(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		DEBUG::_0xF0783374333FD8CE(8, 0, "PLAYER_ENABLE_HORSE_COMMAND_FLEE - Player ped doesn't exist!");
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
}

void func_782(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_783(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_784(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

char* func_785(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Dead-Eye - Auto Painting";
		case 2:
			return "Dead-Eye - Manual Painting";
		case 3:
			return "Dead-Eye - Stay in Deadeye After Shooting";
		case 4:
			return "Dead-Eye - Fatal Damage Region Display";
		case 5:
			return "Dead-Eye - Critical Damage Region Display";
		case 6:
			return "Extra Honor Levels";
		case 7:
			return "Invite Companions";
		case 8:
			return "Purchase property";
		case 9:
			return "Skinning";
		case 11:
			return "Pick Up Hat";
		case 14:
			return "Looting";
		case 15:
			return "Efficiency";
		case 16:
			return "Body Heat";
		case 17:
			return "Health Meter";
		case 18:
			return "Stamina Meter";
		case 19:
			return "Deadeye Meter";
		case 20:
			return "Horse Health Meter";
		case 21:
			return "Horse Stamina Meter";
		case 30:
			return "RPG Stats";
		case 10:
			return "Pick Herb";
		case 12:
			return "Change Outfits";
		case 13:
			return "Fast Travel";
		case 22:
			return "Disabled Mount Prompt";
		case 24:
			return "Crafting";
		case 25:
			return "Gang Tithing";
		case 26:
			return "Return Animals";
		case 27:
			return "Post Office availability";
		case 28:
			return "Barber Shop availability";
		case 29:
			return "Horse Shop availability";
		case 31:
			return "Horse Whistle";
		case 32:
			return "Horse Command Follow";
		case 33:
			return "Horse Command Stay";
		case 34:
			return "Horse Command Flee";
		case 35:
			return "Horse Inventory";
		case 36:
			return "Horse Item Wheel";
		case 37:
			return "Horse ILO Feed";
		case 38:
			return "Horse ILO Brush";
		case 39:
			return "Horse Core";
		case 40:
			return "Horse Efficiency";
		case 41:
			return "Saddle Transfer";
		case 42:
			return "Bonding With New Horses";
		case 43:
			return "Rhodes Deputy";
		case 44:
			return "Endless Summer";
		case 45:
			return "Endless Summer Weapons";
		case 46:
			return "Eagle Eye";
		case 51:
			return "Gang 1 Complete";
		case 52:
			return "Native Americans Receptive";
		case 53:
			return "Native Americans Trusted";
		case 54:
			return "Compendium";
		case 55:
			return "Ped Reaction to Sick Arthur";
		default:
			break;
	}
	DEBUG::_0x83407B92D46F25C3(8, 0, "Tried to get display name of an unknown feature ", iParam0);
	return "Unknown Feature";
}

bool func_786()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

var func_787(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_788(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

var func_789(bool bParam0)
{
	return WEAPON::_0x6D3AC61694A791C5(bParam0);
}

void func_790(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_811(*iParam0);
	iVar1 = func_812(*iParam0);
	iVar2 = func_813(*iParam0);
	iVar3 = func_362(*iParam0);
	iVar4 = func_363(*iParam0);
	iVar5 = func_814(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddSeconds passed.");
		return;
	}
	if (iParam2 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddMinutes passed.");
		return;
	}
	if (iParam3 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddHours passed.");
		return;
	}
	if (iParam4 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddDays passed.");
		return;
	}
	if (iParam5 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddMonths passed.");
		return;
	}
	if (iParam6 < 0)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "ADD_TIME_TO_TIMEOFDAY: Invalid arguement. Negative iAddYears passed.");
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_815(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_815(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_816(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_791(bool bParam0)
{
	return WEAPON::_IS_WEAPON_BOW(bParam0);
}

bool func_792(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17414.f_2585[iParam0], iParam1);
}

bool func_793(int iParam0)
{
	if (func_762(iParam0, 4))
	{
		DEBUG::_0xA308F935BDECCEC0(136, 105, "Tutorial: ", iParam0, " can't run during network game.");
		return false;
	}
	return true;
}

char* func_794(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2:
			return "TF_DUMMY_FLAG";
		case -1:
			return "TF_INVALID";
		case 0:
			return "TF_SICK_ITEM_DEGRADE";
		case 1:
			return "TF_WHISTLE_OUT_OF_RANGE_LONG_1";
		case 2:
			return "TF_WHISTLE_OUT_OF_RANGE_SHORT";
		case 3:
			return "TF_WHISTLE_OUT_OF_RANGE_MAIN";
		case 4:
			return "TF_WHISTLE_OUT_OF_RANGE_TEMP";
		case 5:
			return "TF_WHISTLE_BOTH_OUT_OF_RANGE";
		case 6:
			return "TF_WHISTLE_OUT_OF_RANGE_LONG_2";
		case 7:
			return "TF_WHISTLE_UNBONDED";
		case 8:
			return "TF_WHISTLE_CAMP";
		case 9:
			return "TF_WHISTLE_CAMP_HITCHED";
		case 10:
			return "TF_WHISTLE_HORSE_LOST";
		case 11:
			return "TF_WHISTLE_NO_HORSES";
		case 12:
			return "TF_WHISTLE_NO_HORSE_GUAMA";
		case 13:
			return "TF_WHISTLE_IN_INTERIOR";
		case 14:
			return "TF_WHISTLE_IN_CAVE";
		case 15:
			return "TF_WHISTLE_IN_TUNNEL";
		case 16:
			return "TF_WHISTLE_SPOOKED";
		case 17:
			return "TF_HORSE_CMD_CAMP";
		case 18:
			return "TF_HORSE_CMD_RANCH";
		case 19:
			return "TF_HORSE_NEW_TEMP_BONDED";
		case 20:
			return "TF_HORSE_NEW_TEMP_BONDED_PRE_SADDLE";
		case 21:
			return "TF_HORSE_BONDLVL_2_PERKS";
		case 22:
			return "TF_HORSE_BONDLVL_3_PERKS";
		case 23:
			return "TF_HORSE_BONDLVL_4_PERKS";
		case 24:
			return "TF_HORSE_HUNGRY";
		case 25:
			return "TF_HORSE_STARVING";
		case 26:
			return "TF_HORSE_DIRTY";
		case 27:
			return "TF_HORSE_FILTHY";
		case 28:
			return "TF_HORSE_CORE_HEALTH_50";
		case 29:
			return "TF_HORSE_CORE_STAMINA_50";
		case 30:
			return "TF_HORSE_CORE_HEALTH_EMPTY";
		case 31:
			return "TF_HORSE_CORE_STAMINA_EMPTY";
		case 32:
			return "TF_HORSE_CORE_BOTH_EMPTY";
		case 33:
			return "TF_HORSE_CORE_STAMINA_EMPTY_IN_WATER";
		case 34:
			return "TF_HORSE_SPRINT_STAMINA_1";
		case 35:
			return "TF_HORSE_SPRINT_STAMINA_2";
		case 36:
			return "TF_HORSE_BUCK_OVERSPURRED";
		case 37:
			return "TF_HORSE_BUCK_PLAYER_PREDATOR";
		case 38:
			return "TF_COMPANION_HORSE_BUCK_PLAYER";
		case 39:
			return "TF_COMPANION_HORSE_MOUNTED";
		case 40:
			return "TF_COMPANION_HORSE_BLOCKED";
		case 41:
			return "TF_HORSE_SADDLED_HORSE";
		case 42:
			return "TF_HORSE_SADDLE_SENT_TO_SHOP";
		case 43:
			return "TF_HORSE_FED";
		case 44:
			return "TF_HORSE_HITCHED";
		case 45:
			return "TF_HORSE_COMMANDS_UNLOCKED";
		case 46:
			return "TF_HORSE_BOND_LOCK_ACTION";
		case 47:
			return "TF_HORSE_TAME_LOCKON";
		case 48:
			return "TF_HORSE_TAME_LOCKON_2";
		case 49:
			return "TF_HORSE_TAME_APPROACH";
		case 50:
			return "TF_HORSE_TAME_SPOOKED";
		case 51:
			return "TF_HORSE_TAME_MOUNT";
		case 52:
			return "TF_HORSE_TAME_MOUNTED";
		case 53:
			return "TF_HORSE_TAME_SUCCESS";
		case 54:
			return "TF_HORSE_TAME_BUCKED_OFF";
		case 55:
			return "TF_HORSE_DEAD_CHPT2";
		case 56:
			return "TF_HORSE_REVIVE";
		case 57:
			return "TF_HORSE_REVIVE_NO_ITEM";
		case 58:
			return "TF_HORSE_REVIVE_NO_ITEM_PRE_CRAFT";
		case 59:
			return "TF_HORSE_STABLE_OWNED_1";
		case 60:
			return "TF_HORSE_STABLE_OWNED_2";
		case 61:
			return "TF_HORSE_AGITATED_ANIMAL_FOOT";
		case 62:
			return "TF_HORSE_AGITATED_ANIMAL_MOUNT";
		case 63:
			return "TF_HORSE_CARRYING_ITEMS";
		case 64:
			return "TF_HORSE_SADDLE_DROPPED";
		case 65:
			return "TF_HORSE_SADDLE_OUT_OF_REACH";
		case 66:
			return "TF_HORSE_STAMINA_WITH_LARGE_ITEM";
		case 67:
			return "TF_HORSE_SADDLE_BLOCKED";
		case 68:
			return "TF_HORSE_CARGO_KILL_FAST";
		case 69:
			return "TF_HORSE_CARGO_KILL_STABLE";
		case 70:
			return "TF_VEHICLE_DESTROYED";
		case 71:
			return "TF_VEHICLE_FULL_CARCASS";
		case 72:
			return "TF_VEHICLE_FULL_PELTS";
		case 73:
			return "TF_VEHICLE_CARGO_DISABLED";
		case 74:
			return "TF_VEHICLE_UNSUPPORTED_CARCASS";
		case 75:
			return "TF_VEHICLE_UNSUPPORTED_PELT";
		case 76:
			return "TF_VEHICLE_UNSUPPORTED_GENERAL";
		case 77:
			return "TF_VEHICLE_WHISTLE_MOUNTED";
		case 78:
			return "TF_VEHICLE_WHISTLE_BOUNTY_IN_BACK";
		case 79:
			return "TF_VEHICLE_COULDNT_FIND";
		case 80:
			return "TF_VEHICLE_KICKED_BY_OWNER";
		case 81:
			return "TF_VEHICLE_YOU_DO_NOT_OWN";
		case 82:
			return "TF_HORSE_MATCH_SPEED_STAMINA";
		case 83:
			return "TF_HAT_DESTROYED";
		case 84:
			return "TF_HAT_DESTROYED_NO_HORSE_ACCESS";
		case 85:
			return "TF_HAT_PICKED_UP_OWNABLE_HAT_INTRO";
		case 86:
			return "TF_HAT_PICKED_UP_OWNABLE_HAT";
		case 87:
			return "TF_HAT_PICKED_UP_TEMP_HAT";
		case 88:
			return "TF_WARDROBE_NO_COLD";
		case 89:
			return "TF_WARDROBE_NO_HOT";
		case 90:
			return "TF_WARDROBE_NO_BOTH";
		case 91:
			return "TF_OFFHAND_HOLSTER_UNLOCK";
		case 92:
			return "TF_RPG_STAT_GAIN";
		case 93:
			return "TF_TALISMAN_SINGLE_INGREDIENT";
		case 94:
			return "TF_TALISMAN_CAN_CRAFT";
		case 95:
			return "TF_TRINKET_CAN_CRAFT";
		case 96:
			return "TF_HOT_START";
		case 97:
			return "TF_COLD_START";
		case 98:
			return "TF_DRUNK_START";
		case 99:
			return "TF_CORE_LOW";
		case 100:
			return "TF_LOW_STAMINA_CORE_START";
		case 101:
			return "TF_LOW_DEAD_EYE_CORE_START";
		case 102:
			return "TF_LOW_HEALTH_CORE_START";
		case 103:
			return "TF_ITEM_DEGRADE";
		case 104:
			return "TF_PLAYER_POISONED";
		case 105:
			return "TF_PLAYER_POISONED_WORN_OFF";
		case 106:
			return "TF_WEIGHT_CHANGED";
		case 107:
			return "TF_WEIGHT_MAX";
		case 108:
			return "TF_WEIGHT_MIN";
		case 109:
			return "TF_EAT_FOOD_1";
		case 110:
			return "TF_EAT_FOOD_2";
		case 111:
			return "TF_MEAT_SPOIL_1";
		case 112:
			return "TF_MEAT_SPOIL_2";
		case 113:
			return "TF_MEAT_SPOIL_3";
		case 114:
			return "TF_TIMED_CAMPFIRE";
		case 115:
			return "TF_TIMED_GINSENG";
		case 116:
			return "TF_TIMED_SAGE";
		case 117:
			return "TF_TIMED_INDIAN_TOBACCO";
		case 118:
			return "TF_TIMED_YARROW";
		case 119:
			return "TF_TIMED_WILD_CARROTS";
		case 120:
			return "TF_TIMED_BULRUSH";
		case 121:
			return "TF_TIMED_OLEANDER";
		case 122:
			return "TF_TIMED_BERRIES";
		case 123:
			return "TF_TIMED_SKINNING";
		case 124:
			return "TF_TIMED_FLIGHT_FEATHER";
		case 125:
			return "TF_DEATH_HEALTH_TIP";
		case 126:
			return "TF_DEATH_MONEY_LOSS";
		case 127:
			return "TF_DEATH_LOCATION";
		case 128:
			return "TF_LEAVE_BOAT";
		case 129:
			return "TF_BOUNTY_HUNTER";
		case 130:
			return "TF_BOUNTY_POSTER";
		case 131:
			return "TF_BOUNTY_CRIMINAL";
		case 132:
			return "TF_BOUNTY_WANTED";
		case 133:
			return "TF_TOWN_LOCKDOWN_1";
		case 134:
			return "TF_TOWN_LOCKDOWN_2";
		case 135:
			return "TF_BLACKWATER_LOCKDOWN";
		case 136:
			return "TF_WAGON_FENCE";
		case 137:
			return "TF_WAGON_FENCE_STOLEN";
		case 138:
			return "TF_WAGON_FENCE_AGGRO";
		case 139:
			return "TF_WAGON_FENCE_PLAYER_WANTED";
		case 140:
			return "TF_WAGON_FENCE_DESTROYED";
		case 141:
			return "TF_HORSE_FENCE";
		case 142:
			return "TF_HORSE_FENCE_SP";
		case 143:
			return "TF_HORSE_FENCE_RIDE";
		case 144:
			return "TF_HORSE_FENCE_MP";
		case 145:
			return "TF_HOME_ROBBERY";
		case 146:
			return "TF_RUSTLING";
		case 147:
			return "TF_RHMR0_SHADY_SHOP";
		case 148:
			return "TF_POKER_UNLOCK";
		case 149:
			return "TF_UPGRADE_AMMO_BANDOLIER";
		case 150:
			return "TF_UPGRADE_AMMO_BELT";
		case 151:
			return "TF_UPGRADE_AMMO_RE_BANDOLIER";
		case 152:
			return "TF_UPGRADE_AMMO_RE_BELT";
		case 153:
			return "TF_UPGRADE_AMMO_DEFAULT";
		case 154:
			return "TF_HOME_ROBBERY_TIP";
		case 155:
			return "TF_INTERMENT_CAMP_TIP";
		case 156:
			return "TF_LASSO_ACQUIRED";
		case 157:
			return "TF_LASSO";
		case 158:
			return "TF_LASSO_ON_HORSE";
		case 159:
			return "TF_HOGTIE";
		case 160:
			return "TF_HOGTIE_CARRY";
		case 161:
			return "TF_PLAYER_BEING_GRAPPLED";
		case 162:
			return "TF_NO_GUNS_IN_RHODES";
		case 163:
			return "TF_NO_GUNS_IN_RHODES_DEPUTY";
		case 164:
			return "TF_NO_GUNS_IN_CALIGA";
		case 165:
			return "TF_NO_GUNS_IN_CALIGA_DEPUTY";
		case 166:
			return "TF_WORN_WEAPON";
		case 167:
			return "TF_COMPANION_GROUP_INVITE_INSIDE_CARAVAN";
		case 168:
			return "TF_COMPANION_GROUP_INVITE_OUTSIDE_CARAVAN";
		case 169:
			return "TF_COACH_ROBBERY";
		case 170:
			return "TF_SHOP_ROBBERY";
		case 171:
			return "TF_TRAIN_ROBBERY";
		case 172:
			return "TF_TRAIN_ROBBERY_HORSE";
		case 173:
			return "TF_TRAIN_ROBBERY_AGGRO";
		case 174:
			return "TF_TRAIN_ROBBERY_AGGRO2";
		case 175:
			return "TF_TRAIN_ROBBERY_STOP";
		case 176:
			return "TF_TRAIN_ROBBERY_STOP2";
		case 177:
			return "TF_TRAIN_ROBBERY_TRGTS";
		case 178:
			return "TF_TRAIN_ROBBERY_HLDP";
		case 179:
			return "TF_TRAIN_ROBBERY_RESIST";
		case 180:
			return "TF_TRAIN_ROBBERY_ROB_IN_COMBAT";
		case 181:
			return "TF_LOANSHARKING";
		case 182:
			return "TF_LS_DONATE";
		case 183:
			return "TF_LS_CONFRONT";
		case 184:
			return "TF_LS_SEARCH";
		case 185:
			return "TF_LS_SKIN";
		case 186:
			return "TF_LS_LOOT";
		case 187:
			return "TF_LS_FIRST_SEARCH";
		case 188:
			return "TF_LS_RETURN_DEBT";
		case 189:
			return "TF_COMPANIONS";
		case 190:
			return "TF_COMPANION_WHEEL";
		case 191:
			return "TF_INVITE_COMPANION";
		case 192:
			return "TF_COMPANION_ACTIVITY_COOL_DOWN";
		case 193:
			return "TF_COMPANION_ACTIVITY_BLOCKED";
		case 194:
			return "TF_COMPANION_PROPERTY_RESTRICTION";
		case 195:
			return "TF_COMPANIONS_REVIVE";
		case 196:
			return "TF_COMPANIONS_INJURED_RETURN_TO_CAMP";
		case 197:
			return "TF_COMPANIONS_ABANDONED";
		case 198:
			return "TF_COMPANION_DRAG";
		case 199:
			return "TF_ITEM_REQUEST_FIRST_TRACKED";
		case 200:
			return "TF_COMPANION_REQUEST_OBTAINED";
		case 201:
			return "TF_COMPANIONS_RETURN_TO_CAMP";
		case 202:
			return "TF_DOG_LEVEL_UP";
		case 203:
			return "TF_CAMP_NO_COMBAT";
		case 204:
			return "TF_TOWN_NO_COMBAT";
		case 205:
			return "TF_TOWN_DISMOUNT";
		case 206:
			return "TF_CAMP_CRAFT_QUICK";
		case 207:
			return "TF_CAMP_DISABLE_COMBAT";
		case 208:
			return "TF_FIRST_RC_APPROACHED";
		case 209:
			return "TF_FIRST_RC_AREA_APPROACHED";
		case 210:
			return "TF_FIRST_RSC_TASK";
		case 211:
			return "TF_FIRST_RSC_TASK_AREA";
		case 212:
			return "TF_FIRST_RC_TASK";
		case 213:
			return "TF_FIRST_RC_NO_TASK";
		case 214:
			return "TF_RCM_FIRST_CARAVAN_CAMP_LETTER";
		case 215:
			return "TF_RCM_CARAVAN_CAMP_LETTER";
		case 216:
			return "TF_JOURNAL_ACCESS0";
		case 217:
			return "TF_JOURNAL_ACCESS1";
		case 218:
			return "TF_JOURNAL_ACCESS2";
		case 219:
			return "TF_FIRST_HERB_FOUND";
		case 220:
			return "TF_COACHROB_INTRO";
		case 221:
			return "TF_SKINNING";
		case 222:
			return "TF_MEAT_SPOIL_SKINNING";
		case 223:
			return "TF_BED";
		case 224:
			return "TF_DEADEYE_1";
		case 225:
			return "TF_EAGLE_EYE";
		case 226:
			return "TF_ROWBOAT";
		case 227:
			return "TF_HUNTING_BLIP";
		case 228:
			return "TF_TRACKING_ZONE_DISCOVERED";
		case 229:
			return "TF_TRACKING_ZONE_AREA_BUSY";
		case 230:
			return "TF_TRACKING_ZONE_COOLDOWN";
		case 231:
			return "TF_AMB_DUEL_START";
		case 232:
			return "TF_AMB_DUEL_CHAL";
		case 233:
			return "TF_AMB_DUEL_CAN_CHAL";
		case 234:
			return "TF_AMB_DUEL_NO_WEAPON";
		case 235:
			return "TF_RECIPE_JOURNAL_ADD";
		case 236:
			return "TF_HERB_JOURNAL_ADD";
		case 237:
			return "TF_HERB_JOURNAL_PROP";
		case 238:
			return "TF_HERB_FULL_JOURNAL_ADD";
		case 239:
			return "TF_BERRY_BLACK_BERRY";
		case 240:
			return "TF_BERRY_EVERGREEN_HUCKLEBERRY";
		case 241:
			return "TF_BERRY_RED_RASPBERRY";
		case 242:
			return "TF_BERRY_WINTERGREEN_BERRY";
		case 243:
			return "TF_HERB_ALASKAN_GINSENG";
		case 244:
			return "TF_HERB_AMERICAN_GINSENG";
		case 245:
			return "TF_HERB_YARROW";
		case 246:
			return "TF_HERB_ENGLISH_MACE";
		case 247:
			return "TF_HERB_MILKWEED";
		case 248:
			return "TF_HERB_VANILLA_FLOWER";
		case 249:
			return "TF_HERB_OLEANDER_SAGE";
		case 250:
			return "TF_HERB_DESERT_SAGE";
		case 251:
			return "TF_HERB_HARRIETUM_OFFICINALIS";
		case 252:
			return "TF_HERB_HUMMINGBIRD_SAGE";
		case 253:
			return "TF_HERB_RED_SAGE";
		case 254:
			return "TF_HERB_VIOLET_SNOWDROP";
		case 255:
			return "TF_HERB_WILD_FEVERFEW";
		case 256:
			return "TF_HERB_BURDOCK_ROOT";
		case 257:
			return "TF_HERB_INDIAN_TOBACCO";
		case 258:
			return "TF_HERB_GOLDEN_CURRANT";
		case 259:
			return "TF_HERB_BLACK_CURRANT";
		case 260:
			return "TF_HERB_PRAIRIE_POPPY";
		case 261:
			return "TF_HORSE_HERB_WILD_CARROTS";
		case 262:
			return "TF_HORSE_HERB_COMMON_BULRUSH";
		case 263:
			return "TF_MUSHROOM_BAY_BOLETE";
		case 264:
			return "TF_MUSHROOM_CHANTERELLES";
		case 265:
			return "TF_MUSHROOM_PARASOL_MUSHROOM";
		case 266:
			return "TF_MUSHROOM_RAMS_HEAD";
		case 267:
			return "TF_SPICE_CREEPING_THYME";
		case 268:
			return "TF_SPICE_OREGANO";
		case 269:
			return "TF_SPICE_WILD_MINT";
		case 270:
			return "TF_HEALTH_XP_ITEM";
		case 271:
			return "TF_DEADEYE_XP_ITEM";
		case 272:
			return "TF_STAMINA_XP_ITEM";
		case 273:
			return "TF_DEADEYE_ITEM_MAX_LEVEL";
		case 274:
			return "TF_HEALTH_ITEM_MAX_LEVEL";
		case 275:
			return "TF_STAMINA_ITEM_MAX_LEVEL";
		case 276:
			return "TF_HEALTH_LEVEL_UP";
		case 277:
			return "TF_DEADEYE_LEVEL_UP";
		case 278:
			return "TF_STAMINA_LEVEL_UP";
		case 279:
			return "TF_TITHE_ENTER_CAMP";
		case 280:
			return "TF_TITHE_FIRST_REQUEST";
		case 281:
			return "TF_TITHE_HAVE_REQUEST";
		case 282:
			return "TF_TITHE_FINISH_REQUEST";
		case 283:
			return "TF_TITHE_FOUND_REQUEST";
		case 284:
			return "TF_TITHE_GIVE_MONEY";
		case 285:
			return "TF_TITHE_GIVE_CARCASS";
		case 286:
			return "TF_TITHE_CRAFT1";
		case 287:
			return "TF_TITHE_CRAFT2";
		case 288:
			return "TF_WAYPOINTS";
		case 289:
			return "TTL_LAW_WITNESS_INV";
		case 290:
			return "TTL_LAW_WITNESS_KNOWN";
		case 291:
			return "TTL_LAW_WITNESS_UNKNOWN";
		case 292:
			return "TTL_LAW_WITNESS_SCARE";
		case 293:
			return "TTL_LAW_WANTED_1";
		case 294:
			return "TTL_LAW_WANTED_2";
		case 295:
			return "TTL_LAW_WANTED_1_GUA";
		case 296:
			return "TTL_LAW_WANTED_2_GUA";
		case 297:
			return "TTL_LAW_EVADE";
		case 298:
			return "TTL_LAW_ARREST";
		case 299:
			return "TTL_LAW_LOITERING";
		case 300:
			return "TTL_LAW_TRESPASSING";
		case 301:
			return "TTL_LAW_INTERROGATE";
		case 302:
			return "TTL_LAW_APPEARANCE_MEMORY";
		case 303:
			return "TTL_LAW_BOUNTY_SPAWN";
		case 304:
			return "TTL_LAW_BOUNTY_RESPAWN";
		case 305:
			return "TTL_LAW_BOUNTY_JAIL";
		case 306:
			return "TTL_PLAYER_ARRESTED";
		case 307:
			return "TTL_LAW_CAPTURED";
		case 308:
			return "TTL_LAW_EXTRA_COPS1";
		case 309:
			return "TTL_LAW_EXTRA_COPS2";
		case 310:
			return "TTL_LAW_LESS_COPS";
		case 311:
			return "TTL_LAW_BOUNTY_SAVED";
		case 312:
			return "TTL_LAW_PURSUIT_END";
		case 313:
			return "TTL_LAW_BOUNTY_POSTED";
		case 314:
			return "TTL_LAW_CRIME_WITH_MASK";
		case 315:
			return "TTL_LAW_CHANGED_CLOTHES";
		case 316:
			return "TTL_LAW_GRABBED_POSTER";
		case 317:
			return "TTL_LAW_JAIL_SENTENCE";
		case 318:
			return "TTL_LAW_JAIL_ESCAPE";
		case 319:
			return "TTL_AGGRO_PED";
		case 320:
			return "TF_WAIT_CAMP_UPGRADE";
		case 321:
			return "TF_WAIT_CAMP_CHORE";
		case 322:
			return "TTL_CAMPING_BUY";
		case 323:
			return "TF_PLAYER_CHORES_1";
		case 324:
			return "TF_PLAYER_CHORES_2";
		case 325:
			return "TF_PLAYER_CHORES_3";
		case 326:
			return "TF_PLAYER_CHORES_START";
		case 327:
			return "TF_PLAYER_CHORES_START_BEECHERS";
		case 328:
			return "TTL_WPN_PLACEEXPLOSIVE";
		case 329:
			return "TF_RARE_FISH";
		case 330:
			return "TTL_FIGHTINT";
		case 331:
			return "TF_CAMPFIRE_OFFER1";
		case 332:
			return "TF_CAMPFIRE_GREET";
		case 333:
			return "TF_SP_GANG_HIDEOUTS";
		case 334:
			return "TF_SP_GANG_CAMPS";
		case 335:
			return "TF_CAMPITEM_REST_OPT";
		case 336:
			return "TF_CAMPFIRE_SIT";
		case 337:
			return "TF_RP_KNOWN_RECIPE";
		case 338:
			return "TF_RP_SPECIAL_HORSE_MEDICINE";
		case 339:
			return "TF_RP_SPECIAL_HORSE_REVIVER";
		case 340:
			return "TF_RP_HORSE_OINTMENT";
		case 341:
			return "TF_RP_SPECIAL_HORSE_STIMULANT";
		case 342:
			return "TF_RP_SUPER_MEAL";
		case 343:
			return "TF_RP_SPECIAL_MEDICINE";
		case 344:
			return "TF_RP_SPECIAL_RESTORATIVE";
		case 345:
			return "TF_RP_SPECIAL_SNAKE_OIL";
		case 346:
			return "TF_RP_SPECIAL_TONIC";
		case 347:
			return "TF_RP_POTENT_HERBIVORE_BAIT";
		case 348:
			return "TF_RP_POTENT_PREDATOR_BAIT";
		case 349:
			return "TF_RP_PREDATOR_BAIT";
		case 350:
			return "TF_RP_DYNAMITE_ARROW";
		case 351:
			return "TF_RP_FIRE_ARROW";
		case 352:
			return "TF_RP_IMPROVED_ARROW";
		case 353:
			return "TF_RP_POISON_ARROW";
		case 354:
			return "TF_RP_SMALL_GAME_ARROW";
		case 355:
			return "TF_RP_VOLATILE_DYNAMITE";
		case 356:
			return "TF_RP_FIRE_BOTTLE";
		case 357:
			return "TF_RP_VOLATILE_FIRE_BOTTLE";
		case 358:
			return "TF_RP_HOMING_TOMAHAWK";
		case 359:
			return "TF_RP_IMPROVED_THROWING_KNIFE";
		case 360:
			return "TF_RP_IMPROVED_TOMAHAWK";
		case 361:
			return "TF_RP_POISON_THROWING_KNIFE";
		case 362:
			return "TF_RP_SPLIT_POINT_AMMO";
		case 363:
			return "TF_RP_EXPRESS_EXPLOSIVE_AMMO";
		case 364:
			return "TF_RP_SHOTGUN_BUCKSHOT_INCENDIARY";
		case 365:
			return "TF_RP_SHOTGUN_SLUG_EXPLOSIVE";
		case 366:
			return "TF_BAIT_HERBIVORE_USED";
		case 367:
			return "TF_BAIT_PREDATOR_USED";
		case 368:
			return "TF_TREASUREMAP_FIRST_FIND";
		case 369:
			return "TF_TREASUREMAP_LS_HORSECHASE";
		case 370:
			return "TF_TREASURE_HUNTER_REMINDER";
		case 371:
			return "TF_DINO_BONES";
		case 372:
			return "TF_DINO_BONES_FIRST_REMINDER";
		case 373:
			return "TF_DINO_BONES_FIRST_REMINDER_STAGE1";
		case 374:
			return "TF_DINO_BONES_LAST_REMINDER";
		case 375:
			return "TF_DINO_BONES_ALL_TURNED_IN";
		case 376:
			return "TF_DINO_BONES_FINGER_BONE";
		case 377:
			return "TF_DINO_BONES_INVITATION_USED";
		case 378:
			return "TF_LEGENDARY_FISH_INVITATION_USED";
		case 379:
			return "TF_LITTLE_EGRET_BEFORE_QUEST";
		case 380:
			return "TF_LITTLE_EGRET_PLUME_TURN_IN";
		case 381:
			return "TF_REDDISH_EGRET_BEFORE_QUEST";
		case 382:
			return "TF_REDDISH_EGRET_PLUME_TURN_IN";
		case 383:
			return "TF_SNOWY_EGRET_BEFORE_QUEST";
		case 384:
			return "TF_SNOWY_EGRET_PLUME_TURN_IN";
		case 385:
			return "TF_HERON_FEATHERS_BEFORE_QUEST";
		case 386:
			return "TF_HERON_FEATHERS_TURN_IN";
		case 387:
			return "TF_SPOONBILL_FEATHERS_BEFORE_QUEST";
		case 388:
			return "TF_SPOONBILL_FEATHERS_TURN_IN";
		case 389:
			return "TF_EXOTIC_FOUND";
		case 390:
			return "TF_GATOR_EGGS_BEFORE_QUEST";
		case 391:
			return "TF_GATOR_EGGS_FOUND";
		case 392:
			return "TF_GATOR_EGGS_TURN_IN";
		case 393:
			return "TF_LEGENDARY_FISH_CAUGHT";
		case 394:
			return "TF_LEGENDARY_FISH_CAUGHT_AFTER_STAGE1";
		case 395:
			return "TF_LEGENDARY_FISH_MAILED_ONE";
		case 396:
			return "TF_LEGENDARY_FISH_MAILED_TEN";
		case 397:
			return "TF_LEGENDARY_FISH_MAILED_ALL";
		case 398:
			return "TF_DINO_BONE_MAILED_ONE";
		case 399:
			return "TF_DINO_BONE_MAILED_FIFTEEN";
		case 400:
			return "TF_DINO_BONE_MAILED_ALL";
		case 401:
			return "TF_ROCK_CARVING_MAILED_ONE";
		case 402:
			return "TF_ROCK_CARVING_MAILED_FIVE";
		case 403:
			return "TF_ROCK_CARVING_MAILED_ALL";
		case 404:
			return "TF_TAXIDERMY_MAILED_ONE";
		case 405:
			return "TF_TAXIDERMY_MAILED_TWO";
		case 406:
			return "TF_TAXIDERMY_MAILED_THREE";
		case 407:
			return "TF_TAXIDERMY_MAILED_FOUR";
		case 408:
			return "TF_TAXIDERMY_MAILED_ALL";
		case 409:
			return "TF_RARE_FISHING_SPOT_FOUND";
		case 410:
			return "TF_RARE_FISHING_SPOT_FOUND_NO_POLE";
		case 411:
			return "TF_RARE_FISHING_SPOT_AFTER_ABIGAIL1";
		case 412:
			return "TF_RARE_ORCHID_ACUNAS_STAR_FOUND";
		case 413:
			return "TF_RARE_ORCHID_CIGAR_FOUND";
		case 414:
			return "TF_RARE_ORCHID_CLAMSHELL_FOUND";
		case 415:
			return "TF_RARE_ORCHID_DRAGONS_MOUTH_FOUND";
		case 416:
			return "TF_RARE_ORCHID_GHOST_FOUND";
		case 417:
			return "TF_RARE_ORCHID_LADY_SLIPPER_FOUND";
		case 418:
			return "TF_RARE_ORCHID_LADY_OF_NIGHT_FOUND";
		case 419:
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER_FOUND";
		case 420:
			return "TF_RARE_ORCHID_NIGHT_SCENTED_FOUND";
		case 421:
			return "TF_RARE_ORCHID_QUEENS_FOUND";
		case 422:
			return "TF_RARE_ORCHID_RAT_TAIL_FOUND";
		case 423:
			return "TF_RARE_ORCHID_SPARROWS_EGG_FOUND";
		case 424:
			return "TF_RARE_ORCHID_SPIDER_FOUND";
		case 425:
			return "TF_RARE_ORCHID_ACUNAS_STAR";
		case 426:
			return "TF_RARE_ORCHID_CIGAR";
		case 427:
			return "TF_RARE_ORCHID_CLAMSHELL";
		case 428:
			return "TF_RARE_ORCHID_DRAGONS_MOUTH";
		case 429:
			return "TF_RARE_ORCHID_GHOST";
		case 430:
			return "TF_RARE_ORCHID_LADY_SLIPPER";
		case 431:
			return "TF_RARE_ORCHID_LADY_OF_NIGHT";
		case 432:
			return "TF_RARE_ORCHID_MOCCASIN_FLOWER";
		case 433:
			return "TF_RARE_ORCHID_NIGHT_SCENTED";
		case 434:
			return "TF_RARE_ORCHID_QUEENS";
		case 435:
			return "TF_RARE_ORCHID_RAT_TAIL";
		case 436:
			return "TF_RARE_ORCHID_SPARROWS_EGG";
		case 437:
			return "TF_RARE_ORCHID_SPIDER";
		case 438:
			return "TF_ROCK_CARVINGS";
		case 439:
			return "TF_ROCK_CARVINGS_CABIN";
		case 440:
			return "TF_ROCK_CARVINGS_FIRST_REMINDER";
		case 441:
			return "TF_ROCK_CARVINGS_FIRST_REMINDER_STAGE1";
		case 442:
			return "TF_ROCK_CARVINGS_LAST_REMINDER";
		case 443:
			return "TF_ROCK_CARVINGS_INVITATION_USED";
		case 444:
			return "TF_TAXIDERMY_INVITATION_USED";
		case 445:
			return "TF_LEGEND_OF_EAST_OUTFIT_UNLOCKED";
		case 446:
			return "TF_LEGEND_OF_EAST_OUTFIT_ACQUIRED";
		case 447:
			return "TF_FULL_AMMO_REINFORCED_EQUIPMENT";
		case 448:
			return "TF_TX_RABBIT_FOUND";
		case 449:
			return "TF_TX_SQUIRREL_FOUND";
		case 450:
			return "TF_TX_CARDINAL_FOUND";
		case 451:
			return "TF_TX_RAT_FOUND";
		case 452:
			return "TF_TX_WOODPECKER_FOUND";
		case 453:
			return "TF_TX_CHIPMUNK_FOUND";
		case 454:
			return "TF_TX_OPOSSUM_FOUND";
		case 455:
			return "TF_TX_ORIOLE_FOUND";
		case 456:
			return "TF_TX_ROBIN_FOUND";
		case 457:
			return "TF_TX_SONGBIRD_FOUND";
		case 458:
			return "TF_TX_SPARROW_FOUND";
		case 459:
			return "TF_TX_TOAD_FOUND";
		case 460:
			return "TF_TX_SKUNK_FOUND";
		case 461:
			return "TF_TX_BULLFROG_FOUND";
		case 462:
			return "TF_TX_CEDARWAXWING_FOUND";
		case 463:
			return "TF_TX_BAT_FOUND";
		case 464:
			return "TF_TX_BLUEJAY_FOUND";
		case 465:
			return "TF_TX_CROW_FOUND";
		case 466:
			return "TF_TX_BEAVER_FOUND";
		case 467:
			return "TF_TX_ALL_INGREDIENTS_FOUND";
		case 468:
			return "TF_TX_FIRST_ORDER_RECEIVED";
		case 469:
			return "TF_TX_FINAL_ORDER_RECEIVED";
		case 470:
			return "TF_TX_ORDER_RECEIVED";
		case 471:
			return "TF_TX_HUNTING_WEAPONS";
		case 472:
			return "TF_CHAL_LOG";
		case 473:
			return "TF_CHAL_LOG_2";
		case 474:
			return "TF_CHAL_MULTIPLE_LOG_UNLOCKED";
		case 475:
			return "TF_CHAL_BANDIT_LOG_UNLOCKED";
		case 476:
			return "TF_CHAL_EXPLORER_LOG_UNLOCKED";
		case 477:
			return "TF_CHAL_GAMBLER_LOG_UNLOCKED";
		case 478:
			return "TF_CHAL_HERBALIST_LOG_UNLOCKED";
		case 479:
			return "TF_CHAL_HORSEMANSHIP_LOG_UNLOCKED";
		case 480:
			return "TF_CHAL_MASTER_HUNTER_LOG_UNLOCKED";
		case 481:
			return "TF_CHAL_SHARPSHOOTER_LOG_UNLOCKED";
		case 482:
			return "TF_CHAL_SURVIVALIST_LOG_UNLOCKED";
		case 483:
			return "TF_CHAL_WEAPONS_EXPERT_LOG_UNLOCKED";
		case 484:
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED";
		case 485:
			return "TF_CHAL_REINFORCED_EQUIPMENT_UNLOCKED_02";
		case 486:
			return "TF_REINFORCED_HEALTH_TANK";
		case 487:
			return "TF_REINFORCED_STAMINA_TANK";
		case 488:
			return "TF_REINFORCED_DEADEYE_TANK";
		case 489:
			return "TF_EA_LOGGING_HM";
		case 490:
			return "TF_EA_LOGGING_HM_FAIL";
		case 491:
			return "TF_RSC_H_JRN_AD";
		case 492:
			return "TF_RSC_H_JRN_UP";
		case 493:
			return "TF_ANIMAL_NEW_SKIN";
		case 494:
			return "TF_ANIMAL_NEW_PLUCK";
		case 495:
			return "TF_FIRST_SKIN";
		case 496:
			return "TF_FIRST_CARRY_COOK";
		case 497:
			return "TF_LEGENDARY_SKINNING";
		case 498:
			return "TF_LEGENDARY_ABANDONED";
		case 499:
			return "TF_MP_LEGENDARY_FIRST_SKIN";
		case 500:
			return "TF_MP_FIRST_SKIN";
		case 501:
			return "TF_MP_FIRST_ANIMAL_PARTS";
		case 502:
			return "TF_ITEM_BANDANA_WORN";
		case 503:
			return "TF_ITEM_BANDANA_USE";
		case 504:
			return "TF_ITEM_BANDANA_OFF";
		case 505:
			return "TF_MP_RUSTLING_OWNER_DEAD";
		case 506:
			return "TF_PROPERTY_PDOC_COLLECTED";
		case 507:
			return "TF_BINO_SATCHEL";
		case 508:
			return "TF_BINO_AIM";
		case 509:
			return "TF_BINO_ZOOM";
		case 510:
			return "TF_FAST_TRAVEL";
		case 511:
			return "TF_FAST_TRAVEL_COST";
		case 512:
			return "TTL_LAW_UNPAID_BOUNTY";
		case 513:
			return "TF_COMPANION_FOLLOW";
		case 514:
			return "TF_PLACED_DYNAMITE";
		case 515:
			return "TF_GUN_SWAP";
		case 516:
			return "TF_RIFLE_SCOPE";
		case 517:
			return "TF_CIG_CARD_FOUND";
		case 518:
			return "TF_CIG_CARD_FOUND_AFTER_STAGE1";
		case 519:
			return "TF_USEDITEM_FOUND";
		case 520:
			return "TF_CIG_PACK_FOUND";
		case 521:
			return "TF_GUN_OIL_FOUND";
		case 522:
			return "TF_COFFEE_FOUND";
		case 523:
			return "TF_INSTRUMENT_FOUND";
		case 524:
			return "TF_WHITKNIFE_FOUND";
		case 525:
			return "TF_WHITBLOCK_FOUND";
		case 526:
			return "TF_HAIRTONIC_FOUND";
		case 527:
			return "TF_BRDTONIC_REQUIRED";
		case 528:
			return "TF_BRDTONIC_WORNOFF";
		case 529:
			return "TF_HAIRGRS_FOUND";
		case 530:
			return "TF_HAIRGRS_WORNOFF";
		case 531:
			return "TF_SHAVING";
		case 532:
			return "TF_SEASONED_MEAT";
		case 533:
			return "TF_SEASONING_NEEDED";
		case 534:
			return "TF_COFFEE_KIT";
		case 535:
			return "TF_CAMP_ITEMS";
		case 536:
			return "TF_JEWELRY_FOUND";
		case 537:
			return "TF_SHOPROB_INTRO";
		case 538:
			return "TF_SHOPROB_RHDGUN";
		case 539:
			return "TF_SHOP_CATALOG";
		case 540:
			return "TF_SHOP_ILO";
		case 541:
			return "TF_SHOP_ILO_FOREMAN";
		case 542:
			return "TF_SHOP_POST_OFFICE";
		case 543:
			return "TF_SHOP_POST_MP";
		case 544:
			return "TF_SHOP_POST_MP_CAMP";
		case 545:
			return "TF_SHOP_DUAL_BUY";
		case 546:
			return "TF_SHOP_SHELF_INTERACT";
		case 547:
			return "TF_SHOP_NO_CLOTHES";
		case 548:
			return "TF_SHOP_ON_FOOT";
		case 549:
			return "TF_SHOP_TRAPPER_MEET";
		case 550:
			return "TF_SHOP_TRAPPER_WANDER";
		case 551:
			return "TF_SHOP_TRAPPER_LEGENDARY_CRAFT";
		case 552:
			return "TF_SHOP_BUTCHER_HORSE_CARGO";
		case 553:
			return "TF_SHOP_TRAPPER_HORSE_CARGO";
		case 554:
			return "TF_SHOP_PRONGHORN_CATALOGUE";
		case 555:
			return "TF_SHOP_PRONGHORN_GUNSMITH";
		case 556:
			return "TF_SHOP_PRONGHORN_FENCE";
		case 557:
			return "TF_SHOP_PRONGHORN_TRAPPER";
		case 558:
			return "TF_WEAPON_SHOP_UNLOCK";
		case 559:
			return "TF_WEAPON_MOD_UNLOCK";
		case 560:
			return "TF_WEAPON_SHOP_MOD_UNLOCK";
		case 561:
			return "TF_WEAPONS_MULTI_UNLOCK";
		case 562:
			return "TF_SPECIAL_LURES_UNLOCK";
		case 563:
			return "TF_HONOR_HIGH_SHOP";
		case 564:
			return "TF_MP_WHISTLE_CAMP";
		case 565:
			return "TF_MP_INTRO_MISSION";
		case 566:
			return "TF_MP_GANG_SETUP";
		case 567:
			return "TF_MP_GANG_BOUNTY";
		case 568:
			return "TF_MP_BOUNTY_LIMIT_REACHED";
		case 569:
			return "TF_MP_STAT_CHALLENGES";
		case 570:
			return "TF_MP_PVP_SHOWDOWN";
		case 571:
			return "TF_MP_DEADEYE_REPLACEMENT";
		case 572:
			return "TF_MP_DEADEYE_PASSIVE";
		case 573:
			return "TF_MP_RECIPE_JOURNAL_ADD";
		case 574:
			return "TF_MP_HERB_JOURNAL_ADD";
		case 575:
			return "TF_MP_HERB_JOURNAL_PROP";
		case 576:
			return "TF_MP_ALASKAN_GINSENG_NOT_LEARNED";
		case 577:
			return "TF_MP_AMERICAN_GINSENG_NOT_LEARNED";
		case 578:
			return "TF_MP_BURDOCK_NOT_LEARNED";
		case 579:
			return "TF_MP_HUMMINGBIRD_NOT_LEARNED";
		case 580:
			return "TF_MP_SNOWDROP_NOT_LEARNED";
		case 581:
			return "TF_MP_BUY_HORSE_EQUIPMENT";
		case 582:
			return "TF_MP_SKINNING";
		case 583:
			return "TF_MP_REVIVE";
		case 584:
			return "TF_MP_CANT_REVIVE_CARRYING";
		case 585:
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT";
		case 586:
			return "TF_MP_SHOP_HORSE_PROTECTION";
		case 587:
			return "TF_MP_BARBER_HORSE_PROTECTION";
		case 588:
			return "TF_MP_HANDHELD_CATALOUGE";
		case 589:
			return "TF_MP_ABILITY_CARD_SLOT_EMPTY";
		case 590:
			return "TF_MP_LOOTABLES_1";
		case 591:
			return "TF_MP_LOOTABLES_2";
		case 592:
			return "TF_MP_HORSE_REVIVE";
		case 593:
			return "TF_MP_HORSE_REVIVE_NO_ITEM";
		case 594:
			return "TF_MP_BONDING_EARNED_TRAMPLE_ENEMY";
		case 595:
			return "TF_MP_BONDING_EARNED_BOW_KILL";
		case 596:
			return "TF_MP_PLAYER_HORSE_STOLEN";
		case 597:
			return "TF_MP_STABLE_UPKEEP_FEE";
		case 598:
			return "TF_MP_HORSE_TAME_MOUNT";
		case 599:
			return "TF_MP_HORSE_TAME_MOUNTED";
		case 600:
			return "TF_MP_HORSE_TAME_SUCCESS";
		case 601:
			return "TF_MP_HORSE_TAME_BUCKED_OFF";
		case 602:
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD";
		case 603:
			return "TF_MP_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 604:
			return "TF_MP_HORSE_VET_FEES";
		case 605:
			return "TF_MP_CAMP_CRAFTING";
		case 606:
			return "TF_MP_CAMP_NO_SKINNED_ANIMAL";
		case 607:
			return "TF_MP_CAMP_BIGGER_WAGON_NEEDED";
		case 608:
			return "TF_MP_CAMP_WHITE_FLAG_RAISED";
		case 609:
			return "TF_MP_CAMP_WHITE_FLAG_RAISED_LEADER";
		case 610:
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED";
		case 611:
			return "TF_MP_CAMP_WHITE_FLAG_LOWERED_LEADER";
		case 612:
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_RAISE";
		case 613:
			return "TF_MP_CAMP_WHITE_FLAG_COOLDOWN_LOWER";
		case 614:
			return "TF_MP_CAMP_WHITE_FLAG_CONTENT";
		case 615:
			return "TF_MP_CAMP_WHITE_FLAG_TURRET";
		case 616:
			return "TF_MP_CAMP_FOLLOWER_DEAD";
		case 617:
			return "TF_MP_CAMP_SLEEP";
		case 618:
			return "TF_MP_CAMP_CUSTOMIZE";
		case 619:
			return "TF_MP_WEAPON_LOCKER_PURCHASED";
		case 620:
			return "TF_MP_CAMP_DOG_CAMP_RAID_WARN";
		case 621:
			return "TF_MP_CHALLENGE_COMPLETED_AWARD";
		case 622:
			return "TF_MP_XMAS_2019_KRAMPUS_AWARD";
		case 623:
			return "TF_AMBIENT_HORSE_TRADING_AVAILABLE";
		case 624:
			return "TF_FIRST_STOLEN_HORSE_WITH_HORSE_TRADING";
		case 625:
			return "TF_COMPANION_ACTIVITY";
		case 626:
			return "TF_COMPANION_BANK";
		case 627:
			return "TF_CARAVAN_HORSE_DISMOUNT";
		case 628:
			return "TF_CARAVAN_WAGON_DISMOUNT";
		case 629:
			return "TF_CARAVAN_NO_CARRY_DEAD";
		case 630:
			return "TF_CARAVAN_NO_CARRY_HOGTIED";
		case 631:
			return "TF_CARAVAN_BLIP";
		case 632:
			return "TF_CARAVAN_SUPPLIES";
		case 633:
			return "TTL_LAW_DELAYED_RESPONSE";
		case 634:
			return "TTL_LAW_DELAYED_RESPONSE_FUS";
		case 635:
			return "TTL_LAW_BOUNTY_HUNTERS";
		case 636:
			return "TTL_LAW_STATE_BOUNTY";
		case 637:
			return "TTL_LAW_REGION_INCREASE";
		case 638:
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_1";
		case 639:
			return "TTL_LAW_REGION_LOCKDOWN_ZONE_2";
		case 640:
			return "TTL_LAW_RESTRICTED_AREA";
		case 641:
			return "TTL_HIDE_BODY";
		case 642:
			return "TF_CARAVAN_HUNGER";
		case 643:
			return "TF_CARAVAN_STEW_MISSING";
		case 644:
			return "TF_CARAVAN_STEW_ALREADY_SERVED";
		case 645:
			return "TF_CARAVAN_STEW_PLAYER_SERVED";
		case 646:
			return "TF_DISTRICT_CAMP_MAP";
		case 647:
			return "TF_CARAVAN_SHOOTING";
		case 648:
			return "TF_CARAVAN_SHOOTING_BEECHERS";
		case 649:
			return "TF_VIGNETTE_WASH";
		case 650:
			return "TF_PED_INTERACTION";
		case 651:
			return "TF_HERDING_1";
		case 652:
			return "TF_HERDING_2";
		case 653:
			return "TF_HERDING_3";
		case 654:
			return "TF_HERDING_4";
		case 655:
			return "TF_HERDING_STRAGGLER_1";
		case 656:
			return "TF_HERDING_STRAGGLER_2";
		case 657:
			return "TF_BADGER_CLAW_TRINKET";
		case 658:
			return "TF_GRY3_RHODES_LAW";
		case 659:
			return "TF_RDTC1_GOLD";
		case 660:
			return "TF_RDTC1_FIRST_PERSON_REMINDER";
		case 661:
			return "TF_CARAVAN_MISSION_BLIPS";
		case 662:
			return "TF_INSPECTION_TOGGLE_VIEW";
		case 663:
			return "TF_HONOR_GAIN_CHAPTER_2_BOUNTY_1";
		case 664:
			return "TF_HONOR_CHAPTER_3_MARY_0_2";
		case 665:
			return "TF_HONOR_LOSS_CHAPTER_3_MARY_1";
		case 666:
			return "TF_HONOR_GAIN_CHAPTER_3_MARY_1";
		case 667:
			return "TF_HONOR_GAIN_CHAPTER_4_NATIVE_0";
		case 668:
			return "TF_HONOR_GAIN_CHAPTER_4_SUSAN_1";
		case 669:
			return "TF_HONOR_LOSE_CHAPTER_4_SUSAN_1";
		case 670:
			return "TF_HONOR_OPTIONAL_MISSION";
		case 671:
			return "TF_SCENT_BLOCKER_USED";
		case 672:
			return "TF_SCENT_BLOCKER_EXPIRED";
		case 673:
			return "TF_SATCHEL_FULL";
		case 674:
			return "TF_SATCHEL_FULL_ANIMAL";
		case 675:
			return "TF_INCREASE_POUCH_CAPACITY";
		case 676:
			return "TF_DEADEYE_EMPTY";
		case 677:
			return "TF_DEADEYE_UNLOCK_LEVEL_2";
		case 678:
			return "TF_DEADEYE_UNLOCK_LEVEL_3";
		case 679:
			return "TF_DEADEYE_UNLOCK_LEVEL_4";
		case 680:
			return "TF_DEADEYE_UNLOCK_LEVEL_5";
		case 681:
			return "TF_DEADEYE_UNLOCK_LEVEL_2_REMINDER";
		case 682:
			return "TF_DEADEYE_UNLOCK_LEVEL_3_REMINDER";
		case 683:
			return "TF_DEADEYE_UNLOCK_LEVEL_4_REMINDER";
		case 684:
			return "TF_DEADEYE_UNLOCK_LEVEL_5_REMINDER";
		case 685:
			return "TF_FORTIFY_TANK";
		case 686:
			return "TF_FORTIFY_CORE";
		case 687:
			return "TF_MISSION_AREA_BLIP";
		case 688:
			return "TF_ALT_AMMO";
		case 689:
			return "TF_COMPASS";
		case 690:
			return "TF_NO_RADAR";
		case 691:
			return "TF_VIEW_PHOTOS";
		case 692:
			return "TF_PICK_HERB";
		case 693:
			return "TF_CARAVAN_HITCHED_HORSE";
		case 694:
			return "TF_CARAVAN_HITCHED_HORSE_EXISTS";
		case 695:
			return "TF_CARAVAN_CRAFTING_FIRE";
		case 696:
			return "TF_BEECHERS_CRAFTING_FIRE";
		case 697:
			return "TF_STUDY_BINOC";
		case 698:
			return "TF_MISSIONS_LOCKED_WANTED";
		case 699:
			return "TF_AIM_AMBUSH";
		case 700:
			return "TF_ROB_AMBUSH";
		case 701:
			return "TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES";
		case 702:
			return "TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD";
		case 703:
			return "TF_CAMERA_ITEM";
		case 704:
			return "TF_CAMP_CARRIABLES_NO_CORPSES";
		case 705:
			return "TF_CAMP_CARRIABLES_NO_CORPSES_RANCH";
		case 706:
			return "TF_CAMP_CARRIABLES_PEARSON";
		case 707:
			return "TF_CAMP_CARRIABLES_UNCLE";
		case 708:
			return "TF_WEAPON_FAMILIARITY";
		case 709:
			return "TF_DIFFERENT_HORSES";
		case 710:
			return "TF_PLAY_SPECIAL";
		case 711:
			return "TF_PLAY_ULTIMATE";
		case 712:
			return "TF_GANG_TAKE";
		case 713:
			return "TF_MP_LB_DPAD";
		case 714:
			return "TF_MP_LB_HLP";
		case 715:
			return "TF_MP_IC_EWC";
		case 716:
			return "TF_MP_IC_FTB";
		case 717:
			return "TF_MP_IC_WOC_FFA";
		case 718:
			return "TF_MP_IC_WOC_TEAM";
		case 719:
			return "TF_MP_IC_TT";
		case 720:
			return "TF_MP_IC_SO";
		case 721:
			return "TF_MP_IC_TSO";
		case 722:
			return "TF_MP_IC_GR_FFA";
		case 723:
			return "TF_MP_IC_GR_TEAM";
		case 724:
			return "TF_MP_STD_RACE";
		case 725:
			return "TF_MP_OPEN_RACE";
		case 726:
			return "TF_MP_FL_OL";
		case 727:
			return "TF_MP_FL_GS";
		case 728:
			return "TF_MP_FL_HOR";
		case 729:
			return "TF_MP_FL_HOR_R";
		case 730:
			return "TF_MP_FL_HOR_C";
		case 731:
			return "TF_MP_FL_HOR_J";
		case 732:
			return "TF_MP_FL_HOR_END";
		case 733:
			return "TF_MP_BONUS_EXCLUSIVE";
		case 734:
			return "TF_MP_BONUS_SPECIAL";
		case 735:
			return "TF_MP_XP_BONUS_ULTIMATE";
		case 736:
			return "TF_MP_COOP_HELP_TEXT_WITH_POSSE";
		case 737:
			return "TF_MP_COOP_HELP_TEXT_SOLO";
		case 738:
			return "TF_MP_WANTED_LOOTING";
		case 739:
			return "TF_MP_SATCHEL_FULL";
		case 740:
			return "TF_MP_SATCHEL_FULL_ANIMAL";
		case 741:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT1";
		case 742:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT2";
		case 743:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT3";
		case 744:
			return "TF_MP_IC_HOSTILE_TERRITORY_TUT4";
		case 745:
			return "TF_MP_BOUNTY_LOW";
		case 746:
			return "TF_MP_BOUNTY_MEDIUM";
		case 747:
			return "TF_MP_BOUNTY_HIGH";
		case 748:
			return "TF_MP_BOUNTY_FOLLOW_UP";
		case 749:
			return "TF_MP_BOUNTY_PAID_OFF";
		case 750:
			return "TF_MP_BOUNTY_HUNTERS_KILLED";
		case 751:
			return "TF_MP_BOUNTY_HUNTERS_ESCAPED";
		case 752:
			return "TF_MP_TARGET_RACE";
		case 753:
			return "TF_MP_IC_CTF_DROP";
		case 754:
			return "TF_MP_SHOP_NO_INTERACT_IN_COMBAT_LB";
		case 755:
			return "TF_MP_DAILY_CHALLENGES_FIRST_TIME";
		case 756:
			return "TF_MP_BOUNTY_HUNTERS_CANT_PAY";
		case 757:
			return "TF_MP_NOTORIETY_FIRST_TIME";
		case 758:
			return "TF_MP_SHOP_NO_INTERACT_BANDANA";
		case 759:
			return "TF_MP_REMOVE_DEFENSIVE_MODE";
		case 760:
			return "TF_MP_CHARGES_PRESSED";
		case 761:
			return "TF_MP_PRESSED_CHARGES";
		case 762:
			return "TF_MP_KILLED_DEFENSIVE_PLAYER";
		case 763:
			return "TF_MP_DEFENSIVE_FORCE";
		case 764:
			return "TF_MP_DEFENSIVE_FIRST";
		case 765:
			return "TF_MP_LEMAT_REVOLVER";
		case 766:
			return "TF_MP_HELP_HOSTILITY_RESET";
		case 767:
			return "TF_MP_DEFEND_AGAINST_HOSTILE_PLAYERS";
		case 768:
			return "TF_MP_HOSTILE_JOINED_POSSE";
		case 769:
			return "TF_MP_SHOP_TRAVELLING_SALESMAN_CAMP";
		case 770:
			return "TF_MP_COLLECTORS_BAG";
		case 771:
			return "TF_MP_COLLECTIBLE_MAP_RANDOM";
		case 772:
			return "TF_MP_COLLECTIBLE_MAP";
		case 773:
			return "TF_MP_COLLECTIBLE_WEEKLY_AVAILABLE";
		case 774:
			return "TF_MP_COLLECTIBLE_OPEN_WEEKLY_LIST";
		case 775:
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_INTRO";
		case 776:
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_INTRO";
		case 777:
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_INTRO";
		case 778:
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_INTRO";
		case 779:
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_INTRO";
		case 780:
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_INTRO";
		case 781:
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_INTRO";
		case 782:
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_INTRO";
		case 783:
			return "TF_MP_COLLECTIBLE_BOTTLES_INTRO";
		case 784:
			return "TF_MP_COLLECTIBLE_COINS_INTRO";
		case 785:
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_INTRO";
		case 786:
			return "TF_MP_COLLECTIBLE_ARROWHEADS_INTRO";
		case 787:
			return "TF_MP_COLLECTIBLE_FLOWERS_INTRO";
		case 788:
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_INTRO";
		case 789:
			return "TF_MP_COLLECTIBLE_TAROT_CUPS_SET_COMPLETE";
		case 790:
			return "TF_MP_COLLECTIBLE_TAROT_SWORDS_SET_COMPLETE";
		case 791:
			return "TF_MP_COLLECTIBLE_TAROT_WANDS_SET_COMPLETE";
		case 792:
			return "TF_MP_COLLECTIBLE_TAROT_PENTACLES_SET_COMPLETE";
		case 793:
			return "TF_MP_COLLECTIBLE_JEWELRY_RINGS_SET_COMPLETE";
		case 794:
			return "TF_MP_COLLECTIBLE_JEWELRY_BRACELETS_SET_COMPLETE";
		case 795:
			return "TF_MP_COLLECTIBLE_JEWELRY_EARRINGS_SET_COMPLETE";
		case 796:
			return "TF_MP_COLLECTIBLE_JEWELRY_NECKLACES_SET_COMPLETE";
		case 797:
			return "TF_MP_COLLECTIBLE_BOTTLES_SET_COMPLETE";
		case 798:
			return "TF_MP_COLLECTIBLE_COINS_SET_COMPLETE";
		case 799:
			return "TF_MP_COLLECTIBLE_HEIRLOOMS_SET_COMPLETE";
		case 800:
			return "TF_MP_COLLECTIBLE_ARROWHEADS_SET_COMPLETE";
		case 801:
			return "TF_MP_COLLECTIBLE_FLOWERS_SET_COMPLETE";
		case 802:
			return "TF_MP_COLLECTIBLE_BIRD_EGGS_SET_COMPLETE";
		case 803:
			return "TF_MP_COLLECTIBLE_BUY_BAG";
		case 804:
			return "TF_MP_COLLECTIBLE_FIND_SALESWOMAN";
		case 805:
			return "TF_MP_COLLECTIBLE_FOUND_CONDOR_EGG";
		case 806:
			return "TF_MP_COLLECTIBLES_COLLECTED";
		case 807:
			return "TF_MP_NB_RIVAL_COLLECTOR_RC_KILLED";
		case 808:
			return "TF_MP_NB_GRAVEROBBER_INTRO";
		case 809:
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL";
		case 810:
			return "TF_MP_NB_GRAVEROBBER_DIGGING_SITES";
		case 811:
			return "TF_MP_NB_GRAVEROBBER_NO_FIND";
		case 812:
			return "TF_MP_NB_GRAVEROBBER_NO_SHOVEL_POSSE";
		case 813:
			return "TF_LEARN_RECIPE";
		case 814:
			return "TF_HORSE_CALL_HORSE_VEHICLE";
		case 815:
			return "TF_VEHICLE_FULL_FISH";
		case 816:
			return "TF_VEHICLE_UNSUPPORTED_FISH";
		case 817:
			return "TF_MP_METAL_DETECTOR";
		case 818:
			return "TF_MP_BROKE_EGG_IN_NEST";
		case 819:
			return "TF_MP_SKILL_POTENTIAL";
		case 820:
			return "TF_MP_SKILL_INTUITION";
		case 821:
			return "TF_MP_SKILL_DIVNATION";
		case 822:
			return "TF_MP_SKILL_ASSISTANCE";
		case 823:
			return "TF_MP_SKILL_COLLECTOR_EVENTS";
		case 824:
			return "TF_MP_SKILL_EAGLE_EYE_PLUS";
		case 825:
			return "TF_MP_SKILL_FOCUS";
		case 826:
			return "TF_MP_SKILL_PERCEPTION";
		case 827:
			return "TF_MP_SKILL_DUCKING_INTRO";
		case 828:
			return "TF_MP_SKILL_DUCKING";
		case 829:
			return "TF_MP_SKILL_BOUNTY_EVENTS";
		case 830:
			return "TF_MP_SKILL_BOUNTY_MEDIUM";
		case 831:
			return "TF_MP_SKILL_BOUNTY_HARD";
		case 832:
			return "TF_MP_SKILL_BOUNTY_PLAYER";
		case 833:
			return "TF_MP_SKILL_EFFICIENCY";
		case 834:
			return "TF_MP_SKILL_AWARENESS";
		case 835:
			return "TF_MP_SKILL_PROTECTION";
		case 836:
			return "TF_MP_SKILL_DOG_WARNING";
		case 837:
			return "TF_MP_SKILL_DOG_WARNING_NO_DOG";
		case 838:
			return "TF_MP_SKILL_TRADER_EVENTS";
		case 839:
			return "TF_MP_SKILL_GUN_TRICK_FIRST";
		case 840:
			return "TF_MP_SKILL_GUN_TRICK";
		case 841:
			return "TF_MP_SKILL_GUN_TRICK_DUAL";
		case 842:
			return "TF_MP_SKILL_TONIC_INCREASE";
		case 843:
			return "TF_MP_SKILL_KIT_INCREASE";
		case 844:
			return "TF_MP_SKILL_PROVISION_INCREASE";
		case 845:
			return "TF_MP_SKILL_VALUABLES_INCREASE";
		case 846:
			return "TF_MP_SKILL_INGREDIENTS_INCREASE";
		case 847:
			return "TF_MP_SKILL_HUNTING_MAT_INCREASE";
		case 848:
			return "TF_MP_GET_METAL_DETECTOR";
		case 849:
			return "TF_MP_GET_IMPROVED_BINOCULARS";
		case 850:
			return "TF_MP_GET_SHOVEL";
		case 851:
			return "TF_HUNTING_WAGON_INTRO";
		case 852:
			return "TF_BOUNTY_WAGON_INTRO";
		case 853:
			return "TF_MP_BOUNTY_WAGON_ON_MISSION";
		case 854:
			return "TF_MP_BOUNTY_WAGON_DESTROYED_ON_MISSION";
		case 855:
			return "TF_MP_BOUNTY_WAGON_STOW";
		case 856:
			return "TF_HUNTING_WAGON_STOW_INTRO";
		case 857:
			return "TF_TRADDER_LETTER_INTRO";
		case 858:
			return "TF_MP_FL_TRA_COL";
		case 859:
			return "TF_MP_FL_TRA_COLA";
		case 860:
			return "TF_MP_FL_TRA_READ";
		case 861:
			return "TF_MP_FL_TRA_MEET";
		case 862:
			return "TF_MP_CROSS_PROMO_GTAO_CARDS";
		case 863:
			return "TF_MP_CROSS_PROMO_GTAO_CARDS_PONCHO";
		case 864:
			return "TF_MP_CROSS_PROMO_GTAO_MASK";
		case 865:
			return "TF_MP_START_MOONSHINER";
		case 866:
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN1";
		case 867:
			return "TF_MP_FL_GVO_DONE_HONOR_REMAIN2";
		case 868:
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN1";
		case 869:
			return "TF_MP_FL_GVO_DONE_DISHONOR_REMAIN2";
		case 870:
			return "TF_MP_FL_GVO_DONE_NONE_REMAIN";
		case 871:
			return "TF_MP_FL_WEAPON_QUICK_SWAP_ASSIGN";
		case 872:
			return "TF_MP_FL_WEAPON_QUICK_SWAP_HOSLTER";
		case 873:
			return "TF_MP_FL_MOONSHINER_PROPERTY_MOVED";
		case 874:
			return "TF_MP_MOONSHINER_ENTER_PROPERTY";
		case 875:
			return "TF_MP_MOONSHINER_FIRST_SETUP_COMPLETE";
		case 876:
			return "TF_MP_MOONSHINER_BUSINESS_READY1";
		case 877:
			return "TF_MP_MOONSHINER_BUSINESS_READY2";
		case 878:
			return "TF_MP_MOONSHINER_NO_XP";
		case 879:
			return "TF_MP_MOONSHINER_GATING_ITEM_NOT_BOUGHT";
		case 880:
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED";
		case 881:
			return "TF_MP_MOONSHINER_PROPERTY_FIRST_SELECTED2";
		case 882:
			return "TF_MP_MOONSHINER_PROPERTY_SELECTED_POSSE";
		case 883:
			return "TF_MP_MOONSHINER_FIRST_TIME_GOT_DRUNK";
		case 884:
			return "TF_MP_SKILL_MOONSHINE_FLAVOUR";
		case 885:
			return "TF_MP_SKILL_UNLOCKED";
		case 886:
			return "TF_MP_MOONSHINER_DANCE_SHORTCUTS";
		case 887:
			return "TF_MP_MOONSHINER_DANCE_INSTRUCT";
		case 888:
			return "TF_MP_MOONSHINER_APPROACH";
		case 889:
			return "TF_MP_MOONSHINER_THEME_CHANGED";
		case 890:
			return "TF_MP_MOONSHINER_BAR_OPEN";
		case 891:
			return "TF_MP_MOONSHINER_STANDARD_MOONSHINE_STOCK";
		case 892:
			return "TF_MP_MOONSHINER_BARTENDING_AVAILABLE";
		case 893:
			return "TF_MP_MOONSHINER_PLAYER_TENDING_BAR";
		case 894:
			return "TF_MP_MOONSHINER_BAND_INTRO";
		case 895:
			return "TF_MP_MOONSHINER_BAND_WRAP_UP";
		case 896:
			return "TF_MP_MOONSHINE_JUG";
		case 897:
			return "TF_MP_MOONSHINE_LAST_BATCH";
		case 898:
			return "TF_MP_MOONSHINE_NOT_POSSE_LEADER";
		case 899:
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P1";
		case 900:
			return "TF_MP_MOONSHINE_HELP_FLAVOR_P2";
		case 901:
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON";
		case 902:
			return "TF_MP_MOONSHINE_MAGGIE_NO_BOOT";
		case 903:
			return "TF_MP_MOONSHINE_MAGGIE_NO_MOON_OR_BOOT";
		case 904:
			return "TF_MP_MOONSHINE_NOT_ELIGIBLE_FROM_LANDING";
		case 905:
			return "TF_MP_MOONSHINE_USE_CINEMATIC_CAM";
		case 906:
			return "TF_MP_MOONSHINE_STORY_MISSIONS";
		case 907:
			return "TF_MP_MOONSHINE_LOWEST_MASH_PRICE";
		case 908:
			return "TF_MP_NATURALIST_INTRO_HARRIET";
		case 909:
			return "TF_MP_NATURALIST_INTRO_GUS";
		case 910:
			return "TF_MP_NATURALIST_ROLE_INTRO";
		case 911:
			return "TF_MP_NATURALIST_HARRIETS_SHOP";
		case 912:
			return "TF_MP_NATURALIST_COMPENDIUM";
		case 913:
			return "TF_MP_NATURALIST_COMPENDIUM2";
		case 914:
			return "TF_MP_NATURALIST_COMPENDIUM3";
		case 915:
			return "TF_MP_NATURALIST_COMPENDIUM4";
		case 916:
			return "TF_MP_NATURALIST_COMPENDIUM5";
		case 917:
			return "TF_MP_NATURALIST_COMPENDIUM6";
		case 918:
			return "TF_MP_NATURALIST_BUY_VARMINT_RIFLE";
		case 919:
			return "TF_MP_NATURALIST_HARRIET_CLOSED";
		case 920:
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_PRE_INTRO";
		case 921:
			return "TF_MP_NATURALIST_LEGENDARY_SKIN_POST_INTRO";
		case 922:
			return "TF_MP_NATURALIST_GROUP_COMPLETE";
		case 923:
			return "TF_MP_NATURALIST_FARMLAND_GROUP_COMPLETE";
		case 924:
			return "TF_MP_NATURALIST_DESERT_GROUP_COMPLETE";
		case 925:
			return "TF_MP_NATURALIST_BAYOU_GROUP_COMPLETE";
		case 926:
			return "TF_MP_NATURALIST_MOUNTAIN_GROUP_COMPLETE";
		case 927:
			return "TF_MP_NATURALIST_FOREST_GROUP_COMPLETE";
		case 928:
			return "TF_MP_NATURALIST_LEGMELANISTIC_GROUP_COMPLETE";
		case 929:
			return "TF_MP_NATURALIST_LEGALBINO_GROUP_COMPLETE";
		case 930:
			return "TF_MP_NATURALIST_LEGREDBLOND_GROUP_COMPLETE";
		case 931:
			return "TF_MP_NATURALIST_LEGPATTERN_GROUP_COMPLETE";
		case 932:
			return "TF_MP_NATURALIST_COMMON_GROUP_COMPLETE";
		case 933:
			return "TF_MP_VEHICLE_APPROACHING_CLEANUP";
		case 934:
			return "TF_MP_TRANQUILZER_AMMO";
		case 935:
			return "TF_MP_KILL_TRANQUILZER_AMMO";
		case 936:
			return "TF_MP_NATURALIST_MAX_SAMPLES";
		case 937:
			return "TF_MP_NATURALIST_REVIVE_NO_ITEM";
		case 938:
			return "TF_MP_NATURALIST_NO_SMPL_FIRE";
		case 939:
			return "TF_MP_NATURALIST_NO_SKIN_SMPLD";
		case 940:
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_1";
		case 941:
			return "TF_MP_ANIMAL_CONTROL_PAMPHLET_2";
		case 942:
			return "TF_MP_FIRST_LEGENDARY_ANIMAL_PARTS";
		case 943:
			return "TF_MP_FIRST_ANIMAL_PARTS_TRADER";
		case 944:
			return "TF_MP_FIRST_SKIN_TRADER";
		case 945:
			return "TF_MP_LEGENDARY_ANIMAL_DAMAGED_UNCLEANLY";
		case 946:
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_FAILED";
		case 947:
			return "TF_MP_LEGENDARY_ANIMAL_PHEROMONE_UNCLEAR_RESPONSE";
		case 948:
			return "TF_MP_ADVANCED_CAMERA_USED";
		case 949:
			return "TF_MP_NATURALIST_SONY_EXCLUSIVE";
		case 950:
			return "TF_MP_MP007_SONY_EXCLUSIVE_LOGIN";
		case 951:
			return "TF_MP_CUTSCENE_CANCELED_FROM_MISSION";
		case 952:
			return "TF_MP_ITEM_FULL_SPECIFIC";
		case 953:
			return "TF_MP_ITEM_FULL_GENERIC";
		case 954:
			return "TF_MP_ANIMAL_CONTROL_CANCEL_FOR_MISSION";
		case 955:
			return "TF_MP_TRADER_RESUPPLY_INITIATED";
		case 956:
			return "TF_MP_TRADER_RESUPPLY_COMPLETED";
		case 957:
			return "TF_MP_HARDCORE_SERIES_INFO_0";
		case 958:
			return "TF_MP_HARDCORE_SERIES_INFO_1";
		case 959:
			return "TF_MP_NATURALIST_HARRIET_KILL_ANIMALS";
		case 960:
			return "TF_MP_CHALLENGES_ROLE_DAILY_LIMIT";
		case 961:
			return "TF_MP_UPGRADE_BOUNTY_LICENSE";
		case 962:
			return "TF_MP_UPGRADE_BOUNTY_LICENSE_PRE_CUTSCENE";
		case 963:
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD";
		case 964:
			return "TF_MP_XMAS_2020_KRAMPUS_AWARD_2";
		case 965:
			return "TF_MP_SKILL_DYNAMIC_MISSIONS";
		case 966:
			return "TF_MP_INTRO_HORSE_VOUCHER";
		case 967:
			return "TF_MP_INTRO_HORSE_VOUCHER_REMINDER";
		case 968:
			return "TF_MP_CHALLENGES_STREAK_ONE_TIME_RESET";
		case 969:
			return "TF_MP_CHALLENGES_STREAK_COMPLETE_RESET";
		case 970:
			return "TF_MP_CHALLENGES_ROLE_BOUNTY_HUNTER_011";
		case 971:
			return "TF_MP_CLOUD_LETTER_TELEGRAM_COLLECTED";
		case 972:
			return "NUM_CURRENT_TUTORIALS";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

bool func_795(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_38.f_3538)
	{
		if (Global_38.f_3538[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904703.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_38.f_3538[iVar0 /*3*/]);
			DEBUG::_0x1B08D1EB9D8C4931(168, 105, "IS_TIMED_TUTORIAL_DELAYED_OR_FINISHED time since last played tutorial ", func_794(iParam0, 0), " Seconds ", iVar2);
			DEBUG::_0x1B08D1EB9D8C4931(136, 105, " iTimesRun ", Global_38.f_3538[iVar0 /*3*/].f_1, " iMaxRun ", iVar3);
			if (Global_38.f_3538[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904703.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_796(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_797()
{
	if (!func_817())
	{
		return false;
	}
	return Global_1904703.f_8783;
}

void func_798(int iParam0, char* sParam1)
{
	if (iParam0 <= 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: ", iParam0, " is non-positive, ignoring!");
		return;
	}
	DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Adding ", iParam0, ", Current = ", Global_1913655.f_127);
	if (func_818())
	{
		Global_1913655.f_125 = MISC::GET_GAME_TIMER();
		Global_1913655.f_126 = sParam1;
		DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Queue is currently empty, setting timer to ", sParam1, "ms");
	}
	else
	{
		DEBUG::_0xF0783374333FD8CE(136, 158, "ADD_CASH_TO_DELAYED_QUEUE: Queue timer is already started, timer will trigger in ", ((Global_1913655.f_125 + Global_1913655.f_126) - MISC::GET_GAME_TIMER()), "ms");
	}
	Global_1913655.f_127 = (Global_1913655.f_127 + iParam0);
}

var func_799(int iParam0)
{
	return MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iParam0) / 100f), 2);
}

bool func_800()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_801()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

bool func_802(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Item Name: ", UNK_0x4379B6FA65D55295(Var3));
		DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Item Desc: ", UNK_0x4379B6FA65D55295(Var3.f_1));
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @440; //curOff = 94
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with type: ", func_712(Var3.f_2[iVar0 /*3*/].f_2, 0));
					Jump @440; //curOff = 202
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/].f_1);
					Jump @440; //curOff = 247
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
					Jump @440; //curOff = 290
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
					DEBUG::_0x1B08D1EB9D8C4931(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Skipping entry with dict: ", Var3.f_2[iVar0 /*3*/]);
				}
				else
				{
					DEBUG::_0x4DC69742196F818A(168, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Texture: ", Var3.f_2[iVar0 /*3*/], " with hash ", iVar1);
					DEBUG::_0x4DC69742196F818A(168, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED:    Dict: ", Var3.f_2[iVar0 /*3*/].f_1, " with hash ", iVar2);
					DEBUG::_0x4DC69742196F818A(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED:    Type: ", func_712(Var3.f_2[iVar0 /*3*/].f_2, 0));
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		DEBUG::_0xD9911C7B5F8CD69C(40, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Unable to fillout UI data for item ", func_225(bParam0, 0));
	}
	DEBUG::_0x9A6C65DDDBEC9C52(680, 158, "FIND_INVENTORY_ITEM_TEXTURE_UI_DATA_HASHED: Unable to find texture of type ", func_712(iParam2, 0), " for item ", func_225(bParam0, 0));
	return false;
}

int func_803(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_127(sParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_804(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Attempted to update an invalid transaction ID");
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272425.f_20)
	{
		if (Global_1272425.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
				DEBUG::_0x4DC69742196F818A(648, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Transaction ", iParam0, " status was already ", func_771(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0));
			}
			else
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " status from ", func_771(Global_1272425.f_20.f_1[iVar0 /*21*/].f_1, 0), " to ", func_771(iParam1, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				DEBUG::_0xA308F935BDECCEC0(10888, 157, "UPDATE_CASHINVENTORY_TRANSACTION_STATUS - Updated transaction ", iParam0, " batch action A to ", func_766(iParam2, 0), " and action B to ", func_766(iParam3, 0));
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1272425.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_819(iParam0, iParam1, iParam2, iParam3);
}

bool func_805(var uParam0)
{
	if (!func_820(uParam0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(8, 162, "IS_ITEM_EXPIRED - ERROR! sItemGUID is not valid.");
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

bool func_806(bool bParam0)
{
	if (!func_661(bParam0, 1955773996))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item does not have required horse cargo tag - ", func_225(bParam0, 0));
		return false;
	}
	if (!func_821(bParam0, 1))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "IS_SATCHEL_ITEM_STOWABLE: item considered too small to be stowable - ", func_225(bParam0, 0));
		return false;
	}
	return true;
}

int func_807(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_369(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "GET_PED_SATCHEL_ITEM_COUNT - Attempting to check for an invalid item in the player's inventory!");
		return 0;
	}
	DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - Checking if item: ", func_225(bParam1, 0), " has a valid GUID.");
	Var0 = { func_822(iParam0, bParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(168, 157, "GET_PED_SATCHEL_ITEM_COUNT - No GUID found for item ", func_225(bParam1, 0), ", returning 0");
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, false);
	DEBUG::_0x1B08D1EB9D8C4931(648, 157, "GET_PED_SATCHEL_ITEM_COUNT - Found ", iVar4, " of item ", func_225(bParam1, 0));
	return iVar4;
}

bool func_808()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: invalid local player index...");
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: inactive local player index...");
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: owned vehicle doesn't exist...");
		return false;
	}
	if (!func_823(iVar0))
	{
		DEBUG::_0x1B08D1EB9D8C4931(8, 39, "NET_HUNTING_WAGON__CHECK__IS_ACTIVE: not a hunting wagon...");
		return false;
	}
	return true;
}

bool func_809(bool bParam0)
{
	return func_513(bParam0, 1279601681);
}

char* func_810(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RPG_PAUSE_PANEL_GENERAL";
		case 1:
			return "RPG_PAUSE_PANEL_HEALTH";
		case 2:
			return "RPG_PAUSE_PANEL_STAMINA";
		case 3:
			return "RPG_PAUSE_PANEL_DEADEYE";
		case 4:
			return "RPG_PAUSE_PANEL_STATS";
		case 5:
			return "RPG_PAUSE_PANEL_HORSE";
		default:
			break;
	}
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
	if (iParam1 >= 1)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "ERROR ENUM_TO_STRING - Unknown Enum Value ", iParam0, ", returning 'ENUM_NOT_FOUND'");
	}
	return "ENUM_NOT_FOUND";
}

int func_811(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_824(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_812(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_813(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_814(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_815(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		DEBUG::_0xD9911C7B5F8CD69C(136, 0, "GET_NUMBER_OF_DAYS_IN_MONTH: Invalid year [", iParam1, "] passed. iYear < 0. Using default year 0.");
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	DEBUG::_0xD9911C7B5F8CD69C(8, 0, "GET_NUMBER_OF_DAYS_IN_MONTH: Invalid month passed. Returning default 30 days.");
	return 30;
}

void func_816(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_825(iParam0, iParam6);
	func_826(iParam0, iParam5);
	func_827(iParam0, iParam4);
	func_828(iParam0, iParam3);
	func_829(iParam0, iParam2);
	func_830(iParam0, iParam1);
}

bool func_817()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_818()
{
	return Global_1913655.f_127 == 0;
}

void func_819(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DEBUG::_0xD9911C7B5F8CD69C(8, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Attempted to add an invalid transaction ID");
		return;
	}
	if (Global_1272425.f_20 < 20)
	{
		Global_1272425.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1272425.f_20.f_1[iVar0 /*21*/] = { Global_1272425.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_831(&(Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/]));
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/] = iParam0;
	Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1272425.f_20.f_1[(Global_1272425.f_20 - 1) /*21*/].f_3 = iParam3;
		DEBUG::_0xA308F935BDECCEC0(10888, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with batch action A ", func_766(iParam2, 0), " and action B ", func_766(iParam3, 0));
	}
	DEBUG::_0xA308F935BDECCEC0(648, 157, "ADD_CASHINVENTORY_TRANSACTION_STATUS - Added transaction ", iParam0, " with status ", func_771(iParam1, 0));
}

bool func_820(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_821(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_832(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_822(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_833(iParam0) };
	return func_834(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_823(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

int func_824(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_825(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		UNK_0x355E72323AEE83CC(-1, 6);
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_YEAR: Passed a <= 0 year which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		DEBUG::_0x83407B92D46F25C3(136, 0, "SET_TIMEOFDAY_YEAR: Passed a year [", iParam1, "]which is bigger than g_iYearOffset +- 32. Failed to set TIMEOFDAY");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_826(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MONTH: Given MM val < 0 or > 11 which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_827(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_812(*iParam0);
	iVar1 = func_811(*iParam0);
	if (iParam1 < 1 || iParam1 > func_815(iVar0, iVar1))
	{
		DEBUG::_0x83407B92D46F25C3(559240, 0, "SET_TIMEOFDAY_DAY: Passed an invalid day [", iParam1, "] for the TIMEOFDAY's current month [", iVar0, "] for year ", iVar1, ". GET_NUMBER_OF_DAYS_IN_MONTH(eMonth, iYear) = ", func_815(iVar0, iVar1), ". Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_828(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_HOUR: Passed a < 0 or > 23 hour which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_829(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_MINUTE: Passed a < 0 or > 60 min which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_830(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		DEBUG::_0x83407B92D46F25C3(8, 0, "SET_TIMEOFDAY_SECOND: Passed a < 0 or > 60 sec which is invalid. Failed to set TIMEOFDAY.");
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_831(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_835(&(uParam0->f_4));
}

int func_832(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		DEBUG::_0x9A6C65DDDBEC9C52(40, 158, "GET_INVENTORY_ITEM_SATCHEL_SIZE - failed to retreive the satchel item data from the itemdatabase for item: ", func_225(bParam0, 0));
		return -1;
	}
	return uVar0;
}

struct<5> func_833(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_834(iParam0, joaat("CHARACTER"), func_577(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_834(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_369(bParam1, 0))
	{
		DEBUG::_0xD9911C7B5F8CD69C(2216, 157, "GET_PED_INVENTORY_ITEM_GUID - Attempting to check for an invalid item ", func_225(bParam1, 0), " (", bParam1, ") in the player's inventory!");
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, bParam1, bParam6, &Var0);
	return Var0;
}

void func_835(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

