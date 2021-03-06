//Copyright Paul Reiche, Fred Ford. 1992-2002

/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef UQM_PLANETS_ELEMDATA_H_
#define UQM_PLANETS_ELEMDATA_H_

#include "libs/compiler.h"

#if defined(__cplusplus)
extern "C" {
#endif

/*------------------------------ Type Defines ----------------------------- */
enum
{
	COMMON = 0,
	CORROSIVE,
	BASE_METAL,
	NOBLE,
	RARE_EARTH,
	PRECIOUS,
	RADIOACTIVE,
	EXOTIC,

	NUM_ELEMENT_CATEGORIES
};

#define ElementCategory(et) (Elements[et] & 0x7)

/*------------------------------ Global Data ------------------------------ */

enum
{
	HYDROGEN, // Unused - Common
	HELIUM,
	LITHIUM,
	BERYLLIUM,
	BORON,
	CARBON,
	NITROGEN, // Unused - Common
	OXYGEN,
	FLUORINE,
	NEON,
	SODIUM,
	MAGNESIUM,
	ALUMINUM,
	SILICON,
	PHOSPHORUS,
	SULFUR,
	CHLORINE,
	ARGON,
	POTASSIUM,
	CALCIUM,
	SCANDIUM,
	TITANIUM,
	VANADIUM,
	CHROMIUM,
	MANGANESE,
	IRON,
	COBALT,
	NICKEL,
	COPPER,
	ZINC,
	GALLIUM,
	GERMANIUM,
	ARSENIC,
	SELENIUM,
	BROMINE,
	KRYPTON,
	RUBIDIUM,
	STRONTIUM,
	YTTRIUM,
	ZIRCONIUM,
	NIOBIUM,
	MOLYBDENUM,
	TECHNETIUM,
	RUTHENIUM,
	RHODIUM,
	PALLADIUM,
	SILVER,
	CADMIUM,
	INDIUM,
	TIN,
	ANTIMONY, // Unused - Base Metal
	TELLURIUM, // Unused - Base Metal
	IODINE,
	XENON,
	CESIUM,
	BARIUM,
	LANTHANUM,
	CERIUM,
	PRASEODYMIUM,
	NEODYMIUM,
	PROMETHIUM,
	SAMARIUM,
	EUROPIUM, // Unused - Rare Earth
	GADOLINIUM,
	TERBIUM,
	DYPROSIUM, // Unused - Rare Earth
	HOLMIUM,
	ERBIUM,
	THULIUM,
	YTTERBIUM,
	LUTETIUM,
	HAFNIUM, // Unused - Base Metal
	TANTALUM,
	TUNGSTEN,
	RHENIUM,
	OSMIUM,
	IRIDIUM,
	PLATINUM,
	GOLD,
	MERCURY,
	THALLIUM,
	LEAD,
	BISMUTH,
	POLONIUM,
	ASTATINE,
	RADON,
	FRANCIUM,
	RADIUM,
	ACTINIUM,
	THORIUM,
	PROTACTINIUM,
	URANIUM,
	NEPTUNIUM,
	PLUTONIUM,
	NUMBER_OF_NORMAL,

	OZONE = NUMBER_OF_NORMAL,
	FREE_RADICALS,
	CARBON_DIOXIDE,
	CARBON_MONOXIDE, // Unused - Common
	AMMONIA,
	METHANE,
	SULFURIC_ACID,
	HYDROCHLORIC_ACID,
	HYDROCYANIC_ACID,
	FORMIC_ACID,
	PHOSPHORIC_ACID,
	FORMALDEHYDE,
	CYANOACETYLENE,
	METHANOL,
	ETHANOL,
	SILICON_MONOXIDE, // Unused - Common
	TITANIUM_OXIDE, // Unused - Common
	ZIRCONIUM_OXIDE, // Unused - Common
	WATER, // Unused - Common
	SILICON_COMPOUNDS, // Unused - Common
	METAL_OXIDES, // Unused - Common
	QUANTUM_BH, // Unused - Exotic
	NEUTRONIUM,
	MAGNETIC_MONOPOLES,
	DEGENERATE_MATTER,
	RT_SUPER_FLUID,
	AGUUTI_NODULES,
	IRON_COMPOUNDS, // Unused - Common
	ALUMINUM_COMPOUNDS, // Unused - Common
	NITROUS_OXIDE, // Unused - Common
	RADIOACTIVE_COMPOUNDS, // Unused - Radioactive
	HYDROCARBONS,
	CARBON_COMPOUNDS, // Unused - Common
	ANTIMATTER,
	CHARON_DUST, // Unused - Exotic
	REISBURG_HELICES,
	TZO_CRYSTALS,
	CALCIUM_COMPOUNDS, // Unused - Common
	NITRIC_ACID,

	NUMBER_OF_ELEMENTS
};
#define NUMBER_OF_SPECIAL (NUMBER_OF_ELEMENTS - NUMBER_OF_NORMAL)

#define CHANCE_MASK ((1 << 2) - 1)

#define FEW 1
#define MODERATE 4
#define NUMEROUS 8

enum
{
	LIGHT = 0,
	MEDIUM,
	HEAVY
};
#define NOTHING (BYTE)(~0)

#define MINERAL_DEPOSIT(qn,ql) MAKE_BYTE (qn, ql)
#define DEPOSIT_QUANTITY(md) LONIBBLE (md)
#define DEPOSIT_QUALITY(md) HINIBBLE (md)

#define MAX_ELEMENT_UNITS 0xF

extern const BYTE *Elements;

#if defined(__cplusplus)
}
#endif

#endif /* UQM_PLANETS_ELEMDATA_H_ */

