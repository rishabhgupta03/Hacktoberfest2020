/* Marie invented a Time Machine and wants to test it by time-traveling to visit 
 * Russia on the Day of the Programmer (the 256th day of the year) during a year in the inclusive range from 1700 to 2700.
 * From 1700 to 1917, Russia's official calendar was the Julian calendar; since 1919 they used the Gregorian calendar system.
 * The transition from the Julian to Gregorian calendar system occurred in 1918, when the next day after January 31st was February 14th.
 * This means that in 1918, February 14th was the 32nd day of the year in Russia.
 * In both calendar systems, February is the only month with a variable amount of days; it has 29 days during a leap year, 
 * and 28 days during all other years. In the Julian calendar, leap years are divisible by 4; in the Gregorian calendar, 
 * leap years are either of the following:
 * 1. Divisible by 400.
 * 2. Divisible by 4 and not divisible by 100.
 * Given a year, , find the date of the 256th day of that year according to the official Russian calendar during that year. 
 * Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is .
 */

import java.io.*
import java.math.*
import java.security.*
import java.text.*
import java.util.*
import java.util.concurrent.*
import java.util.function.*
import java.util.regex.*
import java.util.stream.*
import kotlin.collections.*
import kotlin.comparisons.*
import kotlin.io.*
import kotlin.jvm.*
import kotlin.jvm.functions.*
import kotlin.jvm.internal.*
import kotlin.ranges.*
import kotlin.sequences.*
import kotlin.text.*

// Complete the dayOfProgrammer function below.
fun dayOfProgrammer(year: Int): String {

    var total: Int = 273
    if (year == 1918) {
        total -= 13
    }
    else if (year < 1918) {
        if (year % 4 == 0) {
            total += 1
        }
    }
    else {
        if (year % 4 == 0) {
            if (year % 400 == 0) {
                total += 1
            }
            else if (year % 100 != 0) {
                total +=1
            }
        }
    }
    var fin: Int = total - 256
    val sept = 30 - fin
    return "$sept.09.$year"
}

fun main(args: Array<String>) {
    val year = readLine()!!.trim().toInt()

    val result = dayOfProgrammer(year)

    println(result)
}