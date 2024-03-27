const cursor = document.getElementById("cursor");
const stalker = document.getElementById("stalker");
document.addEventListener("mousemove", (event) => {
  const x = event.clientX;
  const y = event.clientY;
  cursor.style.transform = `translate(${x}px, ${y}px)`;
  stalker.style.transform = `translate(${x}px, ${y}px)`;
});
