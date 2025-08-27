class CfgPatches {
    class fdelta_main {
        name = "420th Customizations";
        author = "thegamecracks";
        url = "https://github.com/thegamecracks/420th-Customizations";

        requiredVersion = 2.20;
        requiredAddons[] = {
            "A3_Characters_F_Orange",
            "A3_Supplies_F_AoW_Bags",
        };
        skipWhenMissingDependencies = 0;

        units[] = {};
    };
};

class CfgVehicles {
    // B_CivilianBackpack_01_Sport_Red_F
    class B_CivilianBackpack_01_Base_F {
        maximumLoad = 300; // 240
    };
};

class CfgWeapons {
    class U_C_Paramedic_01_F {
        class ItemInfo {
            containerClass = "Supply500"; // "Supply30"
        };
    };
};
