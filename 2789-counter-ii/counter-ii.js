/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let input = init;
    let save = init;
    return {
        increment: () => {
            ++input;
            return input;
        },
        decrement: () => {
            input--;
            return input;
        },
        reset: () => {
            input = save;
            return input;
        },
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */