/* Two friends Anna and Brian, are deciding how to split the bill at a dinner.
 * Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion.
 * You must determine if his calculation is correct.
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

// Complete the bonAppetit function below.
fun bonAppetit(bill: Array<Int>, k: Int, b: Int): Unit {

    var total: Int = 0
    for (i in 0..bill.size-1) {
        if (i != k) {
            total += bill[i]
        }
    }
    total /= 2
    if (total == b)
        println("Bon Appetit")
    else {
        println(b - total)
    }
}

fun main(args: Array<String>) {
    val nk = readLine()!!.trimEnd().split(" ")

    val n = nk[0].toInt()

    val k = nk[1].toInt()

    val bill = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val b = readLine()!!.trim().toInt()

    bonAppetit(bill, k, b)
}
