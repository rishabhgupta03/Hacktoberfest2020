/* You have been asked to help study the population of birds migrating across the continent. 
 * Each type of bird you are interested in will be identified by an integer value. 
 * Each time a particular kind of bird is spotted, its id number will be added to your array of sightings. 
 * You would like to be able to find out which type of bird is most common given a list of sightings. 
 * Your task is to print the type number of that bird and if two or more types of birds are equally common, 
 * choose the type with the smallest ID number.
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

// Complete the migratoryBirds function below.
fun migratoryBirds(arr: Array<Int>): Int {

    val hash: HashMap<Int, Int> = HashMap()
    hash.put(1, 0)
    hash.put(2, 0)
    hash.put(3, 0)
    hash.put(4, 0)
    hash.put(5, 0)
    for (value in arr) {
        var temp: Int = hash[value]!!
        temp += 1
        hash[value] = temp
    }
    var max = hash[1]!!
    var key: Int = 1
    for (element in hash) {
        val count = element.value as Int
        if (max < count) {
            max = count
            key = element.key
        }
        else if (max == count) {
            if (key > element.key) {
                max = count
                key = element.key
            }
        }
    }
    return key
}

fun main(args: Array<String>) {
    val arrCount = readLine()!!.trim().toInt()

    val arr = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = migratoryBirds(arr)

    println(result)
}