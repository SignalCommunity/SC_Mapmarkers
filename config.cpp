class CfgPatches
{
	class sc_mapmarkers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		version = 0.1;
		author[] = {"Bismarck"};
	};
};
/*
class CfgMarkers
{
	class Coy_HQ {
		name = "Coy HQ";
		icon = "\sc_mapmarkers\data\coy.paa";
		color[] = {0.8,0.8,0.8,1};
		size = 48;
		shadow = 0;
		scope = 0;
	};
		class Plt_HQ
		{
			name = "Platoon HQ";	//generic named one, says PLT instead of 1 PL or 2 PL
			icon = "\sc_mapmarkers\data\pl.paa";
			color[] = {0.5,0,0.5,1};
			size = 44;
			shadow = 0;
			scope = 0;
		};
		class 1_Plt_HQ
		{
			name = "1 Platoon HQ";
			icon = "\sc_mapmarkers\data\1pl.paa";
			color[] = {0.5,0,0.5,1};
			size = 44;
			shadow = 0;
			scope = 0;
		};
			class 1_A_Squad_HQ
			{
				name = "Alpha Squad HQ";
				icon = "\sc_mapmarkers\data\asl.paa";
				color[] = {1,0,0,1};
				size = 40;
				shadow = 0;
				scope = 0;
			};
				class 1_A_Ft_1
				{
					name = "Alpha 1";
					icon = "\sc_mapmarkers\data\a1.paa";
					color[] = {1,0,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 1_A_Ft_2
				{
					name = "Alpha 2";
					icon = "\sc_mapmarkers\data\a2.paa";
					color[] = {1,0,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 1_A_Ft_3
				{
					name = "Alpha 3";
					icon = "\sc_mapmarkers\data\a3.paa";
					color[] = {1,0,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
			class 1_B_Squad_HQ
			{
				name = "Bravo Squad HQ";
				icon = "\sc_mapmarkers\data\bsl.paa";
				color[] = {1,1,0,1};
				size = 40;
				shadow = 0;
				scope = 0;
			};
				class 1_B_Ft_1
				{
					name = "Bravo 1";
					icon = "\sc_mapmarkers\data\b1.paa";
					color[] = {1,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 1_B_Ft_2
				{
					name = "Bravo 2";
					icon = "\sc_mapmarkers\data\b2.paa";
					color[] = {1,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 1_B_Ft_3
				{
					name = "Bravo 3";
					icon = "\sc_mapmarkers\data\b3.paa";
					color[] = {1,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
			class 1_C_Squad_HQ
			{
				name = "Charlie Squad HQ";
				icon = "\sc_mapmarkers\data\csl.paa";
				color[] = {0,1,0,1};
				size = 40;
				shadow = 0;
				scope = 0;
			};
				class 1_C_Ft_1
				{
					name = "Charlie 1";
					icon = "\sc_mapmarkers\data\c1.paa";
					color[] = {0,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 1_C_Ft_2
				{
					name = "Charlie 2";
					icon = "\sc_mapmarkers\data\c2.paa";
					color[] = {0,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 1_C_Ft_3
				{
					name = "Charlie 3";
					icon = "\sc_mapmarkers\data\c3.paa";
					color[] = {0,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
		class 2_Plt_HQ
		{
			name = "2 Platoon HQ";
			icon = "\sc_mapmarkers\data\2pl.paa";
			color[] = {0.5,0,0.5,1};
			size = 44;
			shadow = 0;
			scope = 0;
		};
			class 2_D_Squad_HQ
			{
				name = "Delta Squad HQ";
				icon = "\sc_mapmarkers\data\dsl.paa";
				color[] = {1,0,0,1};
				size = 40;
				shadow = 0;
				scope = 0;
			};
				class 2_D_Ft_1
				{
					name = "Delta 1";
					icon = "\sc_mapmarkers\data\d1.paa";
					color[] = {1,0,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 2_D_Ft_2
				{
					name = "Delta 2";
					icon = "\sc_mapmarkers\data\d2.paa";
					color[] = {1,0,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 2_D_Ft_3
				{
					name = "Delta 3";
					icon = "\sc_mapmarkers\data\d3.paa";
					color[] = {1,0,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
			class 2_E_Squad_HQ
			{
				name = "Echo Squad HQ";
				icon = "\sc_mapmarkers\data\esl.paa";
				color[] = {1,1,0,1};
				size = 40;
				shadow = 0;
				scope = 0;
			};
				class 2_E_Ft_1
				{
					name = "Echo 1";
					icon = "\sc_mapmarkers\data\e1.paa";
					color[] = {1,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 2_E_Ft_2
				{
					name = "Echo 2";
					icon = "\sc_mapmarkers\data\e2.paa";
					color[] = {1,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 2_E_Ft_3
				{
					name = "Echo 3";
					icon = "\sc_mapmarkers\data\e3.paa";
					color[] = {1,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
			class 2_F_Squad_HQ
			{
				name = "Foxtrot Squad HQ";
				icon = "\sc_mapmarkers\data\fsl.paa";
				color[] = {0,1,0,1};
				size = 40;
				shadow = 0;
				scope = 0;
			};
				class 2_F_Ft_1
				{
					name = "Foxtrot 1";
					icon = "\sc_mapmarkers\data\f1.paa";
					color[] = {0,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 2_F_Ft_2
				{
					name = "Foxtrot 2";
					icon = "\sc_mapmarkers\data\f2.paa";
					color[] = {0,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};
				class 2_F_Ft_3
				{
					name = "Foxtrot 3";
					icon = "\sc_mapmarkers\data\f3.paa";
					color[] = {0,1,0,1};
					size = 36;
					shadow = 0;
					scope = 0;
				};

	class MMG {
		name = "MMG";
		icon = "\sc_mapmarkers\data\mmg.paa";	//generic named one, says MMG instead of MMG#
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MMG_1 {
		name = "MMG 1";
		icon = "\sc_mapmarkers\data\mmg1.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MMG_2 {
		name = "MMG 2";
		icon = "\sc_mapmarkers\data\mmg2.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MMG_3 {
		name = "MMG 3";
		icon = "\sc_mapmarkers\data\mmg3.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};



	class HMG {
		name = "HMG";
		icon = "\sc_mapmarkers\data\hmg.paa";	//generic named one, says HMG instead of HMG#
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HMG_1 {
		name = "HMG 1";
		icon = "\sc_mapmarkers\data\hmg1.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HMG_2 {
		name = "HMG 2";
		icon = "\sc_mapmarkers\data\hmg2.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HMG_3 {
		name = "HMG 3";
		icon = "\sc_mapmarkers\data\hmg3.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};



	class MAT {
		name = "MAT";
		icon = "\sc_mapmarkers\data\mat.paa";	//generic named one, says MAT instead of MAT#
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MAT_1 {
		name = "MAT 1";
		icon = "\sc_mapmarkers\data\mat1.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MAT_2 {
		name = "MAT 2";
		icon = "\sc_mapmarkers\data\mat2.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MAT_3 {
		name = "MAT 3";
		icon = "\sc_mapmarkers\data\mat3.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};



	class HAT {
		name = "HAT";
		icon = "\sc_mapmarkers\data\hat.paa";	//generic named one, says HAT instead of HAT#
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HAT_1 {
		name = "HAT 1";
		icon = "\sc_mapmarkers\data\hat1.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HAT_2 {
		name = "HAT 2";
		icon = "\sc_mapmarkers\data\hat2.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HAT_3 {
		name = "HAT 3";
		icon = "\sc_mapmarkers\data\hat3.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};



	class MTR {
		name = "MTR";
		icon = "\sc_mapmarkers\data\mtr.paa";	//generic named one, says MTR instead of MTR#
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MTR_1 {
		name = "MTR 1";
		icon = "\sc_mapmarkers\data\mtr1.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MTR_2 {
		name = "MTR 2";
		icon = "\sc_mapmarkers\data\mtr2.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MTR_3 {
		name = "MTR 3";
		icon = "\sc_mapmarkers\data\mtr3.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};



	class MSAM {
		name = "MSAM";
		icon = "\sc_mapmarkers\data\msam.paa";	//generic named one, says MSAM instead of MSAM#
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MSAM_1 {
		name = "MSAM 1";
		icon = "\sc_mapmarkers\data\msam1.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MSAM_2 {
		name = "MSAM 2";
		icon = "\sc_mapmarkers\data\msam2.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class MSAM_3 {
		name = "MSAM 3";
		icon = "\sc_mapmarkers\data\msam3.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};



	class HSAM {
		name = "HSAM";
		icon = "\sc_mapmarkers\data\hsam.paa";	//generic named one, says HSAM instead of HSAM#
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HSAM_1 {
		name = "HSAM 1";
		icon = "\sc_mapmarkers\data\hsam1.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HSAM_2 {
		name = "HSAM 2";
		icon = "\sc_mapmarkers\data\hsam2.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
	class HSAM_3 {
		name = "HSAM 3";
		icon = "\sc_mapmarkers\data\hsam3.paa";
		color[] = {1,0.6,0,1};
		size = 36;
		shadow = 0;
		scope = 1;
	};
};
*/