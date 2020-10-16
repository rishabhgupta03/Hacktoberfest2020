const createState = (state) => {
    return new Proxy(state, {
        set(target, property, value) {
            target[property] = value;
            render();
            return true;
        }
    });
};

const state = createState({
    name: "Enter value here!"
})

document.querySelector('[data-binding="name"]').innerHTML = state.name;
document.querySelector('[data-model="name"]').value = state.name;

const render = () => {
    document.querySelector('[data-binding="name"]').innerHTML = state.name;
    document.querySelector('[data-model="name"]').value = state.name;
}

const listener = (event) => {
    state[event.target.dataset.model] = event.target.value;
}

document.querySelector('[data-model="name"]').addEventListener('keyup', listener);