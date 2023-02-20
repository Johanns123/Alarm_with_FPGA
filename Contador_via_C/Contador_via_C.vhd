library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity Contador_via_C is
	port(
		signal CLK_50 : in std_logic;
		signal RESET  : in std_logic;
		signal KEY	  : in std_logic_vector(3 downto 0);
		signal HEX1, HEX3, HEX2, HEX4	  : out std_logic;
		signal LEDY	  : out std_logic_vector(3 downto 0);
		signal SEG	  : out std_logic_vector(6 downto 0)
	);
	
end entity Contador_via_C;


architecture hardware of Contador_via_C is

signal clk : std_logic;
signal display1, display2, display3, display4 : std_logic;
signal Tseg 			: std_logic_vector(6 downto 0);
signal dado_reg   	: std_logic_vector (3 downto 0);
signal modo_reg		: std_logic_vector(1 downto 0);
signal local_reg	   : std_logic_vector (1 downto 0);
signal enable_reg    : std_logic;
signal led : std_logic_vector(3 downto 0);

component Controlador_display_paralelo is
	port(
		signal clk 		: in std_logic;
		signal key		: in std_logic;
		signal RESET   : in std_logic;
		signal dado    : in unsigned (3 downto 0);
		signal modo		: in unsigned (1 downto 0);
		signal local   : in unsigned (1 downto 0);
		signal HEX1, HEX2, HEX3, HEX4	  : out std_logic;
		signal SEG	  : out std_logic_vector(6 downto 0)
	);
end component Controlador_display_paralelo;

component my_processor is
	port (
		clk_clk                               : in  std_logic                    := 'X';             -- clk
		reset_reset_n                         : in  std_logic                    := 'X';             -- reset_n
		led_yellow_external_connection_export : out std_logic_vector(3 downto 0);                    -- export
		key_external_connection_export        : in  std_logic_vector(3 downto 0) := (others => 'X'); -- export
		local_external_connection_export      : out std_logic_vector(1 downto 0);                    -- export
		modo_external_connection_export       : out std_logic_vector(1 downto 0);                    -- export
		dado_external_connection_export       : out std_logic_vector(3 downto 0);                    -- export
		enable_external_connection_export     : out std_logic                                        -- export
	);
end component my_processor;

	

begin
	
	clk <= CLK_50;
	LEDY(0) <= not led(3);
	LEDY(1) <= not led(2);
	LEDY(2) <= not led(1);
	LEDY(3) <= not led(0);
	HEX1 <= not display1;
	HEX2 <= not display2;
	HEX3 <= not display3;
	HEX4 <= not display4;
	SEG <= not Tseg;
		
cont_disp : controlador_display_paralelo port map(clk, enable_reg, RESET, unsigned(dado_reg), unsigned(modo_reg), unsigned(local_reg),
				display1, display2, display3, display4, Tseg);	
NIOS_II   : my_processor port map(clk, RESET, led, KEY, local_reg, modo_reg, dado_reg, enable_reg); 
end architecture hardware;