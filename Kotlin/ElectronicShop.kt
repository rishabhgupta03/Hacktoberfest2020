import java.util.*

/**
 * A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget.
 * Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return -1
 **/

fun getMoneySpent(keyboards: Array<Int>, drives: Array<Int>, b: Int): Int {
    var countItem = -1
    for(k in keyboards.indices){

        for(d in drives.indices){
            val total = keyboards[k] + drives[d]
            if(total <= b && countItem < total){
                countItem = total
            }
        }
    }

    return countItem
}

fun main(args: Array<String>) {
    val scan = Scanner(System.`in`)

    val bnm = scan.nextLine().split(" ")

    val b = bnm[0].trim().toInt()

    val n = bnm[1].trim().toInt()

    val m = bnm[2].trim().toInt()

    val keyboards = scan.nextLine().split(" ").map{ it.trim().toInt() }.toTypedArray()

    val drives = scan.nextLine().split(" ").map{ it.trim().toInt() }.toTypedArray()

    /*
     * The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
     */

    val moneySpent = getMoneySpent(keyboards, drives, b)

    println(moneySpent)
}
